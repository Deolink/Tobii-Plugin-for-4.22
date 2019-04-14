/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "Runtime/Engine/Classes/Components/ActorComponent.h"

#include "TobiiFireAtGazeComponent.generated.h"

UENUM(BlueprintType)
enum class ETobiiFireAtGazeNoTargetBehavior : uint8
{
	PointGunForward
	, PointGunToGaze
};

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class TOBIIINTERACTIONS_API UTobiiFireAtGazeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTobiiFireAtGazeComponent();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire@gaze")
	class UTobiiGazeFocusManagerComponent* FocusManager;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire@gaze")
	class UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fire@gaze")
	TWeakObjectPtr<AActor> FireAtGazeTargetActor;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fire@gaze")
	FVector FireAtGazeTargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire@gaze Settings")
	float MaxDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire@gaze Settings")
	ETobiiFireAtGazeNoTargetBehavior NoTargetBehavior;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire@gaze Settings")
	TEnumAsByte<ECollisionChannel> TraceChannel;

public:
	//Use this to test if the user has turned fire@gaze on and it is available.
	UFUNCTION(BlueprintPure, Category = "Fire@gaze")
	bool FireAtGazeAvailable();

	/************************************************************************/
	/* UActorComponent                                                      */
	/************************************************************************/
public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};
