/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiThrowAtGazeComponent.h"
#include "ITobiiCore.h"
#include "TobiiBlueprintLibrary.h"
#include "TobiiInteractionsBlueprintLibrary.h"

#include "../TobiiInteractionsInternalTypes.h"
#include "TobiiGazeFocusManagerComponent.h"

#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"

#include "Runtime/Core/Public/HAL/IConsoleManager.h"

static TAutoConsoleVariable<int32> CVarThrowAtGazeEnabled(TEXT("tobii.interaction.ThrowAtGazeEnabled"), 1, TEXT("Throw where your are looking."));
static TAutoConsoleVariable<int32> CVarThrowAtGazeDebug(TEXT("tobii.debug.ThrowAtGaze"), 1, TEXT("Draw throw at gaze debug data."));

UTobiiThrowAtGazeComponent::UTobiiThrowAtGazeComponent()
	: ThrowTarget(nullptr)
	, MaxThrowSpeedCmPerSecs(1000.0f)
	, ThrowApexOffsetCm(200.0f)

	, MaxNrTries(5)
	, bPreferLowApexForTargetsBelowThrower(true)
	, bShouldTraceResult(true)
	, ThrowApexOffsetMinimumCm(10.0f)
	, ThrowApexOffsetMaximumCm(500.0f)
	, MinimumApexDeltaCm(10.0f)
	, TraceRadiusCm(1.0f)
	, MaxNrTraceSteps(50)
	, TraceStepSizeSecs(0.1f)
	, TraceChannel(ECC_Visibility)
	, TraceIgnoreActors()
	, bShouldTraceIgnoreOwner(true)

	, bUseCustomGravity(false)
	, CustomProjectileGravity(FVector::ZeroVector)
{
}

bool UTobiiThrowAtGazeComponent::ThrowAtGazeAvailable()
{
	return UTobiiInteractionsBlueprintLibrary::IsThrowAtGazeEnabled();
}

void UTobiiThrowAtGazeComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	const float AccelerationLerpSpeed = 0.7f;

	if (!ThrowTarget.IsValid())
	{
		return;
	}

	FVector CurrentTargetVelocity = ThrowTarget->GetOwner()->GetVelocity();
	CalculatedTargetAcceleration = FMath::Lerp(CalculatedTargetAcceleration, CurrentTargetVelocity - LastTargetVelocity, AccelerationLerpSpeed);
	LastTargetVelocity = CurrentTargetVelocity;
}

FVector UTobiiThrowAtGazeComponent::CorrectThrow(const FVector& ThrowOrigin, const FVector& OriginalThrowVector, float ThrowAngleThresholdDeg, float ThrowSpeedThreshold, bool bUseSimple)
{
	FVector SuggestedThrowVector;
	ETobiiThrowAtGazeResult Result;
	if (bUseSimple)
	{
		Result = CalculateThrowAtGazeVectorSimple(ThrowOrigin, SuggestedThrowVector);
	}
	else
	{
		Result = CalculateThrowAtGazeVectorComplex(ThrowOrigin, SuggestedThrowVector);
	}

	switch (Result)
	{
		case ETobiiThrowAtGazeResult::OutOfRange:
		case ETobiiThrowAtGazeResult::DirectHit:
		{
			if (ThrowAngleThresholdDeg > FLT_EPSILON)
			{
				FVector SuggestedDirection = SuggestedThrowVector;
				SuggestedDirection.Normalize();
				FVector OriginalDirection = OriginalThrowVector;
				OriginalDirection.Normalize();

				float SeparationDot = FVector::DotProduct(SuggestedDirection, OriginalDirection);
				float SeparationAngleDeg = FMath::RadiansToDegrees(FMath::Acos(SeparationDot));
				if (SeparationAngleDeg > ThrowAngleThresholdDeg)
				{
					static const auto DrawDebugCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.debug"));
					if (DrawDebugCVar->GetInt() && CVarThrowAtGazeDebug.GetValueOnGameThread())
					{
						UE_LOG(LogTemp, Warning, TEXT("Throw diverged too much. Separation angle was: %f"), SeparationAngleDeg);
					}

					return OriginalThrowVector;
				}
			}

			if (ThrowSpeedThreshold > FLT_EPSILON)
			{
				float SuggestedSpeedSq = SuggestedThrowVector.SizeSquared();
				float OriginalSpeedSq = OriginalThrowVector.SizeSquared();
				float ThresholdSq = ThrowSpeedThreshold * ThrowSpeedThreshold;

				//Only invalidate too weak throws
				if (OriginalSpeedSq + ThresholdSq < SuggestedSpeedSq)
				{
					static const auto DrawDebugCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.debug"));
					if (DrawDebugCVar->GetInt() && CVarThrowAtGazeDebug.GetValueOnGameThread())
					{
						UE_LOG(LogTemp, Warning, TEXT("Throw was too weak. Throw speed was: %f. Suggested speed was: %f"), OriginalThrowVector.Size(), SuggestedThrowVector.Size());
					}

					return OriginalThrowVector;
				}
			}
			
			return SuggestedThrowVector;
		}

		default:
		{
			return OriginalThrowVector;
		}
	}
}

