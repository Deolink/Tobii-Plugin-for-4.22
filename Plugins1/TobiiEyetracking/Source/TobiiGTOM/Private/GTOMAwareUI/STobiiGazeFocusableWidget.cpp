/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "STobiiGazeFocusableWidget.h"
#include "TobiiBlueprintLibrary.h"
#include "TobiiGTOMBlueprintLibrary.h"

#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Public/Slate/SceneViewport.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Engine/Engine.h"

#include "Runtime/Core/Public/HAL/IConsoleManager.h"

static TAutoConsoleVariable<int32> CVarEnableCleanUI(TEXT("tobii.EnableCleanUI"), 1, TEXT("0 - CleanUI is disabled. 1 - CleanUI is enabled."));
static TAutoConsoleVariable<float> CVarCleanUIFadeInTimeSecs(TEXT("tobii.CleanUIFadeInTimeSecs"), 0.0f, TEXT("We want the fade in time to be fairly fast so that the information is instantly available to the user."));
static TAutoConsoleVariable<float> CVarCleanUIFadeOutTimeSecs(TEXT("tobii.CleanUIFadeOutTimeSecs"), 1.8f, TEXT("The fade out time should be fairly slow however to make sure that it doesn't draw peripheral vision attention."));
static TAutoConsoleVariable<float> CVarCleanUIMinAlpha(TEXT("tobii.CleanUIMinAlpha"), 0.3f, TEXT("The clean UI won't fade something out beyond this minimum alpha."));
static TAutoConsoleVariable<float> CVarCleanUIMaxAlpha(TEXT("tobii.CleanUIMaxAlpha"), 1.0f, TEXT("Change this if you don't want the clean UI to increase alpha beyond this point"));

STobiiGazeFocusableWidget::STobiiGazeFocusableWidget()
	: CleanUIMode(ETobiiCleanUIMode::Normal)

	, FadeInTimeSecsOverride(-1.0f)
	, FadeOutTimeSecsOverride(-1.0f)
	, MinAlphaOverride(-1.0f)
	, MaxAlphaOverride(-1.0f)
	, bFastHitTesting(false)
	, bTriggerOnMouseOver(false)

	, ParentRadialMenuSlot(nullptr)
	, CleanUISuppressedUntil(FDateTime::UtcNow())
	, CleanUIAlpha(1.0f)
	, bHitByGaze(false)
	, bHitByMouse(false)
	, bIsWorldSpaceWidget(false)

	, CleanUIContainersToPollHitsFrom()
	, ChildWidgetBoundsToIgnore()
{
	bCanSupportFocus = false;

	SetCanTick(true);
}

void STobiiGazeFocusableWidget::Construct(const FArguments& InArgs)
{
	SBox::FArguments ParentArgs;
	ParentArgs._HAlign = InArgs._HAlign;
	ParentArgs._VAlign = InArgs._VAlign;
	ParentArgs._Padding = InArgs._Padding;
	ParentArgs._Content = InArgs._Content;
	SBox::Construct(ParentArgs);

	CleanUIMode = InArgs._CleanUIMode;

	FadeInTimeSecsOverride = InArgs._CleanUIFadeInTimeSecsOverride;
	FadeOutTimeSecsOverride = InArgs._CleanUIFadeOutTimeSecsOverride;
	MinAlphaOverride = InArgs._CleanUIMinAlphaOverride;
	MaxAlphaOverride = InArgs._CleanUIMaxAlphaOverride;

	OnHovered = InArgs._OnHovered;
	OnUnhovered = InArgs._OnUnhovered;

	bFastHitTesting = InArgs._bCleanUIFastHitTesting;
	bTriggerOnMouseOver = InArgs._bCleanUITriggerOnMouseOver;
}

void STobiiGazeFocusableWidget::AddExtraCleanUIContainerToPollHitsFrom(STobiiGazeFocusableWidget* CleanUIContainerToPoll, bool PollGazeHits /*= true*/, bool PollMouseHits /*= true*/)
{
	if (CleanUIContainerToPoll != nullptr)
	{
		CleanUIPollingInfo PollingInfo;
		PollingInfo.CleanUIToPollFrom = TWeakPtr<SWidget>(CleanUIContainerToPoll->AsShared());
		PollingInfo.PollGazeHits = PollGazeHits;
		PollingInfo.PollMouseHits = PollMouseHits;
		CleanUIContainersToPollHitsFrom.Add(PollingInfo);
	}
}

