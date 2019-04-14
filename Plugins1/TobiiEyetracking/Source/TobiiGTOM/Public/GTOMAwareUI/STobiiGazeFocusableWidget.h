/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Slate/SRetainerWidget.h"
#include "ITobiiCore.h"
#include "TobiiGTOMTypes.h"
#include "STobiiRadialMenuWidget.h"

#include "Runtime/Engine/Public/DisplayDebugHelpers.h"
#include "Runtime/Slate/Public/Widgets/Layout/SBox.h"

class AHUD;
class UCanvas;

//This is the underlying slate widget. 
//WARNING: Please note that we do not support using these directly yet.
class TOBIIGTOM_API STobiiGazeFocusableWidget : public SBox
{
public:
	SLATE_BEGIN_ARGS(STobiiGazeFocusableWidget)
		: _CleanUIMode(ETobiiCleanUIMode::Normal)

		, _CleanUIFadeInTimeSecsOverride(-1.0f)
		, _CleanUIFadeOutTimeSecsOverride(-1.0f)
		, _CleanUIMinAlphaOverride(-1.0f)
		, _CleanUIMaxAlphaOverride(-1.0f)

		, _bCleanUIFastHitTesting(false)
		, _bCleanUITriggerOnMouseOver(false)
	{
		_Visibility = EVisibility::SelfHitTestInvisible;
	}

		SLATE_ARGUMENT(ETobiiCleanUIMode, CleanUIMode)

		//If you want this cleanUI panel to behave differently from the default governed by CVars you can override properties here. Any negative value will result in the CVar value being used.
		SLATE_ARGUMENT(float, CleanUIFadeInTimeSecsOverride)
		SLATE_ARGUMENT(float, CleanUIFadeOutTimeSecsOverride)
		SLATE_ARGUMENT(float, CleanUIMinAlphaOverride)
		SLATE_ARGUMENT(float, CleanUIMaxAlphaOverride)

		//Set this to true if you have widgets that don't use render transforms and you are fine with not being able to use child widget features such as exclusion. In this case, we can use a faster test path.
		SLATE_ARGUMENT(bool, bCleanUIFastHitTesting)

		//If you have a game where you want this cleanUI widget to fade in on mouse over, set this to true.
		SLATE_ARGUMENT(bool, bCleanUITriggerOnMouseOver)

		SLATE_EVENT(FSimpleDelegate, OnHovered)
		SLATE_EVENT(FSimpleDelegate, OnUnhovered)

		/************************************************************************/
		/* From SBox widget                                                     */
		/************************************************************************/
		//Horizontal alignment of content in the area allotted to the SBox by its parent
		SLATE_ARGUMENT(EHorizontalAlignment, HAlign)

		//Vertical alignment of content in the area allotted to the SBox by its parent
		SLATE_ARGUMENT(EVerticalAlignment, VAlign)

		//Padding between the SBox and the content that it presents. Padding affects desired size.
		SLATE_ATTRIBUTE(FMargin, Padding)

		//The widget content presented by the SBox
		SLATE_DEFAULT_SLOT(FArguments, Content)
	SLATE_END_ARGS()

public:
	STobiiGazeFocusableWidget();
	void Construct(const FArguments& InArgs);

	void AddExtraCleanUIContainerToPollHitsFrom(STobiiGazeFocusableWidget* CleanUIContainerToPoll, bool PollGazeHits = true, bool PollMouseHits = true);
	void RemoveExtraCleanUIContainerToPollHitsFrom(STobiiGazeFocusableWidget* CleanUIContainerToStopPolling);

	void AddChildWidgetBoundsToIgnore(TWeakPtr<SWidget> WidgetToIgnoreBoundsOf);
	void RemoveChildWidgetBoundsToIgnore(TWeakPtr<SWidget> WidgetToStopIgnoringBoundsOf);

	void SuppressCleanUIFor(float SecondsForCleanUIToBeSuppressed);

	/************************************************************************/
	/* SBox                                                                 */
	/************************************************************************/
public:
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;

public:
	ETobiiCleanUIMode CleanUIMode;

	float FadeInTimeSecsOverride;
	float FadeOutTimeSecsOverride;
	float MinAlphaOverride;
	float MaxAlphaOverride;
	bool bFastHitTesting;
	bool bTriggerOnMouseOver;

public:
	bool bHasWorldConeFocus;
	bool bIsGazeStable;

public:
	STobiiRadialMenuWidget::FSlot* ParentRadialMenuSlot;
	FDateTime CleanUISuppressedUntil;
	float CleanUIAlpha;
	bool bHitByGaze;
	bool bHitByMouse;
	bool bIsWorldSpaceWidget;

protected:
	FSimpleDelegate OnHovered;
	FSimpleDelegate OnUnhovered;

private:
	struct CleanUIPollingInfo
	{
		TWeakPtr<SWidget> CleanUIToPollFrom;
		bool PollGazeHits;
		bool PollMouseHits;
	};

	TArray<CleanUIPollingInfo> CleanUIContainersToPollHitsFrom;
	TSet<TWeakPtr<SWidget>> ChildWidgetBoundsToIgnore;

	void FindChildWidgetsToHitTest(TWeakPtr<SWidget> InCurNode, bool& OutSubTreeWasDirty, TArray<TWeakPtr<SWidget>>& OutWidgetsToHitTest);
};
