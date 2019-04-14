/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiBlueprintLibrary.h"
#include "TobiiCoreModule.h"
#include "TobiiPlatformSpecific.h"
#include "ITobiiCore.h"

#include "Runtime/Core/Public/Misc/ConfigCacheIni.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Public/Slate/SceneViewport.h"
#include "Runtime/HeadMountedDisplay/Public/IXRTrackingSystem.h"
#include "Engine/Engine.h"

UTobiiBlueprintLibrary::UTobiiBlueprintLibrary(const class FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
}

void UTobiiBlueprintLibrary::SetEyetrackingEnabled(bool bEyetrackingEnabled)
{
	SetTobiiInt("tobii.EnableEyetracking", bEyetrackingEnabled ? 1 : 0);
}

bool UTobiiBlueprintLibrary::GetEyetrackingEnabled()
{
	return GetTobiiInt("tobii.EnableEyetracking") != 0;
}

void UTobiiBlueprintLibrary::SetEyetrackingFrozen(bool bEyetrackingFrozen)
{
	SetTobiiInt("tobii.FreezeGazeData", bEyetrackingFrozen ? 1 : 0);
}

bool UTobiiBlueprintLibrary::GetEyetrackingFrozen()
{
	return GetTobiiInt("tobii.FreezeGazeData") != 0;
}

FTobiiGazeData UTobiiBlueprintLibrary::GetCombinedGazeData()
{
	static FTobiiGazeData DummyData;
	return FTobiiCoreModule::IsAvailable() ? FTobiiCoreModule::GetEyeTracker()->GetCombinedGazeData() : DummyData;
}

FTobiiGazeData UTobiiBlueprintLibrary::GetLeftGazeData()
{
	static FTobiiGazeData DummyData;
	return FTobiiCoreModule::IsAvailable() ? FTobiiCoreModule::GetEyeTracker()->GetLeftGazeData() : DummyData;
}

FTobiiGazeData UTobiiBlueprintLibrary::GetRightGazeData()
{
	static FTobiiGazeData DummyData;
	return FTobiiCoreModule::IsAvailable() ? FTobiiCoreModule::GetEyeTracker()->GetRightGazeData() : DummyData;
}

FHitResult UTobiiBlueprintLibrary::GetCombinedWorldGazeHitData()
{
	static FHitResult DummyData;
	DummyData.Actor = nullptr;
	return FTobiiCoreModule::IsAvailable() ? FTobiiCoreModule::GetEyeTracker()->GetCombinedWorldGazeHitData() : DummyData;
}

ETobiiGazeTrackerStatus UTobiiBlueprintLibrary::GetGazeTrackerStatus()
{
	return FTobiiCoreModule::IsAvailable() ? FTobiiCoreModule::GetEyeTracker()->GetGazeTrackerStatus() : ETobiiGazeTrackerStatus::NotConnected;
}

FTobiiDisplayInfo UTobiiBlueprintLibrary::GetDisplayInformation()
{
	return FTobiiCoreModule::IsAvailable() ? FTobiiCoreModule::GetEyeTracker()->GetDisplayInformation() : FTobiiDisplayInfo();
}

const FTobiiHeadPoseData& UTobiiBlueprintLibrary::GetHeadPoseData()
{
	static FTobiiHeadPoseData DummyData;
	return FTobiiCoreModule::IsAvailable() ? FTobiiCoreModule::GetEyeTracker()->GetHeadPoseData() : DummyData;
}

const FTobiiDesktopTrackBox& UTobiiBlueprintLibrary::GetDesktopTrackBox()
{
 	static FTobiiDesktopTrackBox DummyData;
 	return FTobiiCoreModule::IsAvailable() ? FTobiiCoreModule::GetEyeTracker()->GetDesktopTrackBox() : DummyData;
}

/************************************************************************/
/* Utils                                                                */
/************************************************************************/
bool UTobiiBlueprintLibrary::VirtualDesktopPixelToViewportCoordinateUNorm(const FVector2D& VirtualDesktopPixel, FVector2D& OutViewportCoordinateUNorm)
{
	if (!FTobiiCoreModule::IsAvailable() || GEngine == nullptr || GEngine->GameViewport == nullptr || GEngine->GameViewport->GetGameViewport() == nullptr)
	{
		return false;
	}

	OutViewportCoordinateUNorm = GEngine->GameViewport->GetGameViewport()->VirtualDesktopPixelToViewport(FIntPoint(VirtualDesktopPixel.X, VirtualDesktopPixel.Y));

	const FTobiiDisplayInfo& DisplayInfo = FTobiiCoreModule::GetEyeTracker()->GetDisplayInformation();
	OutViewportCoordinateUNorm.X *= DisplayInfo.DpiScale;
	OutViewportCoordinateUNorm.Y *= DisplayInfo.DpiScale;
	return true;
}

