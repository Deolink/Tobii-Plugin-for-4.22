/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiProjectileComponent.h"

#include "TobiiInteractionsBlueprintLibrary.h"

#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"

UTobiiProjectileComponent::UTobiiProjectileComponent()
	: InitialVelocity(1.0f, 0.0f, 0.0f)
	, bAffectedByGravity(true)
	, WorldSpaceGravity(0.0f, 0.0f, 0.0f)
	, InitialFuelSecs(0.0f)
	, MaxLifeTimeSecs(0.0f)
	
	, HomingBehavior(ETobiiProjectileHomingBehavior::Acceleration)

	, SteeringMaxTurnSpeedDegPerSec(10.0f)
	, GuidanceSystem(ETobiiProjectileGuidanceSystem::ComplexPrediction)
	, GuidanceSystemUpdateFreq(0.0f)
	, GuidanceSystemMaximumTargetAngleDeg(0.0f)
{
	HomingAccelerationMagnitude = 10000.0f;
	PrimaryComponentTick.bCanEverTick = true;
}

void UTobiiProjectileComponent::BeginPlay()
{
	Super::BeginPlay();

	bCanThrust = true;
	bUsesFuel = InitialFuelSecs > 0.0f;
	CurrentFuelSecs = InitialFuelSecs;
	CurrentLifeTime = 0.0f;
	GuidanceSystemUpdateTimerSecsLeft = 0.0f;
	TargetAcceleration = FVector::ZeroVector;
	if (WorldSpaceGravity.IsZero())
	{
		WorldSpaceGravity.Set(0.0f, 0.0f, GetGravityZ());
	}

	//This is a copy from the base class InitializeComponent function. This should really be done at beginplay to let any instigator configure initial speed etc.
	if (InitialVelocity.SizeSquared() > 0.f)
	{
		FVector NewVelocity;
		if (InitialSpeed > 0.f)
		{
			NewVelocity = InitialVelocity.GetSafeNormal() * InitialSpeed;
		}
		else
		{
			NewVelocity = InitialVelocity;
		}

		if (bInitialVelocityInLocalSpace)
		{
			SetVelocityInLocalSpace(NewVelocity);
		}

		if (bRotationFollowsVelocity)
		{
			if (UpdatedComponent)
			{
				UpdatedComponent->SetWorldRotation(NewVelocity.Rotation());
			}
		}

		UpdateComponentVelocity();

		if (UpdatedPrimitive && UpdatedPrimitive->IsSimulatingPhysics())
		{
			UpdatedPrimitive->SetPhysicsLinearVelocity(NewVelocity);
		}
	}
}

void UTobiiProjectileComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	CurrentLifeTime += DeltaTime;

	if (bUsesFuel && bCanThrust)
	{
		CurrentFuelSecs -= DeltaTime;
		if (CurrentFuelSecs <= 0.0f)
		{
			CurrentFuelSecs = 0.0f;
			bCanThrust = false;
		}
	}

	bTargetOffCourse = false;
	if(GuidanceSystemMaximumTargetAngleDeg > FLT_EPSILON && HomingTargetComponent.IsValid())
	{ 
		//If our target is too far off course, disable thrust
		FVector DeltaVector = HomingTargetComponent->GetComponentLocation() - GetOwner()->GetActorLocation();
		DeltaVector.Normalize();
		FVector MyDirection = Velocity;
		MyDirection.Normalize();
		float SeparationAngle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(DeltaVector, MyDirection)));
		if (SeparationAngle > GuidanceSystemMaximumTargetAngleDeg)
		{
			bTargetOffCourse = true;
		}
	}

	if (HomingTargetComponent.IsValid() && !bTargetOffCourse)
	{
		TargetAcceleration = HomingTargetComponent->GetComponentVelocity() - LastTargetVelocity;
		LastTargetVelocity = HomingTargetComponent->GetComponentVelocity();

		if (GuidanceSystemUpdateFreq == 0.0f)
		{
			SimulateGuidanceSystem();
		}
		else
		{
			GuidanceSystemUpdateTimerSecsLeft -= DeltaTime;
			if (GuidanceSystemUpdateTimerSecsLeft <= 0.0f)
			{
				GuidanceSystemUpdateTimerSecsLeft = 1.0f / GuidanceSystemUpdateFreq;
				SimulateGuidanceSystem();
			}
		}

		//Steering behavior
		if (bIsHomingProjectile && bCanThrust && HomingBehavior == ETobiiProjectileHomingBehavior::Steering)
		{
			FVector ForwardDir = Velocity;
			FVector TowardsTarget = GuidanceSystemTarget - GetOwner()->GetActorLocation();
			ForwardDir.Normalize();
			TowardsTarget.Normalize();

			float AngularDifferenceRad = FMath::Acos(FVector::DotProduct(ForwardDir, TowardsTarget));
			float AlphaStep = FMath::Clamp(FMath::DegreesToRadians(SteeringMaxTurnSpeedDegPerSec) * DeltaTime / AngularDifferenceRad, 0.0f, 1.0f);
			FVector NewVelocityDirection = FQuat::Slerp(ForwardDir.ToOrientationQuat(), TowardsTarget.ToOrientationQuat(), AlphaStep).GetForwardVector();
			Velocity = NewVelocityDirection * Velocity.Size();
			UpdateComponentVelocity();
		}
	}

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (MaxLifeTimeSecs > 0.0f && CurrentLifeTime > MaxLifeTimeSecs)
	{
		GetOwner()->Destroy();
	}
}

