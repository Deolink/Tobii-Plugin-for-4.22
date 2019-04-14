/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "TobiiGTOMTypes.h"
#include "STobiiGazeFocusableWidget.h"

#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Runtime/Engine/Public/ObjectEditorUtils.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"

#include "TobiiGazeFocusableWidget.generated.h"

class UPrimitiveComponent;
class UTobiiGazeFocusManagerComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWidgetGazeFocusSignature, UTobiiGazeFocusableWidget*, FocusedWidget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWidgetHoverSignature, UTobiiGazeFocusableWidget*, FocusedWidget);

/**
  * Use this widget to wrap other widgets you want to mark as gaze focusable.
  * In contrast to gaze focusable components, each widget you want to make focusable needs to be wrapped by its own UTobiiGazeFocusableWidget. There is more info below on why this is the case.
  * 
  * 
  *
  * There are some major differences to how gaze focusable widgets versus components work:
  * 1. Since widgets don't support tags, widgets can only participate in GTOM by being wrapped by this widget.
  * 2. Actor component hierarchies can be very rigid since they can be partially constructed in cpp, both by the developer and the engine. This means that designating gaze focusability via component parenting wouldn't be reliable.
  * 3. It is very common to want to make it so that every primitive component on an actor should contribute to focusing that actor. This is not true for widgets, here it is more common that each individual widget wants to know if it has been individually focused.
  *
  * All of these things should help to illustrate why using different models for gaze focus in slate/UMG and actors is to be preferred.
  */
UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent, DisplayName= "Tobii Gaze Focusable"))
class TOBIIGTOM_API UTobiiGazeFocusableWidget : public USizeBox
{
	GENERATED_UCLASS_BODY()
	/************************************************************************/
	/* USizeBox                                                             */
	/************************************************************************/
public:
	// UVisual interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
protected:
	// UWidget interface
	virtual TSharedRef<SWidget> RebuildWidget() override;

	/************************************************************************/
	/* Tobii                                                                */
	/************************************************************************/
public:	
	//Focus manager events. Use the focus manager here if you want to find out additional information about the focus event.
	UFUNCTION(BlueprintImplementableEvent, Category = "Focus")
	void OnReceivedGazeFocus();

	UFUNCTION(BlueprintImplementableEvent, Category = "Focus")
	void OnLostGazeFocus();

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FWidgetGazeFocusSignature ReceivedGazeFocus;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FWidgetGazeFocusSignature LostGazeFocus;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FWidgetHoverSignature OnHovered;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FWidgetHoverSignature OnUnhovered;

public:
	// DON'T SET THESE DIRECTLY, USE THE SETTER FUNCTIONS BELOW
	//If you want this cleanUI panel to behave differently from the default governed by CVars you can override properties here.	Any negative value will result in the CVar value being used.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CleanUI Overrides")
	float CleanUIFadeInTimeSecsOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CleanUI Overrides")
	float CleanUIFadeOutTimeSecsOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CleanUI Overrides")
	float CleanUIMinAlphaOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CleanUI Overrides")
	float CleanUIMaxAlphaOverride;

	//How should we apply CleanUI?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CleanUI")
	ETobiiCleanUIMode CleanUIMode;

	//Set this to true if you have widgets that don't use render transforms and you are fine with not being able to use child widget features such as exclusion. In this case, we can use a faster test path.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CleanUI")
	bool bUseCleanUIFastHitTesting;

	//If you have a game where you want this cleanUI widget to fade in on mouse over, set this to true.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CleanUI")
	bool bTriggerOnMouseOver;

public:
	//If this widget should fade out when another container is being looked at, use these functions to make that happen. This requires bUseFastHitTesting to be off.
	UFUNCTION(BlueprintCallable, Category = "Dependent Widgets")
	void AddGazeFocusableWidgetToPollHitsFrom(UTobiiGazeFocusableWidget* GazeFocusableWidgetToPoll, bool PollGazeHits = true, bool PollMouseHits = true);
	UFUNCTION(BlueprintCallable, Category = "Dependent Widgets")
	void RemoveGazeFocusableWidgetToPollHitsFrom(UTobiiGazeFocusableWidget* GazeFocusableWidgetToStopPolling);

	//Whether CleanUI should be enabled on this focusable
	UFUNCTION(BlueprintCallable, Category = "CleanUI")
	void SetCleanUIMode(ETobiiCleanUIMode InCleanUIMode);

	//If you want this widget to have CleanUI, but it shouldn't trigger when one or more of its children is being looked at, you can configure that using these functions. This requires bUseFastHitTesting to be off.
	UFUNCTION(BlueprintCallable, Category = "CleanUI")
	void AddChildWidgetBoundsToIgnore(UWidget* WidgetToIgnoreBoundsOf);
	UFUNCTION(BlueprintCallable, Category = "CleanUI")
	void RemoveChildWidgetBoundsToIgnore(UWidget* WidgetToStopIgnoringBoundsOf);

	//CVar override functions.
	UFUNCTION(BlueprintCallable, Category = "CleanUI Overrides")
	void SetCleanUIFadeInTimeOverride(float InCleanUIFadeInTimeSecs);
	UFUNCTION(BlueprintCallable, Category = "CleanUI Overrides")
	void SetCleanUIFadeOutTimeOverride(float InCleanUIFadeOutTimeSecs);
	UFUNCTION(BlueprintCallable, Category = "CleanUI Overrides")
	void SetCleanUIMinAlphaOverride(float InCleanUIMinAlpha);
	UFUNCTION(BlueprintCallable, Category = "CleanUI Overrides")
	void SetCleanUIMaxAlphaOverride(float InCleanUIMaxAlpha);

	//Set this to true if you have widgets that don't use render transforms and you are fine with not being able to use child widget features such as exclusion. In this case, we can use a faster test path.
	UFUNCTION(BlueprintCallable, Category = "CleanUI")
	void SetFastHitTesting(bool bNewFastHitTesting);

	//Whether or not we should trigger on mouse over.
	UFUNCTION(BlueprintCallable, Category = "CleanUI")
	void SetTriggerOnMouseOver(bool bNewTriggerOnMouseOver);

	//If you don't want CleanUI to be active for some amount of time, you can suppress it here. This is good for scripted events and cut scenes where CleanUI would be more distracting than useful.
	UFUNCTION(BlueprintCallable, Category = "CleanUI")
	void SuppressCleanUIFor(float SecondsForCleanUIToBeSuppressed);
	UFUNCTION(BlueprintCallable, Category = "CleanUI")
	void SuppressCleanUIUntil(const FDateTime& UtcTimeToSuppressUntil);

protected:
	TSharedPtr<class STobiiGazeFocusableWidget> MyCleanUIContainer;

	void SlateHandleHovered();
	void SlateHandleUnhovered();

public:
	TWeakObjectPtr<UWidgetComponent> HostComponent;
	STobiiGazeFocusableWidget* GetSlateCleanUIContainer();	
	
	virtual void ReceiveFocus();
	virtual void LoseFocus();
	
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif
};