bool UTobiiBlueprintLibrary::ViewportCoordinateUNormToVirtualDesktopPixel(const FVector2D& ViewportCoordinateUNorm, FVector2D& OutVirtualDesktopPixel)
{
	if (!FTobiiCoreModule::IsAvailable() || GEngine == nullptr || GEngine->GameViewport == nullptr || GEngine->GameViewport->GetGameViewport() == nullptr)
	{
		return false;
	}
	
	const FTobiiDisplayInfo& DisplayInfo = FTobiiCoreModule::GetEyeTracker()->GetDisplayInformation();
	FVector2D ScaledInPoint(ViewportCoordinateUNorm.X / DisplayInfo.DpiScale, ViewportCoordinateUNorm.Y / DisplayInfo.DpiScale);
	OutVirtualDesktopPixel = GEngine->GameViewport->GetGameViewport()->ViewportToVirtualDesktopPixel(ScaledInPoint);

	return true;
}

bool UTobiiBlueprintLibrary::ConvertScreenPixelCoordToCmCoord(const FVector2D& InCoordinatePx, FVector2D& OutCoordinateCm)
{
	const FTobiiDisplayInfo& DisplayInfo = FTobiiCoreModule::GetEyeTracker()->GetDisplayInformation();

	if (DisplayInfo.MainViewportWidthPx > 0.0f && DisplayInfo.MainViewportWidthCm > 0.0f && DisplayInfo.MainViewportHeightPx > 0.0f && DisplayInfo.MainViewportHeightCm > 0.0f)
	{
		OutCoordinateCm.Set(InCoordinatePx.X / DisplayInfo.MainViewportWidthPx * DisplayInfo.MainViewportWidthCm, InCoordinatePx.Y / DisplayInfo.MainViewportHeightPx * DisplayInfo.MainViewportHeightCm);
		return true;
	}

	OutCoordinateCm = FVector2D::ZeroVector;
	return false;
}

bool UTobiiBlueprintLibrary::ConvertScreenCmCoordToPixelCoord(const FVector2D& InCoordinateCm, FVector2D& OutCoordinatePx)
{
	const FTobiiDisplayInfo& DisplayInfo = FTobiiCoreModule::GetEyeTracker()->GetDisplayInformation();

	if (DisplayInfo.MainViewportWidthPx > 0.0f && DisplayInfo.MainViewportWidthCm > 0.0f && DisplayInfo.MainViewportHeightPx > 0.0f && DisplayInfo.MainViewportHeightCm > 0.0f)
	{
		OutCoordinatePx.Set(InCoordinateCm.X / DisplayInfo.MainViewportWidthCm * DisplayInfo.MainViewportWidthPx, InCoordinateCm.Y / DisplayInfo.MainViewportHeightCm * DisplayInfo.MainViewportHeightPx);
		return true;
	}

	OutCoordinatePx = FVector2D::ZeroVector;
	return false;
}

// internal helper
FQuat GetHMDToWorldRotation(APlayerController* PlayerController)
{
	FQuat ToWorld = FQuat::Identity;
	FVector HMDPosition;
	bool valid = GEngine->XRSystem->GetCurrentPose(IXRTrackingSystem::HMDDeviceId, ToWorld, HMDPosition);
	
	const bool IsEmulated = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.emulation.EnableEyetrackingEmulation"))->GetInt() != 0;
	const bool IsApplyControlRotation = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.xr.ApplyControlRotation"))->GetInt() != 0;
	const bool IsApplyActorRotation = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.xr.ApplyActorRotation"))->GetInt() != 0;

	if (!IsEmulated)
	{
		if (IsApplyControlRotation)
		{
			FVector RealWorldUp = ToWorld.Inverse().RotateVector(FVector::UpVector);
			FQuat YawRotation = FQuat(RealWorldUp, FMath::DegreesToRadians(PlayerController->GetControlRotation().Yaw));
			ToWorld *= YawRotation;
		}
	}

	if (IsApplyActorRotation && PlayerController != nullptr	&& PlayerController->GetPawn() != nullptr)
	{
		ToWorld *= PlayerController->GetPawn()->GetActorRotation().Quaternion();
	}

	return ToWorld;
}

