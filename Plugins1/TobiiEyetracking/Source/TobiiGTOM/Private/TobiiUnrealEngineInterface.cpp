/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiUnrealEngineInterface.h"

#if TOBII_EYETRACKING_ACTIVE

#include "TobiiTypes.h"
#include "TobiiGazeFocusableComponent.h"
#include "TobiiGTOMModule.h"
#include "TobiiBlueprintLibrary.h"

#include "Runtime/HeadMountedDisplay/Public/IXRTrackingSystem.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"

static TAutoConsoleVariable<int32> CVarDebugDisplayGTOMVisibilityRays(TEXT("tobii.debug.DisplayGTOMVisibilityRays"), 1, TEXT("1 means we visualize the rays from GTOM"));

FTobiiUnrealEngineInterface::FTobiiUnrealEngineInterface()
	: CurrentPlayerController(nullptr)
	, CurrentID(0)
{
}

void FTobiiUnrealEngineInterface::Tick(APlayerController* PlayerController, const FTobiiGazeData& GazeData)
{
	CurrentPlayerController = PlayerController;

	if (CurrentPlayerController != nullptr)
	{
		bool bIsXR = false;
		ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(PlayerController->Player);
		if (LocalPlayer != nullptr && LocalPlayer->ViewportClient != nullptr)
		{
			bIsXR = GEngine->IsStereoscopic3D(LocalPlayer->ViewportClient->Viewport) && GEngine->XRSystem.IsValid();
		}

		if (bIsXR)
		{
			//Grab XR data
			FQuat Orientation;
			FVector Position;
			GEngine->XRSystem->GetCurrentPose(IXRTrackingSystem::HMDDeviceId, Orientation, Position);
			CameraDirection = Orientation.GetForwardVector();
			CameraLocation = GazeData.WorldGazeOrigin;
		}
		else
		{
			CameraDirection = PlayerController->PlayerCameraManager->GetCameraRotation().Vector();
			CameraLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
		}
	}
}

float FTobiiUnrealEngineInterface::GetCameraNearClipDistance()
{
	return GNearClippingPlane;
}

void FTobiiUnrealEngineInterface::GetCameraDirection(float& x, float& y, float& z)
{
	x = CameraDirection.X;
	y = CameraDirection.Y;
	z = CameraDirection.Z;
}

void FTobiiUnrealEngineInterface::GetCameraLocation(float& x, float& y, float& z)
{
	x = CameraLocation.X;
	y = CameraLocation.Y;
	z = CameraLocation.Z;
}

bool FTobiiUnrealEngineInterface::LineTrace(float startX, float startY, float startZ, float dirX, float dirY, float dirZ, TobiiGTOMLineTraceResponse& HitResponse)
{
	static const auto DrawDebugCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.debug"));
	const float DebugBoxSize = 2.0f;

	if (CurrentPlayerController.IsValid() && CurrentPlayerController->GetWorld() != nullptr)
	{
		static const auto FocusTraceChannelCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.FocusTraceChannel"));
		static const auto MaximumTraceDistanceCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.MaximumTraceDistance"));
		check(FocusTraceChannelCVar != nullptr && MaximumTraceDistanceCVar != nullptr);

		FCollisionQueryParams CollisionQueryParams;
		CollisionQueryParams.AddIgnoredActor(CurrentPlayerController.Get());
		CollisionQueryParams.AddIgnoredActor(CurrentPlayerController->GetPawn());
		FVector LineTraceStart(startX, startY, startZ);
		FVector LineTraceEnd = LineTraceStart + (FVector(dirX, dirY, dirZ) * MaximumTraceDistanceCVar->GetFloat());

		FHitResult RayHitResult;
		if (CurrentPlayerController->GetWorld()->LineTraceSingleByChannel(RayHitResult, LineTraceStart, LineTraceEnd, (ECollisionChannel)FocusTraceChannelCVar->GetInt(), CollisionQueryParams))
		{
			if (DrawDebugCVar->GetInt() != 0 && CVarDebugDisplayGTOMVisibilityRays.GetValueOnGameThread())
			{
				::DrawDebugBox(CurrentPlayerController->GetWorld(), RayHitResult.Location, FVector(DebugBoxSize, DebugBoxSize, DebugBoxSize), FColor::Green, false, 0.0f, 0, 2.0f);
			}

			if (RayHitResult.Component.IsValid() && UTobiiGazeFocusableComponent::IsPrimitiveFocusable(RayHitResult.Component.Get()))
			{
				TWeakObjectPtr<UPrimitiveComponent> HitPrimitive(RayHitResult.Component);
				if (PrimitiveToIDMap.Contains(HitPrimitive))
				{
					HitResponse.HitFocusable = PrimitiveToIDMap[HitPrimitive];
				}
				else
				{
					CurrentID++;
					HitResponse.HitFocusable = CurrentID;

					IDToPrimitiveMap.Add(HitResponse.HitFocusable, HitPrimitive);
					PrimitiveToIDMap.Add(HitPrimitive, HitResponse.HitFocusable);
				}

				HitResponse.HitLocation3D[0] = RayHitResult.Location.X;
				HitResponse.HitLocation3D[1] = RayHitResult.Location.Y;
				HitResponse.HitLocation3D[2] = RayHitResult.Location.Z;
				HitResponse.bWasSuccessful = true;

				return true;
			}
		}
		else if(DrawDebugCVar->GetInt() != 0 && CVarDebugDisplayGTOMVisibilityRays.GetValueOnGameThread())
		{
			::DrawDebugBox(CurrentPlayerController->GetWorld(), LineTraceEnd, FVector(DebugBoxSize, DebugBoxSize, DebugBoxSize), FColor::Red, false, 0.0f, 0, 2.0f);
		}
	}

	HitResponse.bWasSuccessful = false;
	return false;
}

bool FTobiiUnrealEngineInterface::IsFocusableValid(TobiiGazeFocusableID id)
{
	return IDToPrimitiveMap.Contains(id) ? IDToPrimitiveMap[id].IsValid() : false;
}

bool FTobiiUnrealEngineInterface::QueryFocusableMaximumDistance(TobiiGazeFocusableID id, float& outValue)
{
	if (!IsFocusableValid(id))
	{
		return false;
	}

	outValue = UTobiiGazeFocusableComponent::GetMaxFocusDistanceForPrimitive(IDToPrimitiveMap[id].Get());
	return true;
}

bool FTobiiUnrealEngineInterface::QueryFocusablePosition(TobiiGazeFocusableID id, float& x, float& y, float& z)
{
	if (!IDToPrimitiveMap.Contains(id) || !IDToPrimitiveMap[id].IsValid())
	{
		return false;
	}

	FVector Position = IDToPrimitiveMap[id]->GetComponentLocation();
	x = Position.X;
	y = Position.Y;
	z = Position.Z;

	return true;
}

float FTobiiUnrealEngineInterface::RandRange(float min, float max)
{
	return FMath::RandRange(min, max);
}

void FTobiiUnrealEngineInterface::DrawDebugSphere(float worldX, float worldY, float worldZ, float size, float r, float g, float b)
{
	if (CurrentPlayerController.IsValid())
	{
		FVector Location(worldX, worldY, worldZ);
		FColor DebugColor((uint8)(r * 255.0f), (uint8)(g * 255.0f), (uint8)(b * 255.0f), 120);
		::DrawDebugSphere(CurrentPlayerController->GetWorld(), Location, size, 16, DebugColor);
	}
}

#endif //TOBII_EYETRACKING_ACTIVE