ETobiiThrowAtGazeResult UTobiiThrowAtGazeComponent::CalculateThrowAtGazeVectorSimple(const FVector& ThrowOrigin, FVector& OutGazeThrowVector)
{
	if (!ThrowTarget.IsValid())
	{
		return ETobiiThrowAtGazeResult::NoThrowTarget;
	}

	return CalculateThrowArcSimple(ThrowOrigin, ThrowTarget->GetCenterOfMass(), ThrowTarget->GetOwner()->GetVelocity(), CalculatedTargetAcceleration, OutGazeThrowVector);
}

ETobiiThrowAtGazeResult UTobiiThrowAtGazeComponent::CalculateThrowArcSimple(const FVector& ThrowOrigin, const FVector& TargetLocation, const FVector& TargetVelocity, const FVector& TargetAcceleration, FVector& OutGazeThrowVector)
{
	if (GetWorld() == nullptr)
	{
		return ETobiiThrowAtGazeResult::InvalidInput;
	}

	FTobiiBallisticData BallisticData;
	BallisticData.ProjectileInitialPosition = ThrowOrigin;
	BallisticData.ProjectileApexOffsetCm = ThrowApexOffsetCm;
	BallisticData.ProjectileAcceleration = bUseCustomGravity ? CustomProjectileGravity : FVector(0.0f, 0.0f, GetWorld()->GetGravityZ());
	BallisticData.TargetPosition = TargetLocation;
	BallisticData.TargetVelocity = TargetVelocity;
	BallisticData.TargetAcceleration = TargetAcceleration;

	TArray<FTobiiBallisticResult> Results;
	if (UTobiiInteractionsBlueprintLibrary::FindNeededInitialVelocityForBallisticProjectile(BallisticData, Results))
	{
		for (FTobiiBallisticResult& Result : Results)
		{
			if (Result.SuggestedInitialVelocity.Size() < MaxThrowSpeedCmPerSecs)
			{
				OutGazeThrowVector = Result.SuggestedInitialVelocity;
				return ETobiiThrowAtGazeResult::DirectHit;
			}
			else
			{
				OutGazeThrowVector.Normalize();
				OutGazeThrowVector *= MaxThrowSpeedCmPerSecs;
				return ETobiiThrowAtGazeResult::OutOfRange;
			}
		}
	}

	return ETobiiThrowAtGazeResult::NoPath;
}

ETobiiThrowAtGazeResult UTobiiThrowAtGazeComponent::CalculateThrowAtGazeVectorComplex(const FVector& ThrowOrigin, FVector& OutGazeThrowVector)
{
	if (!ThrowTarget.IsValid())
	{
		return ETobiiThrowAtGazeResult::NoThrowTarget;
	}

	return CalculateThrowArcComplex(ThrowOrigin, ThrowTarget->GetCenterOfMass(), ThrowTarget->GetOwner()->GetVelocity(), CalculatedTargetAcceleration, OutGazeThrowVector);
}