void STobiiGazeFocusableWidget::RemoveExtraCleanUIContainerToPollHitsFrom(STobiiGazeFocusableWidget* CleanUIContainerToStopPolling)
{
	if (CleanUIContainerToStopPolling != nullptr)
	{
		CleanUIContainersToPollHitsFrom.RemoveAll([=](CleanUIPollingInfo& CurCleanUIPollingInfo)
		{
			return !CurCleanUIPollingInfo.CleanUIToPollFrom.IsValid() || CurCleanUIPollingInfo.CleanUIToPollFrom.HasSameObject(CleanUIContainerToStopPolling);
		});
	}
}

void STobiiGazeFocusableWidget::AddChildWidgetBoundsToIgnore(TWeakPtr<SWidget> WidgetToIgnoreBoundsOf)
{
	if (WidgetToIgnoreBoundsOf.IsValid())
	{
		ChildWidgetBoundsToIgnore.Add(WidgetToIgnoreBoundsOf);
	}
}

void STobiiGazeFocusableWidget::RemoveChildWidgetBoundsToIgnore(TWeakPtr<SWidget> WidgetToStopIgnoringBoundsOf)
{
	if (WidgetToStopIgnoringBoundsOf.IsValid())
	{
		ChildWidgetBoundsToIgnore.Remove(WidgetToStopIgnoringBoundsOf);
	}
}

void STobiiGazeFocusableWidget::SuppressCleanUIFor(float SecondsForCleanUIToBeSuppressed)
{
	CleanUISuppressedUntil = FDateTime::UtcNow() + FTimespan::FromSeconds(SecondsForCleanUIToBeSuppressed);
}

