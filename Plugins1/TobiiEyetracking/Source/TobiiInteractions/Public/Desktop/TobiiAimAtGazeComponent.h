/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "Runtime/Engine/Classes/Components/ActorComponent.h"

#include "TobiiAimAtGazeComponent.generated.h"

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class TOBIIINTERACTIONS_API UTobiiAimAtGazeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTobiiAimAtGazeComponent();

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aim@gaze")
	class UTobiiGazeFocusManagerComponent* FocusManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aim@gaze")
	bool bAllowRetarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aim@gaze")
	float AimSpeed;

public:
	//Use this to test if the user has turned aim@gaze on and it is available.
	UFUNCTION(BlueprintCallable, Category = "Aim@gaze")
	bool AimAtGazeAvailable();

	//Trigger an aim@gaze
	UFUNCTION(BlueprintCallable, Category = "Aim@gaze")
	void AimAtGaze();

	//Call this every frame you want to continually track the aim@gaze target
	UFUNCTION(BlueprintCallable, Category = "Aim@gaze")
	void ContinuousAimAtGaze();

	/************************************************************************/
	/* UActorComponent                                                      */
	/************************************************************************/
public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

private:
	TWeakObjectPtr<class UPrimitiveComponent> CurrentFocusComponent;
	FVector CurrentAimTarget;
	bool bIsGazeAiming;
};
