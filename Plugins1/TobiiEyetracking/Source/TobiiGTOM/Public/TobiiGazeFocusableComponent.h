/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "TobiiGazeFocusableWidget.h"
#include "TobiiGTOMTypes.h"

#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Public/SceneTypes.h"

#include "TobiiGazeFocusableComponent.generated.h"

class UPrimitiveComponent;
class UTobiiGazeFocusManagerComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGazeFocusReceivedSignature, UTobiiGazeFocusManagerComponent*, FocusManager, UPrimitiveComponent*, FocusedComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGazeFocusLostSignature, UTobiiGazeFocusManagerComponent*, FocusManager, UPrimitiveComponent*, FocusedComponent);

/**
  * This component is a helper that can make it easier to setup GTOM, as well as provide an focus event interface for this object.
  * If you don't use specific tags on your primitive components, the values on this component will be used instead.
  * This component is REQUIRED for GPU based GTOM.
  * This component is also REQUIRED for world space widget focus.
  * This should be placed on the root actor for every component tree. This means that if you have an actor that has a child actor that has primitive components you would like to control, you need to add one of these components to that child actor as well.
  * Having more than one of these components on one actor is not recommended, as it is unclear which focusable component's values will be used.
  * If you want world space UI widgets to participate in GTOM, you must attach one of these components to the actor carrying the WidgetComponent(s) to affect
  */
UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class TOBIIGTOM_API UTobiiGazeFocusableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	//The default value for focusability to be used by all primitives on the same actor as this component. It can be useful to set this to false if you only want a few primitives on the actor to be focusable.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default Focus Settings")
	bool bDefaultIsFocusable;

	//The focus priority is optional input that you can provide to GTOM. Objects with higher focus priority are more "important" and are therefore more likely to be construed as being in focus.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default Focus Settings")
	float DefaultFocusPriority;

	//If this object is at least this far away from the player, it will not participate in GTOM.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default Focus Settings")
	float DefaultMaxFocusDistance;

	//A focus manager can opt to only query a subset of focusables by using a focus layer. This is the default layer that will be used if none is set to a primitive component using the GazeFocusableLayerTag.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default Focus Settings")
	FName DefaultFocusLayer;

	//If this is true, the gaze focusable will take control of the CleanUI of all the widgets and dim the ones not in focus. Please note this disables default CleanUI behavior.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Gaze Focus")
	bool bApplyCleanUIToNonSelectedWidgets;

public:
 	UFUNCTION(BlueprintPure, Category = "Focus")
 	UTobiiGazeFocusableWidget* GetGazeFocusedWidget();

	//Focus manager events. Use the focus manager here if you want to find out additional information about the focus event.
	UFUNCTION(BlueprintImplementableEvent, Category = "Focus")
	void OnReceivedGazeFocus(UTobiiGazeFocusManagerComponent* FocusManager, UPrimitiveComponent* FocusedComponent);

	UFUNCTION(BlueprintImplementableEvent, Category = "Focus")
	void OnLostGazeFocus(UTobiiGazeFocusManagerComponent* FocusManager, UPrimitiveComponent* FocusedComponent);

	UPROPERTY(BlueprintAssignable, Category = "Focus")
	FGazeFocusReceivedSignature ReceivedGazeFocus;

	UPROPERTY(BlueprintAssignable, Category = "Focus")
	FGazeFocusLostSignature LostGazeFocus;
		
public:
	UFUNCTION(BlueprintCallable, Category = "CleanUI")
	void Refresh();

public:
	UTobiiGazeFocusableComponent();
	virtual void ReceiveFocus(UTobiiGazeFocusManagerComponent* FocusManager, UPrimitiveComponent* FocusedComponent);
	virtual void LoseFocus(UTobiiGazeFocusManagerComponent* FocusManager, UPrimitiveComponent* FocusedComponent);

	/************************************************************************/
	/* UActorComponent                                                      */
	/************************************************************************/
public:
	TArray<TWeakObjectPtr<UTobiiGazeFocusableWidget>> FocusableWidgets;
	TWeakObjectPtr<UTobiiGazeFocusableWidget> GazeFocusedWidget;
	bool bRefreshedOnce;

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

public:
	static void ClearFocusableComponents();
	static const TMap<FocusComponentUID, TWeakObjectPtr<UTobiiGazeFocusableComponent>>& GetFocusableComponents();

	static void UpdateGazeFocusPrio(FVector POVActorLocation, int32 MaxNrFocusables);
	static const TSet<FPrimitiveComponentId>* GetGazeFocusPrioSet();

	static bool IsPrimitiveFocusable(UPrimitiveComponent* Primitive);
	static float GetMaxFocusDistanceForPrimitive(UPrimitiveComponent* Primitive);
	static float GetFocusPriorityForPrimitive(UPrimitiveComponent* Primitive);
	static FName GetFocusLayerForPrimitive(UPrimitiveComponent* Primitive);

private:
	void GatherGazeFocusableWidgets(UWidget* Parent, TArray<TWeakObjectPtr<UTobiiGazeFocusableWidget>>& OutFocusableWidgets, UWidgetComponent* OptionalHostWidgetComponent);
	void UpdateWorldSpaceUI();
};