void STobiiGazeFocusableWidget::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	if (CleanUIMode == ETobiiCleanUIMode::Disabled
		|| GEngine == nullptr
		|| GEngine->GameViewport == nullptr 
		|| GEngine->GameViewport->GetGameViewport() == nullptr
		|| GetChildren()->Num() == 0)
	{
		CleanUIAlpha = 1.0f;
		return;
	}

	//If this is a world space widget, our data will be set from the outside.
	FVector2D ScreenSpaceGazeCenterPx;
	FVector2D ScreenSpaceGazeEllipseRadiiPx;
	if (!bIsWorldSpaceWidget)
	{
		const FTobiiDisplayInfo& DisplayInfo = ITobiiCore::GetEyeTracker()->GetDisplayInformation();
		if (DisplayInfo.MainViewportWidthPx > 0 && DisplayInfo.MainViewportHeightPx > 0)
		{
			const FTobiiGazeData& CombinedGazeData = ITobiiCore::GetEyeTracker()->GetCombinedGazeData();
			FVector2D ScreenSpaceGazePointUNorm(CombinedGazeData.ScreenGazePointPx.X / DisplayInfo.MainViewportWidthPx, CombinedGazeData.ScreenGazePointPx.Y / DisplayInfo.MainViewportHeightPx);
			UTobiiBlueprintLibrary::ViewportCoordinateUNormToVirtualDesktopPixel(ScreenSpaceGazePointUNorm, ScreenSpaceGazeCenterPx);
			ScreenSpaceGazeEllipseRadiiPx = CombinedGazeData.ScreenGazeCircleRadiiPx;
			bIsGazeStable = CombinedGazeData.bIsStable;
		}
		else
		{
			bIsGazeStable = false;
		}
	}
	
	// Assume not hit by mouse
	bHitByMouse = false;

	// We only update bHitByGaze if the gaze point from the tracker is actually stable. This prevents UI elements from flickering when they're gazed upon but eyes are moving around, e.g. when reading text.
	bHitByGaze = bIsGazeStable ? false : bHitByGaze;

	// First check if already have any hits on our CleanUIContainersToPollHitsFrom
	for (CleanUIPollingInfo& PollingInfo : CleanUIContainersToPollHitsFrom)
	{
		if (PollingInfo.CleanUIToPollFrom.IsValid())
		{
			TSharedPtr<SWidget> CleanUIWidget = PollingInfo.CleanUIToPollFrom.Pin();
			STobiiGazeFocusableWidget* CleanUIToPollFrom = (STobiiGazeFocusableWidget*)CleanUIWidget.Get();
			if (PollingInfo.PollGazeHits && CleanUIToPollFrom->bHitByGaze)
			{
				bHitByGaze = true;
			}
			if (PollingInfo.PollMouseHits && CleanUIToPollFrom->bHitByMouse)
			{
				bHitByMouse = true;
			}

			//Both have to be true here to break for widget dependency reasons. @TODO-Henrik: Elaborate
			if (bHitByGaze && bHitByMouse)
			{
				break;
			}
		}
	}

	TArray<TWeakPtr<SWidget>> WidgetsToHitTest;
	if (!bHitByGaze || !bHitByMouse)
	{
		// We didn't get both gaze and mouse hits from any user-added extra CleanUIContainers, so we check if we get a gaze or mouse hit on our own geometries.

		if (bFastHitTesting)
		{
			//If we are on the fast path, ignore children.
			WidgetsToHitTest.Add(this->AsShared());
		}
		else
		{
			bool AnyChildIsDirty = false;
			FindChildWidgetsToHitTest(this->AsShared(), AnyChildIsDirty, WidgetsToHitTest);
			// AnyChildIsDirty means that some child-widget either had a render transform, or was explicitly designated to be excluded from hit-tests by the user.
			// In those cases our own bounds are not sufficient to represent the bounds of our children, and WidgetsToHitTest was filled with specific child widgets to hit-test instead.
			if (!AnyChildIsDirty)
			{
				// All children clean, just add ourself as representative of all children's bounds.
				WidgetsToHitTest.Add(this->AsShared());
			}
		}

		// We iterate the widgets in reverse, since the bounds to check are most likely bigger at the end of array (top of tree)
		for (int32 CurWidgetIndex = WidgetsToHitTest.Num() - 1; CurWidgetIndex >= 0; --CurWidgetIndex)
		{
			TWeakPtr<SWidget>& CurWidgetPtr = WidgetsToHitTest[CurWidgetIndex];
			if (CurWidgetPtr.IsValid())
			{
				// Hit-test GazePoint against currently set bounds (only if gaze is stable)
				if (!bHitByGaze && bIsGazeStable)
				{
					if (bIsWorldSpaceWidget)
					{
						bHitByGaze = bHasWorldConeFocus;
					}
					else
					{
						//@TODO: Investigate if we should just project screen space widgets to the near plane and do a cone/sphere test instead? This is more correct, but world space would be easier since we don't have to do different things...
						TSharedPtr<SWidget> CurWidgetPinnedPtr = CurWidgetPtr.Pin();
						FSlateRect WidgetRenderBounds = CurWidgetPinnedPtr->GetCachedGeometry().GetRenderBoundingRect();
						FVector2D HalfExtent = WidgetRenderBounds.GetBottomRight() - WidgetRenderBounds.GetCenter();
						bHitByGaze = UTobiiGTOMBlueprintLibrary::TestRectEllipseIntersection(WidgetRenderBounds.GetCenter(), FVector2D(1.0f, 0.0f), FVector2D(0.0f, 1.0f), HalfExtent, ScreenSpaceGazeCenterPx, ScreenSpaceGazeEllipseRadiiPx, 0.0f);
					}
				}

				// Hit-test MousePosition against currently set bounds
				if (bTriggerOnMouseOver && !bHitByMouse)
				{
					bHitByMouse = bIsHovered;
				}
			}

			//Both have to be true here to break for widget dependency reasons. @TODO-Henrik: Elaborate
			if (bHitByGaze && bHitByMouse)
			{
				break;
			}
		}
	}

	bool bCleanUISuppressed = FDateTime::UtcNow() < CleanUISuppressedUntil;
	float MinAlpha = MinAlphaOverride >= 0.0f ? MinAlphaOverride : CVarCleanUIMinAlpha.GetValueOnAnyThread();
	float MaxAlpha = MaxAlphaOverride >= 0.0f ? MaxAlphaOverride : CVarCleanUIMaxAlpha.GetValueOnAnyThread();
	if (bCleanUISuppressed || bHitByGaze || bHitByMouse)
	{
		float FadeInTime = FadeInTimeSecsOverride >= 0.0f ? FadeInTimeSecsOverride : CVarCleanUIFadeInTimeSecs.GetValueOnAnyThread();
		CleanUIAlpha = FadeInTime > 0.0f ? FMath::Clamp(CleanUIAlpha + InDeltaTime / FadeInTime, MinAlpha, MaxAlpha) : MaxAlpha;
	}
	else
	{
		float FadeOutTime = FadeOutTimeSecsOverride >= 0.0f ? FadeOutTimeSecsOverride : CVarCleanUIFadeOutTimeSecs.GetValueOnAnyThread();
		CleanUIAlpha = FadeOutTime > 0.0f ? FMath::Clamp(CleanUIAlpha - InDeltaTime / FadeOutTime, MinAlpha, MaxAlpha) : MinAlpha;
	}

	if (ParentRadialMenuSlot != nullptr)
	{
		ParentRadialMenuSlot->AlphaAttr.Set(CleanUIAlpha);
	}
}

