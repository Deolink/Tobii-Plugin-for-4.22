/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiGazeFocusableWidget.h"
#include "TobiiTypes.h"

#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"

#define LOCTEXT_NAMESPACE "UMG"

UTobiiGazeFocusableWidget::UTobiiGazeFocusableWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, CleanUIFadeInTimeSecsOverride(-1.0f)
	, CleanUIFadeOutTimeSecsOverride(-1.0f)
	, CleanUIMinAlphaOverride(-1.0f)
	, CleanUIMaxAlphaOverride(-1.0f)
	, CleanUIMode(ETobiiCleanUIMode::Normal)
	, bUseCleanUIFastHitTesting(true)
	, bTriggerOnMouseOver(false)
{
	Visibility = ESlateVisibility::Visible;
	bIsVariable = true;
}

void UTobiiGazeFocusableWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyCleanUIContainer.Reset();
}

TSharedRef<SWidget> UTobiiGazeFocusableWidget::RebuildWidget()
{
	MySizeBox = MyCleanUIContainer = SNew(STobiiGazeFocusableWidget)
		.CleanUIMode(CleanUIMode)
		.CleanUIFadeInTimeSecsOverride(CleanUIFadeInTimeSecsOverride)
		.CleanUIFadeOutTimeSecsOverride(CleanUIFadeOutTimeSecsOverride)
		.CleanUIMinAlphaOverride(CleanUIMinAlphaOverride)
		.CleanUIMaxAlphaOverride(CleanUIMaxAlphaOverride)
		.bCleanUIFastHitTesting(bUseCleanUIFastHitTesting)
		.bCleanUITriggerOnMouseOver(bTriggerOnMouseOver)
		.OnHovered_UObject(this, &ThisClass::SlateHandleHovered)
		.OnUnhovered_UObject(this, &ThisClass::SlateHandleUnhovered);

	if (GetChildrenCount() > 0)
	{
		Cast<USizeBoxSlot>(GetContentSlot())->BuildSlot(MySizeBox.ToSharedRef());
	}
	 
	return MySizeBox.ToSharedRef();
}

void UTobiiGazeFocusableWidget::SetCleanUIFadeInTimeOverride(float InCleanUIFadeInTimeSecs)
{
	CleanUIFadeInTimeSecsOverride = InCleanUIFadeInTimeSecs;
	if (MyCleanUIContainer.IsValid())
	{
		MyCleanUIContainer->FadeInTimeSecsOverride = CleanUIFadeInTimeSecsOverride;
	}
}
void UTobiiGazeFocusableWidget::SetCleanUIFadeOutTimeOverride(float InCleanUIFadeOutTimeSecs)
{
	CleanUIFadeOutTimeSecsOverride = InCleanUIFadeOutTimeSecs;
	if (MyCleanUIContainer.IsValid())
	{
		MyCleanUIContainer->FadeOutTimeSecsOverride = CleanUIFadeOutTimeSecsOverride;
	}
}
void UTobiiGazeFocusableWidget::SetCleanUIMinAlphaOverride(float InCleanUIMinAlpha)
{
	CleanUIMinAlphaOverride = InCleanUIMinAlpha;
	if (MyCleanUIContainer.IsValid())
	{
		MyCleanUIContainer->MinAlphaOverride = CleanUIMinAlphaOverride;
	}
}
void UTobiiGazeFocusableWidget::SetCleanUIMaxAlphaOverride(float InCleanUIMaxAlpha)
{
	CleanUIMaxAlphaOverride = InCleanUIMaxAlpha;
	if (MyCleanUIContainer.IsValid())
	{
		MyCleanUIContainer->MaxAlphaOverride = CleanUIMaxAlphaOverride;
	}
}
void UTobiiGazeFocusableWidget::SetCleanUIMode(ETobiiCleanUIMode InCleanUIMode)
{
	CleanUIMode = InCleanUIMode;
	if (MyCleanUIContainer.IsValid())
	{
		MyCleanUIContainer->CleanUIMode= CleanUIMode;
	}
}
void UTobiiGazeFocusableWidget::SetFastHitTesting(bool bNewFastHitTesting)
{
	bUseCleanUIFastHitTesting = bNewFastHitTesting;
	if (MyCleanUIContainer.IsValid())
	{
		MyCleanUIContainer->bFastHitTesting = bUseCleanUIFastHitTesting;
	}
}
void UTobiiGazeFocusableWidget::SetTriggerOnMouseOver(bool bNewTriggerOnMouseOver)
{
	bTriggerOnMouseOver = bNewTriggerOnMouseOver;
	if (MyCleanUIContainer.IsValid())
	{
		MyCleanUIContainer->bTriggerOnMouseOver = bTriggerOnMouseOver;
	}
}
void UTobiiGazeFocusableWidget::SuppressCleanUIFor(float SecondsForCleanUIToBeSuppressed)
{
	if (MyCleanUIContainer.IsValid())
	{
		MyCleanUIContainer->SuppressCleanUIFor(SecondsForCleanUIToBeSuppressed);
	}
}
void UTobiiGazeFocusableWidget::SuppressCleanUIUntil(const FDateTime& UtcTimeToSuppressUntil)
{
	FTimespan TimeToSuppressFor = UtcTimeToSuppressUntil - FDateTime::UtcNow();
	SuppressCleanUIFor(TimeToSuppressFor.GetTotalSeconds());
}

