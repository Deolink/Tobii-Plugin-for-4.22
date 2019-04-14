/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiFireAtGazeComponent.h"
#include "ITobiiCore.h"
#include "TobiiInteractionsBlueprintLibrary.h"
#include "TobiiBlueprintLibrary.h"

#include "../TobiiInteractionsInternalTypes.h"
#include "TobiiGazeFocusManagerComponent.h"

#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"

#include "Runtime/Core/Public/HAL/IConsoleManager.h"

static TAutoConsoleVariable<int32> CVarFireAtGazeEnabled(TEXT("tobii.interaction.FireAtGazeEnabled"), 1, TEXT("Fire at gaze lets you fire where you look when not in ADS (Aim Down Sights) mode. 0 - Fire at gaze is disabled. 1 - Fire at gaze is enabled."));

UTobiiFireAtGazeComponent::UTobiiFireAtGazeComponent()
	: FocusManager(nullptr)
	, CameraComponent(nullptr)

	, FireAtGazeTargetActor(nullptr)
	, FireAtGazeTargetLocation(0.0f, 0.0f, 0.0f)

	, MaxDistance(10000.0f)
	, NoTargetBehavior(ETobiiFireAtGazeNoTargetBehavior::PointGunToGaze)
	, TraceChannel(ECC_Visibility)
{
	PrimaryComponentTick.bCanEverTick = true;
}

bool UTobiiFireAtGazeComponent::FireAtGazeAvailable()
{
	return CameraComponent != nullptr 
		&& FocusManager != nullptr
		&& UTobiiInteractionsBlueprintLibrary::IsFireAtGazeEnabled();
}

void UTobiiFireAtGazeComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!FireAtGazeAvailable())
	{
		return;
	}

	FTobiiGazeFocusData FocusData;
	FocusManager->GetFocusData(FocusData);
	if (FocusData.FocusedPrimitiveComponent.IsValid())
	{
		FireAtGazeTargetActor = FocusData.FocusedActor;
		FireAtGazeTargetLocation = FocusData.LastVisibleWorldLocation;
	}
	else
	{
		FVector GazeRayOrigin, GazeRayDirection;
		switch (NoTargetBehavior)
		{
		case ETobiiFireAtGazeNoTargetBehavior::PointGunForward:
		{
			GazeRayOrigin = CameraComponent->GetComponentLocation();
			GazeRayDirection = CameraComponent->GetForwardVector();
			break;
		}

		case ETobiiFireAtGazeNoTargetBehavior::PointGunToGaze:
		default:
		{
			const FTobiiGazeData& GazeHitData = ITobiiCore::GetEyeTracker()->GetCombinedGazeData();
			GazeRayOrigin = GazeHitData.WorldGazeOrigin;
			GazeRayDirection = GazeHitData.WorldGazeDirection;
			break;
		}
		}

		FHitResult HitResult;
		UWorld* World = GetWorld();
		if (World != nullptr && World->LineTraceSingleByChannel(HitResult, GazeRayOrigin, GazeRayOrigin + GazeRayDirection * MaxDistance, TraceChannel))
		{
			FireAtGazeTargetActor = HitResult.GetActor();
			FireAtGazeTargetLocation = HitResult.Location;
		}
		else
		{
			FireAtGazeTargetActor = nullptr;
			FireAtGazeTargetLocation = GazeRayOrigin + GazeRayDirection * MaxDistance;
		}
	}
}
