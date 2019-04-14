/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiInfiniteScreenCameraModifier.h"
#include "TobiiInteractionsBlueprintLibrary.h"
#include "ITobiiCore.h"

#include "Runtime/Core/Public/HAL/IConsoleManager.h"

static TAutoConsoleVariable<int32> CVarExtendedViewScaleByInputPitch(TEXT("tobii.ExtendedViewScaleByInputPitch"), 1, TEXT("0 - Input pitch does not affect extended view. 1 - When your input pitch (mouse or gamepad) reaches extreme points, tone down extended view to not induce rotations."));

UTobiiInfiniteScreenCameraModifier::UTobiiInfiniteScreenCameraModifier()
	: InfiniteScreenAngles(0.0f, 0.0f, 0.0f)
	, ViewInfoWithoutExtendedView()
{
	
}

bool UTobiiInfiniteScreenCameraModifier::ExtendedViewAvailable()
{
	return UTobiiInteractionsBlueprintLibrary::IsInfiniteScreenEnabled();
}

bool UTobiiInfiniteScreenCameraModifier::ModifyCamera(float DeltaTime, struct FMinimalViewInfo& InOutPOV)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_TobiiEyetrackingInteractions_InfiniteScreen);

	Super::ModifyCamera(DeltaTime, InOutPOV);
	ViewInfoWithoutExtendedView = InOutPOV;
	
	if (!ExtendedViewAvailable())
	{
		InfiniteScreenAngles = FRotator::ZeroRotator;
		return true;
	}

	InfiniteScreenAngles = ITobiiCore::GetEyeTracker()->GetInfiniteScreenAngles();

	if (CVarExtendedViewScaleByInputPitch.GetValueOnGameThread())
	{
		//Limit infinite screen yaw depending on input device pitch
		float PitchScale = 1.0f - (FMath::Abs(InOutPOV.Rotation.Pitch) / 90.0f);
		float SmoothPitchScale = FMath::SmoothStep(0.0f, 1.0f, PitchScale);
		InfiniteScreenAngles.Yaw *= SmoothPitchScale;
	}

	FQuat WorldSpaceYawRotation = FQuat(FVector::UpVector, InfiniteScreenAngles.Yaw);
	FQuat LocalSpacePitchRotation = FQuat(FVector::RightVector, -InfiniteScreenAngles.Pitch);

	FQuat InfiniteScreenViewRotation(InOutPOV.Rotation);
	InfiniteScreenViewRotation = InfiniteScreenViewRotation * LocalSpacePitchRotation; //Local space by multiplying on the right
	InfiniteScreenViewRotation = WorldSpaceYawRotation * InfiniteScreenViewRotation; //World space by multiplying on the left
	InOutPOV.Rotation = InfiniteScreenViewRotation.Rotator();

	return true;
}