int32 UTobiiBlueprintLibrary::GetTobiiInt(FString CVarName)
{
	const auto CVar = IConsoleManager::Get().FindConsoleVariable(*CVarName);
	return (CVar != nullptr) ? CVar->GetInt() : 0;
}
void UTobiiBlueprintLibrary::SetTobiiInt(FString CVarName, const int32 NewValue)
{
	const auto CVar = IConsoleManager::Get().FindConsoleVariable(*CVarName);
	if (CVar != nullptr)
	{
		CVar->Set(NewValue);
	}
}

float UTobiiBlueprintLibrary::GetTobiiFloat(FString CVarName)
{
	const auto CVar = IConsoleManager::Get().FindConsoleVariable(*CVarName);
	return (CVar != nullptr) ? CVar->GetFloat() : 0.0f;
}
void UTobiiBlueprintLibrary::SetTobiiFloat(FString CVarName, const float NewValue)
{
	const auto CVar = IConsoleManager::Get().FindConsoleVariable(*CVarName);
	if (CVar != nullptr)
	{
		CVar->Set(NewValue);
	}
}

FString GetTobiiSettingsFilePath()
{
	return FPaths::Combine(FPaths::GeneratedConfigDir() + ANSI_TO_TCHAR(FPlatformProperties::PlatformName()), "TobiiEyetracking.ini");
}
void UTobiiBlueprintLibrary::LoadTobiiSettings()
{
	ApplyCVarSettingsFromIni(TEXT("TobiiEyetracking"), *GetTobiiSettingsFilePath(), ECVF_SetByConstructor);
}
void UTobiiBlueprintLibrary::SaveTobiiSetting(FString CVarSettingToSave)
{
	auto CVar = IConsoleManager::Get().FindConsoleVariable(*CVarSettingToSave);
	if (CVar != nullptr)
	{
		GConfig->EmptySection(TEXT("TobiiEyetracking"), *GetTobiiSettingsFilePath());
		GConfig->SetString(TEXT("TobiiEyetracking"), *CVarSettingToSave, *CVar->GetString(), *GetTobiiSettingsFilePath());
		GConfig->Flush(false, *GetTobiiSettingsFilePath());
	}
}

bool UTobiiBlueprintLibrary::IsXRPlayerController(const APlayerController* PlayerController)
{
	if (GEngine != nullptr)
	{
		if (PlayerController != nullptr)
		{
			ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(PlayerController->Player);
			if (LocalPlayer != nullptr && LocalPlayer->ViewportClient != nullptr)
			{
				//@TODO: Bugged in Shipping builds 4.18? Returns false even though running through VIVE.
				return GEngine->IsStereoscopic3D(LocalPlayer->ViewportClient->Viewport);
			}
		}

		return GEngine->IsStereoscopic3D();
	}

	return false;
}

FVector UTobiiBlueprintLibrary::WorldSpaceDirectionToHMDSpaceDirection(APlayerController* PlayerController, const FVector& WorldSpaceDirection)
{
	static const auto HMDOrientationCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.xr.ApplyHMDOrientation"));
	static const auto ActorRotationCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.xr.ApplyActorRotation"));

	FVector HMDSpaceDirection = WorldSpaceDirection;

	if (ActorRotationCVar->GetInt() != 0
		&& PlayerController != nullptr
		&& PlayerController->GetPawn() != nullptr)
	{
		FQuat ActorRotation = PlayerController->GetPawn()->GetActorRotation().Quaternion();
		HMDSpaceDirection = ActorRotation.UnrotateVector(HMDSpaceDirection);
	}

	if (HMDOrientationCVar->GetInt() != 0)
	{
		FQuat HMDOrientation;
		FVector HMDPosition;
		GEngine->XRSystem->GetCurrentPose(IXRTrackingSystem::HMDDeviceId, HMDOrientation, HMDPosition);
		HMDSpaceDirection = HMDOrientation.Inverse().RotateVector(HMDSpaceDirection);
	}

	return HMDSpaceDirection;
}
