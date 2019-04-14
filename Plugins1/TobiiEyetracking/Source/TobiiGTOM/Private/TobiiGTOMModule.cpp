/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiGTOMModule.h"
#include "ITobiiCore.h"
#include "TobiiGazeFocusableComponent.h"

#include "Runtime/Engine/Public/DrawDebugHelpers.h"
#include "Runtime/Core/Public/Misc/Paths.h"

IMPLEMENT_MODULE(FTobiiGTOMModule, TobiiGTOM)

static TAutoConsoleVariable<int32> CVarDebugDisplayGTOMVisibility(TEXT("tobii.debug.DisplayGTOMVisibility"), 0, TEXT("1 means we visualize which objects are visible to G2OM"));
static TAutoConsoleVariable<int32> CVarDebugDisplayG2OMCandidateSet(TEXT("tobii.debug.DisplayG2OMCandidateSet"), 1, TEXT("1 will visualize all bounds calculated in G2OM. This is useful to test for math errors."));

void FTobiiGTOMModule::StartupModule()
{
#if TOBII_EYETRACKING_ACTIVE
	FString RelativeGTOMDllPath = FString(TEXT(TOBII_GTOM_RELATIVE_DLL_PATH));
	FString RelativeG2OMDllPath = FString(TEXT(TOBII_G2OM_RELATIVE_DLL_PATH));

#if TOBII_COMPILE_AS_ENGINE_PLUGIN
	FString FullGTOMDllPath = FPaths::Combine(FPaths::EngineDir(), RelativeGTOMDllPath);
	FString FullG2OMDllPath = FPaths::Combine(FPaths::EngineDir(), RelativeG2OMDllPath);
#else
	FString FullGTOMDllPath = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectPluginsDir(), RelativeGTOMDllPath));
	FString FullG2OMDllPath = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectPluginsDir(), RelativeG2OMDllPath));
#endif //TOBII_COMPILE_AS_ENGINE_PLUGIN

	GTOMDllHandle = FPlatformProcess::GetDllHandle(*FullGTOMDllPath);
	G2OMDllHandle = FPlatformProcess::GetDllHandle(*FullG2OMDllPath);

	if (G2OMDllHandle != nullptr && GTOMDllHandle != nullptr)
	{
		UnrealInterface = new FTobiiUnrealEngineInterface();
		GTOMEngine = CreateGTOMEngine(*UnrealInterface);

		g2om_context_create(&G2OMContext, 50);

		ITobiiCore::GetEyeTracker()->GetTickEvent().AddRaw(this, &FTobiiGTOMModule::Tick);
	}
	else
	{
		G2OMContext = nullptr;
		UnrealInterface = nullptr;
		GTOMEngine = nullptr;
	}

	ActualNrVisibleIDs = 0;

#else
	GTOMDllHandle = nullptr;
	G2OMDllHandle = nullptr;
	G2OMContext = nullptr;
#endif //TOBII_EYETRACKING_ACTIVE

	StartTime = FDateTime::UtcNow();
}

void FTobiiGTOMModule::ShutdownModule()
{
	if (G2OMContext != nullptr)
	{
		g2om_context_destroy(&G2OMContext);
		G2OMContext = nullptr;
	}
	
	if (GTOMEngine != nullptr)
	{
		DestroyGTOMEngine(GTOMEngine);
		GTOMEngine = nullptr;
 	}
}

