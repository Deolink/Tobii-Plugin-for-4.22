/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "tobii_gtom.h" //Hmm, would be nice not to expose this here
#include "TobiiTypes.h"
#include "TobiiGTOMTypes.h"

#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Core/Public/Delegates/DelegateCombinations.h"

#include "TobiiGazeFocusManagerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFocusableGainedGazeFocusSignature, UPrimitiveComponent*, GazeComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFocusableLostGazeFocusSignature, UPrimitiveComponent*, GazeComponent);

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class TOBIIGTOM_API UTobiiGazeFocusManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTobiiGazeFocusManagerComponent();

public:
	//This controls how the layers in FocusLayers are used. If this is true, only focusables with a layer that is in the FocusLayers array will be considered. If this is false, the FocusLayers array will act like a black list, excluding any focusables whos layer can be found in the array.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Management")
	bool bIsWhiteList;

	//These are the filters defined on this manager. The behavior of the filters are controlled by bAreFiltersExclusive.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Management")
	TArray<FName> FocusLayers;

	//This will trigger when a new component enters focus
	UPROPERTY(BlueprintAssignable, Category = "Focus Management")
	FFocusableGainedGazeFocusSignature OnFocusableGainedFocus;

	//This will trigger when a new component leaves focus
	UPROPERTY(BlueprintAssignable, Category = "Focus Management")
	FFocusableLostGazeFocusSignature OnFocusableLostFocus;

public:
	//Get the component the focus system believes the user is looking at.
	UFUNCTION(BlueprintPure, Category = "Focus Management")
	void GetFocusData(FTobiiGazeFocusData& OutFocusData) const;

	//Get a sorted list of components that the focus system believes the user is looking at.
	UFUNCTION(BlueprintPure, Category = "Focus Management")
	void GetAllFocusData(TArray<FTobiiGazeFocusData>& OutFocusData) const;

	/************************************************************************/
	/* UActorComponent                                                      */
	/************************************************************************/
public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

private:
	TWeakObjectPtr<APlayerController> DetectedPlayerController;
	TWeakObjectPtr<UPrimitiveComponent> PreviouslyFocusedComponent;
	FTobiiGazeFocusData FocusData;

	void NotifyPrimitiveComponentGazeFocusReceived(UPrimitiveComponent& PrimitiveComponentToReceiveFocus);
	void NotifyPrimitiveComponentGazeFocusLost(UPrimitiveComponent& PrimitiveComponentToLoseFocus);
	bool ValidateFocusLayers(UPrimitiveComponent& Candidate) const;
	bool QueryFocusableLayer(UPrimitiveComponent& Candidate, FName LayerToQuery) const;
};