ETobiiThrowAtGazeResult UTobiiThrowAtGazeComponent::CalculateThrowArcComplex(const FVector& ThrowOrigin, const FVector& TargetLocation, const FVector& TargetVelocity, const FVector& TargetAcceleration, FVector& OutThrowVector)
{
	if (!ThrowTarget.IsValid() || GetWorld() == nullptr || MaxNrTries <= 0 || ThrowApexOffsetMaximumCm < ThrowApexOffsetMinimumCm)
	{
		return ETobiiThrowAtGazeResult::InvalidInput;
	}

	const FVector ProjectileAcceleration = bUseCustomGravity ? CustomProjectileGravity : FVector(0.0f, 0.0f, GetWorld()->GetGravityZ());

	FTobiiBallisticData BallisticData;
	BallisticData.ProjectileInitialPosition = ThrowOrigin;
	BallisticData.ProjectileAcceleration = ProjectileAcceleration;
	BallisticData.TargetPosition = TargetLocation;
	BallisticData.TargetVelocity = TargetVelocity;
	BallisticData.TargetAcceleration = TargetAcceleration;

	TArray<AActor*> IgnoredActors = TraceIgnoreActors;
	if (bShouldTraceIgnoreOwner)
	{
		IgnoredActors.Add(GetOwner());
	}

	FTobiiProjectileTraceData TraceData;
	TraceData.TraceChannel = TraceChannel;
	TraceData.IgnoredActors = IgnoredActors;
	TraceData.MaxNrSteps = MaxNrTraceSteps;
	TraceData.StepSizeSecs = TraceStepSizeSecs;
	TraceData.TraceRadiusCm = TraceRadiusCm;
	TraceData.ProjectileInitialPosition = ThrowOrigin;
	TraceData.ProjectileAcceleration = ProjectileAcceleration;

	//We want to first decide which apexes we should test, and then we can use logic to suss out which one ends up being the best.
	TArray<float> ApexesToTest;
	float ApexStep = (ThrowApexOffsetMaximumCm - ThrowApexOffsetMinimumCm) / MaxNrTries;
	for (int32 ApexIdx = 0; ApexIdx < MaxNrTries; ApexIdx++)
	{
		float CurrentApex = ThrowApexOffsetMinimumCm + ApexIdx * ApexStep;
		ApexesToTest.Add(CurrentApex);
	}
	ApexesToTest.Add(ThrowApexOffsetMaximumCm);

	//Loop variables
	float BestResultDistanceToTarget = FLT_MAX;
	TArray<FVector> BestResultOutTracedPath;
	FTobiiBallisticResult BestResult;
	ETobiiThrowAtGazeResult BestResultStatus = ETobiiThrowAtGazeResult::NoPath;
	while (ApexesToTest.Num() > 0)
	{
		int32 SelectedApexIndex;
		if (bPreferLowApexForTargetsBelowThrower && TargetLocation.Z < ThrowOrigin.Z)
		{
			SelectedApexIndex = 0;
		}
		else
		{
			SelectedApexIndex = (int32)(ApexesToTest.Num() / 2.0f);
		}
		SelectedApexIndex = FMath::Clamp(SelectedApexIndex, 0, ApexesToTest.Num() - 1);
		BallisticData.ProjectileApexOffsetCm = ApexesToTest[SelectedApexIndex];
		ApexesToTest.RemoveAt(SelectedApexIndex);

		TArray<FTobiiBallisticResult> Results;
		if (UTobiiInteractionsBlueprintLibrary::FindNeededInitialVelocityForBallisticProjectile(BallisticData, Results))
		{
			for (FTobiiBallisticResult& Result : Results)
			{
				bool bIsInRange = Result.SuggestedInitialVelocity.Size() < MaxThrowSpeedCmPerSecs;
				if (!bIsInRange)
				{
					Result.SuggestedInitialVelocity.Normalize();
					Result.SuggestedInitialVelocity *= MaxThrowSpeedCmPerSecs;
				}

				TArray<FVector> TracedPath;
				bool bWayIsClear = true;
				if (bShouldTraceResult)
				{
					TraceData.ProjectileVelocity = Result.SuggestedInitialVelocity;

					FHitResult HitResult;
					if (!UTobiiInteractionsBlueprintLibrary::TraceBallisticProjectilePath(GetWorld(), TraceData, TracedPath, HitResult)
						|| HitResult.Actor != ThrowTarget->GetOwner())
					{
						bWayIsClear = false;
					}

					static const auto DrawDebugCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.debug"));
					if (DrawDebugCVar->GetInt() && CVarThrowAtGazeDebug.GetValueOnGameThread())
					{
						if (TracedPath.Num() > 1)
						{
							FColor DrawColor = bWayIsClear ? FColor::Green : FColor::Red;
							FVector PrevPoint = TracedPath[0];
							int32 MiddlePointIdx = (int32)(TracedPath.Num() / 2.0f);
							if (MiddlePointIdx >= 0 && MiddlePointIdx < TracedPath.Num())
							{
								DrawDebugString(GetWorld(), TracedPath[MiddlePointIdx] + FVector(0.0f, 0.0f, 10.0f), FString::Printf(TEXT("%f"), BallisticData.ProjectileApexOffsetCm), nullptr, DrawColor, 5.0f);
							}
							for (auto& TracePoint : TracedPath)
							{
								DrawDebugLine(GetWorld(), PrevPoint, TracePoint, DrawColor, false, 5.0f, 0, 1.0f);
								PrevPoint = TracePoint;
							}
						}
					}
				}

				if (bWayIsClear)
				{
					if (bIsInRange)
					{
						//We're done! Best outcome.
						OutThrowVector = Result.SuggestedInitialVelocity;
						return ETobiiThrowAtGazeResult::DirectHit;
					}
					else if (BestResultStatus <= ETobiiThrowAtGazeResult::OutOfRange)
					{
						bool bIsFaster = Result.ExpectedInterceptTimeSecs < BestResult.ExpectedInterceptTimeSecs;
						if (bIsFaster)
						{
							BestResultOutTracedPath = TracedPath;
							BestResult = Result;
							BestResultStatus = ETobiiThrowAtGazeResult::OutOfRange;
						}
					}
				}
				else if (TracedPath.Num() > 0)
				{
					if (bIsInRange)
					{
						if (BestResultStatus <= ETobiiThrowAtGazeResult::BlockedByWorldInRange)
						{
							float DistanceToTarget = FVector::Dist(TargetLocation, TracedPath[TracedPath.Num() - 1]);
							bool bIsCloser = DistanceToTarget < BestResultDistanceToTarget;
							if (bIsCloser)
							{
								BestResultDistanceToTarget = DistanceToTarget;
								BestResult = Result;
								BestResultStatus = ETobiiThrowAtGazeResult::BlockedByWorldInRange;
							}
						}
					}
					else
					{
						if (BestResultStatus <= ETobiiThrowAtGazeResult::BlockedByWorldAndOutOfRange)
						{
							float DistanceToTarget = FVector::Dist(TargetLocation, TracedPath[TracedPath.Num() - 1]);
							bool bIsCloser = DistanceToTarget < BestResultDistanceToTarget;
							if (bIsCloser)
							{
								BestResultDistanceToTarget = DistanceToTarget;
								BestResult = Result;
								BestResultStatus = ETobiiThrowAtGazeResult::BlockedByWorldAndOutOfRange;
							}
						}
					}
				}
			}
		}

		//Use what we have learned to prune apexes for future loops
		if (Results.Num() == 0)
		{
			//If we didn't have any solutions or we are out of range, it means the apex is too low. Clear all apexes that are smaller than our current.
			for (int32 CurrentApexIdx = 0; CurrentApexIdx < ApexesToTest.Num(); CurrentApexIdx++)
			{
				if (ApexesToTest[CurrentApexIdx] <= BallisticData.ProjectileApexOffsetCm)
				{
					ApexesToTest.RemoveAt(CurrentApexIdx);
					CurrentApexIdx--;
				}
			}
		}
		else if (BestResultStatus == ETobiiThrowAtGazeResult::OutOfRange)
		{
			//If we are out of range, we need to select an apex closer to a 45 degree throw angle.
			//@TODO: Should we maybe do a solve for throw force given 45 degree throw angle here to optimize?
			FVector VelNorm = BestResult.SuggestedInitialVelocity;
			VelNorm.Normalize();
			FVector ProjectedToXY = FVector(VelNorm.X, VelNorm.Y, 0.0f);
			ProjectedToXY.Normalize();
			float ThrowAngleCos = FVector::DotProduct(VelNorm, ProjectedToXY);

			//1 means it is along the ground, 0 is straight up. So if the value is between 0.5 and 1 we need to aim higher and if it's between 0 and 0.5 we need to go lower
			if (ThrowAngleCos < 0.5f)
			{
				for (int32 CurrentApexIdx = 0; CurrentApexIdx < ApexesToTest.Num(); CurrentApexIdx++)
				{
					if (ApexesToTest[CurrentApexIdx] >= BallisticData.ProjectileApexOffsetCm)
					{
						ApexesToTest.RemoveAt(CurrentApexIdx);
						CurrentApexIdx--;
					}
				}
			}
			else
			{
				for (int32 CurrentApexIdx = 0; CurrentApexIdx < ApexesToTest.Num(); CurrentApexIdx++)
				{
					if (ApexesToTest[CurrentApexIdx] <= BallisticData.ProjectileApexOffsetCm)
					{
						ApexesToTest.RemoveAt(CurrentApexIdx);
						CurrentApexIdx--;
					}
				}
			}
		}
	}

	if (BestResultStatus == ETobiiThrowAtGazeResult::NoPath)
	{
		OutThrowVector = FVector::ZeroVector;
	}
	else
	{
		OutThrowVector = BestResult.SuggestedInitialVelocity;
	}

	return BestResultStatus;
}