void FTobiiGTOMModule::Tick(float DeltaTimeSecs, APlayerController* CurrentEyeTrackingPlayerController)
{
	//This is called directly after TobiiEyetracker::Tick

	static const auto DrawDebugCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.debug"));

	//Gaze data
	const FTobiiGazeData& CombinedGazeData = ITobiiCore::GetEyeTracker()->GetCombinedGazeData();
	const FTobiiGazeData& LeftGazeData = ITobiiCore::GetEyeTracker()->GetLeftGazeData();
	const FTobiiGazeData& RightGazeData = ITobiiCore::GetEyeTracker()->GetRightGazeData();

	if (GTOMEngine != nullptr)
	{
		GTOMGazeData.bIsGazeDataValid = CombinedGazeData.bIsGazeDataValid;
		GTOMGazeData.bIsStable = CombinedGazeData.bIsStable;
		GTOMGazeData.TimeStampMicroSecs = (FDateTime::UtcNow() - StartTime).GetTotalMicroseconds();
		GTOMGazeData.WorldGazeConeAngleDegrees = CombinedGazeData.WorldGazeConeAngleDegrees * 3.0f;
		GTOMGazeData.WorldGazeOrigin3D[0] = CombinedGazeData.WorldGazeOrigin.X;
		GTOMGazeData.WorldGazeOrigin3D[1] = CombinedGazeData.WorldGazeOrigin.Y;
		GTOMGazeData.WorldGazeOrigin3D[2] = CombinedGazeData.WorldGazeOrigin.Z;
		GTOMGazeData.WorldGazeDirection3D[0] = CombinedGazeData.WorldGazeDirection.X;
		GTOMGazeData.WorldGazeDirection3D[1] = CombinedGazeData.WorldGazeDirection.Y;
		GTOMGazeData.WorldGazeDirection3D[2] = CombinedGazeData.WorldGazeDirection.Z;

		UnrealInterface->Tick(CurrentEyeTrackingPlayerController, CombinedGazeData);
		ActualNrVisibleIDs = GTOMEngine->ProcessWorldSpaceSet(GTOMGazeData, DeltaTimeSecs, VisibleIds, TOBII_MAX_VISIBLE_IDS);
		check(ActualNrVisibleIDs <= TOBII_MAX_VISIBLE_IDS);

		if (DrawDebugCVar->GetInt())
		{
			if (CVarDebugDisplayGTOMVisibility.GetValueOnGameThread() != 0)
			{
				for (int32 FocusableIndex = 0; FocusableIndex < ActualNrVisibleIDs; FocusableIndex++)
				{
					TobiiGazeFocusableID FocusableID = VisibleIds[FocusableIndex];
					TWeakObjectPtr<UPrimitiveComponent> FocusedPrimitivePtr = FTobiiGTOMModule::Get().UnrealInterface->GetPrimitiveFromId(FocusableID);
					if (FocusedPrimitivePtr.IsValid())
					{
						DrawDebugBox(FocusedPrimitivePtr->GetWorld(), FocusedPrimitivePtr->Bounds.GetBox().GetCenter(), FocusedPrimitivePtr->Bounds.GetBox().GetExtent(), FQuat::Identity, FColor::Blue, false, 0.0f);
					}
				}
			}
		}
	}

	if (G2OMContext != nullptr)
	{
		G2OMGazeData.combined.is_valid = CombinedGazeData.bIsGazeDataValid;
		G2OMGazeData.combined.ray.origin.x = CombinedGazeData.WorldGazeOrigin.X;
		G2OMGazeData.combined.ray.origin.y = CombinedGazeData.WorldGazeOrigin.Y;
		G2OMGazeData.combined.ray.origin.z = CombinedGazeData.WorldGazeOrigin.Z;
		G2OMGazeData.combined.ray.direction.x = CombinedGazeData.WorldGazeDirection.X;
		G2OMGazeData.combined.ray.direction.y = CombinedGazeData.WorldGazeDirection.Y;
		G2OMGazeData.combined.ray.direction.z = CombinedGazeData.WorldGazeDirection.Z;

		G2OMGazeData.left_eye.is_valid = LeftGazeData.bIsGazeDataValid;
		G2OMGazeData.left_eye.ray.origin.x = LeftGazeData.WorldGazeOrigin.X;
		G2OMGazeData.left_eye.ray.origin.y = LeftGazeData.WorldGazeOrigin.Y;
		G2OMGazeData.left_eye.ray.origin.z = LeftGazeData.WorldGazeOrigin.Z;
		G2OMGazeData.left_eye.ray.direction.x = LeftGazeData.WorldGazeDirection.X;
		G2OMGazeData.left_eye.ray.direction.y = LeftGazeData.WorldGazeDirection.Y;
		G2OMGazeData.left_eye.ray.direction.z = LeftGazeData.WorldGazeDirection.Z;

		G2OMGazeData.right_eye.is_valid = RightGazeData.bIsGazeDataValid;
		G2OMGazeData.right_eye.ray.origin.x = RightGazeData.WorldGazeOrigin.X;
		G2OMGazeData.right_eye.ray.origin.y = RightGazeData.WorldGazeOrigin.Y;
		G2OMGazeData.right_eye.ray.origin.z = RightGazeData.WorldGazeOrigin.Z;
		G2OMGazeData.right_eye.ray.direction.x = RightGazeData.WorldGazeDirection.X;
		G2OMGazeData.right_eye.ray.direction.y = RightGazeData.WorldGazeDirection.Y;
		G2OMGazeData.right_eye.ray.direction.z = RightGazeData.WorldGazeDirection.Z;

		//Raycasts
		const FHitResult& CombinedHitResult = ITobiiCore::GetEyeTracker()->GetCombinedWorldGazeHitData();
		const FHitResult& LeftHitResult = ITobiiCore::GetEyeTracker()->GetLeftWorldGazeHitData();
		const FHitResult& RightHitResult = ITobiiCore::GetEyeTracker()->GetRightWorldGazeHitData();

		UPrimitiveComponent* CombinedHitPrimitive = CombinedHitResult.GetComponent();
		G2OMRaycastResults.combined.is_valid = UTobiiGazeFocusableComponent::IsPrimitiveFocusable(CombinedHitPrimitive);
		G2OMRaycastResults.combined.id = CombinedHitPrimitive != nullptr ? CombinedHitPrimitive->GetUniqueID() : -1;

		UPrimitiveComponent* LeftHitPrimitive = LeftHitResult.GetComponent();
		G2OMRaycastResults.left_eye.is_valid = UTobiiGazeFocusableComponent::IsPrimitiveFocusable(LeftHitPrimitive);
		G2OMRaycastResults.left_eye.id = LeftHitPrimitive != nullptr ? LeftHitPrimitive->GetUniqueID() : -1;

		UPrimitiveComponent* RightHitPrimitive = RightHitResult.GetComponent();
		G2OMRaycastResults.right_eye.is_valid = UTobiiGazeFocusableComponent::IsPrimitiveFocusable(RightHitPrimitive);
		G2OMRaycastResults.right_eye.id = RightHitPrimitive != nullptr ? RightHitPrimitive->GetUniqueID() : -1;

		//Candidate generation
		TArray<g2om_candidate> Candidates;
		TArray<g2om_candidate_result> CandidateResults;

		//@TODO: We can optimize all of this with caching, and also managing the results array much better. No time now though.
		for (int32 FocusableIndex = 0; FocusableIndex < ActualNrVisibleIDs; FocusableIndex++)
		{
			TobiiGazeFocusableID FocusableID = VisibleIds[FocusableIndex];
			TWeakObjectPtr<UPrimitiveComponent> FocusedPrimitivePtr = FTobiiGTOMModule::Get().UnrealInterface->GetPrimitiveFromId(FocusableID);

// 			bool bRenderedRecently = FApp::GetCurrentTime() - PrimitiveComponent->LastRenderTime < 1.0f;
 			if (FocusedPrimitivePtr.IsValid() && FocusedPrimitivePtr->IsVisible())
			{
				g2om_candidate NewCandidate;
				NewCandidate.id = FocusableID;

				//@TODO: We still don't support rotated bounds here, and are using AABBs, not ideal.
				FTransform LocalToWorldTranform = FocusedPrimitivePtr->GetComponentTransform();
				FMatrix LocalToWorldMatrix = LocalToWorldTranform.ToMatrixWithScale();
				FMatrix WorldToLocalMatrix = LocalToWorldMatrix.InverseFast();
				FMemory::Memcpy(NewCandidate.local_to_world_matrix.data, LocalToWorldMatrix.M, 16 * sizeof(float));
				FMemory::Memcpy(NewCandidate.world_to_local_matrix.data, WorldToLocalMatrix.M, 16 * sizeof(float));

				FBox BoxBounds = FocusedPrimitivePtr->CalcBounds(FTransform::Identity).GetBox();
				NewCandidate.min_local_space.x = BoxBounds.Min.X;
				NewCandidate.min_local_space.y = BoxBounds.Min.Y;
				NewCandidate.min_local_space.z = BoxBounds.Min.Z;
				NewCandidate.max_local_space.x = BoxBounds.Max.X;
				NewCandidate.max_local_space.y = BoxBounds.Max.Y;
				NewCandidate.max_local_space.z = BoxBounds.Max.Z;

				Candidates.Add(MoveTemp(NewCandidate));
				CandidateResults.Add(g2om_candidate_result());
			}
		}

		g2om_process(G2OMContext, &G2OMGazeData, &G2OMRaycastResults, Candidates.Num(), Candidates.GetData(), CandidateResults.GetData());
		
		if (DrawDebugCVar->GetInt() && CVarDebugDisplayG2OMCandidateSet.GetValueOnGameThread() != 0)
		{
			for (g2om_candidate& Candidate : Candidates)
			{
				g2om_vector Corners[G2OM_CORNERS_COUNT];
				g2om_get_worldspace_corner_of_candidate(&Candidate, G2OM_CORNERS_COUNT, Corners);
				
				UWorld* World = CurrentEyeTrackingPlayerController->GetWorld();
				FColor BoxColor = FColor::Orange;

				TArray<FVector> UCorners;
				for (int32 Idx = 0; Idx < G2OM_CORNERS_COUNT; Idx++)
				{
					UCorners.Add(G2OMVectorToUE4Vector(Corners[Idx]));
				}

				//FRONT
				DrawDebugLine(World, UCorners[G2OM_CORNERS_FLL], UCorners[G2OM_CORNERS_FLR], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_FLR], UCorners[G2OM_CORNERS_FUR], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_FUR], UCorners[G2OM_CORNERS_FUL], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_FUL], UCorners[G2OM_CORNERS_FLL], BoxColor, false, 0.0f);

				//BACK
				DrawDebugLine(World, UCorners[G2OM_CORNERS_BLL], UCorners[G2OM_CORNERS_BLR], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_BLR], UCorners[G2OM_CORNERS_BUR], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_BUR], UCorners[G2OM_CORNERS_BUL], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_BUL], UCorners[G2OM_CORNERS_BLL], BoxColor, false, 0.0f);

				//SPOKES
				DrawDebugLine(World, UCorners[G2OM_CORNERS_FLL], UCorners[G2OM_CORNERS_BLL], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_FLR], UCorners[G2OM_CORNERS_BLR], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_FUR], UCorners[G2OM_CORNERS_BUR], BoxColor, false, 0.0f);
				DrawDebugLine(World, UCorners[G2OM_CORNERS_FUL], UCorners[G2OM_CORNERS_BUL], BoxColor, false, 0.0f);
			}
		}

		G2OMFocusResults.Empty();
		for (const g2om_candidate_result& ResultCandidate : CandidateResults)
		{
			if (ResultCandidate.score > FLT_EPSILON)
			{
				TWeakObjectPtr<UPrimitiveComponent> FocusedPrimitivePtr = FTobiiGTOMModule::Get().UnrealInterface->GetPrimitiveFromId(ResultCandidate.id);

				if (FocusedPrimitivePtr.IsValid())
				{
					FTobiiGazeFocusData NewFocusData;
					NewFocusData.FocusedActor = FocusedPrimitivePtr->GetOwner();
					NewFocusData.FocusedPrimitiveComponent = FocusedPrimitivePtr;
					NewFocusData.FocusedWidget = nullptr;
					NewFocusData.LastVisibleWorldLocation = FocusedPrimitivePtr->GetComponentLocation();
					NewFocusData.FocusConfidence = ResultCandidate.score;

					G2OMFocusResults.Add(MoveTemp(NewFocusData));
				}
			}
		}
	}
}

g2om_vector FTobiiGTOMModule::UE4VectorToG2OMVector(FVector Input) const
{
	return g2om_vector{ Input.X, Input.Y, Input.Z };
}

FVector FTobiiGTOMModule::G2OMVectorToUE4Vector(g2om_vector Input) const
{
	return FVector(Input.x, Input.y, Input.z);
}