FVector UTobiiProjectileComponent::ComputeAcceleration(const FVector& InVelocity, float DeltaTime) const
{
	FVector Acceleration(FVector::ZeroVector);

	if (bAffectedByGravity)
	{
		Acceleration += WorldSpaceGravity;
	}

	if (bCanThrust && !bTargetOffCourse && bIsHomingProjectile && HomingTargetComponent.IsValid() && HomingBehavior == ETobiiProjectileHomingBehavior::Acceleration)
	{
		Acceleration += AccelerationVectorTowardsTarget;
	}

	return Acceleration;
}

void UTobiiProjectileComponent::SimulateGuidanceSystem()
{
	switch (GuidanceSystem)
	{
	case ETobiiProjectileGuidanceSystem::Prediction:
	case ETobiiProjectileGuidanceSystem::ComplexPrediction:
	{
		FTobiiAccelerationBasedHomingData InterceptData;
		InterceptData.ProjectilePosition = GetOwner()->GetActorLocation();
		InterceptData.ProjectileVelocity = Velocity;
		InterceptData.ProjectileAccelerationMagnitude = HomingAccelerationMagnitude;
		InterceptData.TargetPosition = HomingTargetComponent->GetComponentLocation();
		InterceptData.TargetVelocity = HomingTargetComponent->GetComponentVelocity();
		InterceptData.TargetAcceleration = TargetAcceleration;
		InterceptData.bAttemptClosestApproachSolution = GuidanceSystem == ETobiiProjectileGuidanceSystem::ComplexPrediction;
		
		FTobiiAccelerationBasedHomingResult HomingResult;
		if (UTobiiInteractionsBlueprintLibrary::FindNeededAccelerationForAccelerationBasedHomingProjectile(InterceptData, HomingResult))
		{
			GuidanceSystemTarget = HomingResult.ExpectedInterceptLocation;
			AccelerationVectorTowardsTarget = HomingResult.SuggestedAcceleration;
		}
		else
		{
			GuidanceSystemTarget = HomingTargetComponent->GetComponentLocation();
			AccelerationVectorTowardsTarget = (GuidanceSystemTarget - UpdatedComponent->GetComponentLocation()).GetSafeNormal() * HomingAccelerationMagnitude;
		}
		break;
	}
	case ETobiiProjectileGuidanceSystem::Simple:
	default:
	{
		GuidanceSystemTarget = HomingTargetComponent->GetComponentLocation();
		AccelerationVectorTowardsTarget = (GuidanceSystemTarget - UpdatedComponent->GetComponentLocation()).GetSafeNormal() * HomingAccelerationMagnitude;
	}
	}
}

void UTobiiProjectileComponent::StartHoming(USceneComponent* NewHomingTargetComponent)
{
	bSimulationEnabled = true;
	bIsHomingProjectile = true;
	HomingTargetComponent = NewHomingTargetComponent;
	if (UpdatedComponent == nullptr)
	{
		UpdatedComponent = GetOwner()->GetRootComponent();
	}
	if (Cast<UPrimitiveComponent>(UpdatedComponent) != nullptr)
	{
		Cast<UPrimitiveComponent>(UpdatedComponent)->SetSimulatePhysics(false);
	}
	PrimaryComponentTick.SetTickFunctionEnable(true);
}

void UTobiiProjectileComponent::StopHoming()
{
	bIsHomingProjectile = false;
	HomingTargetComponent = nullptr;
	Velocity = FVector::ZeroVector;
}