void UTobiiGazeFocusableWidget::AddGazeFocusableWidgetToPollHitsFrom(UTobiiGazeFocusableWidget* GazeFocusableWidgetToPoll, bool PollGazeHits /*= true*/, bool PollMouseHits /*= true*/)
{
	if (GazeFocusableWidgetToPoll != nullptr)
	{
		STobiiGazeFocusableWidget* SlateCleanUIContainerToPoll = GazeFocusableWidgetToPoll->GetSlateCleanUIContainer();
		if (SlateCleanUIContainerToPoll != nullptr && MyCleanUIContainer.IsValid())
		{
			MyCleanUIContainer->AddExtraCleanUIContainerToPollHitsFrom(SlateCleanUIContainerToPoll, PollGazeHits, PollMouseHits);
		}
	}
}

void UTobiiGazeFocusableWidget::RemoveGazeFocusableWidgetToPollHitsFrom(UTobiiGazeFocusableWidget* GazeFocusableWidgetToStopPolling)
{
	if (GazeFocusableWidgetToStopPolling != nullptr)
	{
		STobiiGazeFocusableWidget* SlateCleanUIContainerToStopPolling = GazeFocusableWidgetToStopPolling->GetSlateCleanUIContainer();
		if (SlateCleanUIContainerToStopPolling != nullptr && MyCleanUIContainer.IsValid())
		{
			MyCleanUIContainer->RemoveExtraCleanUIContainerToPollHitsFrom(SlateCleanUIContainerToStopPolling);
		}		
	}
}

void UTobiiGazeFocusableWidget::AddChildWidgetBoundsToIgnore(UWidget* WidgetToIgnoreBoundsOf)
{
	if (WidgetToIgnoreBoundsOf != nullptr)
	{
		TSharedRef<SWidget> SWidgetToIgnore = WidgetToIgnoreBoundsOf->TakeWidget();
		if (MyCleanUIContainer.IsValid())
		{
			MyCleanUIContainer->AddChildWidgetBoundsToIgnore(SWidgetToIgnore->AsShared());
		}
	}
}

void UTobiiGazeFocusableWidget::RemoveChildWidgetBoundsToIgnore(UWidget* WidgetToStopIgnoringBoundsOf)
{
	if (WidgetToStopIgnoringBoundsOf != nullptr)
	{
		TSharedRef<SWidget> SWidgetToStopIgnoring = WidgetToStopIgnoringBoundsOf->TakeWidget();
		if (MyCleanUIContainer.IsValid())
		{
			MyCleanUIContainer->RemoveChildWidgetBoundsToIgnore(SWidgetToStopIgnoring->AsShared());
		}
	}
}

void UTobiiGazeFocusableWidget::ReceiveFocus()
{
	OnReceivedGazeFocus();
	ReceivedGazeFocus.Broadcast(this);
}

void UTobiiGazeFocusableWidget::LoseFocus()
{
	OnLostGazeFocus();
	LostGazeFocus.Broadcast(this);
}

void UTobiiGazeFocusableWidget::SlateHandleHovered()
{
	OnHovered.Broadcast(this);
}

void UTobiiGazeFocusableWidget::SlateHandleUnhovered()
{
	OnUnhovered.Broadcast(this);
}

STobiiGazeFocusableWidget* UTobiiGazeFocusableWidget::GetSlateCleanUIContainer()
{
	if (MyCleanUIContainer.IsValid())
	{
		return MyCleanUIContainer.Get();
	}

	return nullptr;
}

#if WITH_EDITOR
const FText UTobiiGazeFocusableWidget::GetPaletteCategory()
{
	return LOCTEXT("Tobii", "Tobii");
}
#endif

///////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