int32 STobiiGazeFocusableWidget::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	FWidgetStyle CompoundedWidgetStyle = FWidgetStyle(InWidgetStyle).BlendColorAndOpacityTint(FLinearColor(1.0f, 1.0f, 1.0f, (ParentRadialMenuSlot == nullptr) ? CleanUIAlpha : 1.0f));
	return SBox::OnPaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, CompoundedWidgetStyle, bParentEnabled);
}

void STobiiGazeFocusableWidget::FindChildWidgetsToHitTest(TWeakPtr<SWidget> InCurNode, bool& OutSubTreeWasDirty, TArray<TWeakPtr<SWidget>>& OutWidgetsToHitTest)
{
	OutSubTreeWasDirty = false;
	if (!InCurNode.IsValid())
	{
		return;
	}
	TSharedPtr<SWidget> CurNodePinned = InCurNode.Pin();
	if (ChildWidgetBoundsToIgnore.Contains(CurNodePinned))
	{
		// This node is dirty due to being explicitly excluded from bounds checking.
		// Do NOT add to hit-test, but indicate to our parent that this subtree is dirty, and return before further recursion along this branch.
		OutSubTreeWasDirty = true;
		return;
	}

	TArray<TWeakPtr<SWidget>> MyCleanChildren;
	MyCleanChildren.Reset(CurNodePinned->GetChildren()->Num());
	
	for (int32 ChildIndex = 0; ChildIndex < CurNodePinned->GetChildren()->Num(); ChildIndex++)
	{
		bool ChildSubTreeWasDirty = false;
		TWeakPtr<SWidget> ChildNode = CurNodePinned->GetChildren()->GetChildAt(ChildIndex)->AsShared();
		
		// Recurse down child-subtree
		FindChildWidgetsToHitTest(ChildNode, ChildSubTreeWasDirty, OutWidgetsToHitTest);

		if (!ChildSubTreeWasDirty)
		{
			// Whole child-subtree was clean. Add to clean-list.
			MyCleanChildren.Add(ChildNode);
		}
	}

	const bool AnyChildSubTreeWasDirty = MyCleanChildren.Num() != CurNodePinned->GetChildren()->Num();
	if (AnyChildSubTreeWasDirty)
	{
		// Any clean sibling to a dirty node or subtree must also be hit-tested separately, since the parent cannot be used as a representative bounding of all its children.
		for (TWeakPtr<SWidget>& CleanChild : MyCleanChildren)
		{
			if (!CleanChild.IsValid())
			{
				continue;
			}
			TSharedPtr<SWidget> CleanChildPinned = CleanChild.Pin();
			EVisibility WidgetVisibility = CleanChildPinned->GetVisibility();
			if (EVisibility::Hidden != WidgetVisibility && EVisibility::Collapsed != WidgetVisibility)
			{
				OutWidgetsToHitTest.Add(CleanChild);
			}
		}
		OutSubTreeWasDirty = true;
	}
	else if (CurNodePinned->GetRenderTransform().IsSet())
	{
		// No dirty children (or no children at all), but this node is dirty due to having a RenderTransform.
		// Add current node to hit-test, and indicate to our parent that this subtree is dirty.
		EVisibility WidgetVisibility = CurNodePinned->GetVisibility();
		if (EVisibility::Hidden != WidgetVisibility && EVisibility::Collapsed != WidgetVisibility)
		{
			OutWidgetsToHitTest.Add(CurNodePinned);
			OutSubTreeWasDirty = true;
		}
	}
	// else: just return to parent without adding anything for hit-test, and let OutSubTreeWasDirty be false.
}

void STobiiGazeFocusableWidget::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	SWidget::OnMouseEnter(MyGeometry, MouseEvent);
	OnHovered.ExecuteIfBound();
	Invalidate(EInvalidateWidget::Layout);
}

void STobiiGazeFocusableWidget::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	// Call parent implementation
	SWidget::OnMouseLeave(MouseEvent);
	OnUnhovered.ExecuteIfBound();
	Invalidate(EInvalidateWidget::Layout);
}
