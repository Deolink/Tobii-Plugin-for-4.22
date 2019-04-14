/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "tobii_g2om.h"
#include "tobii_gtom.h"
#include "TobiiUnrealEngineInterface.h"
#include "TobiiGazeFocusableWidget.h"
#include "TobiiGTOMTypes.h"

#include "Runtime/Core/Public/Modules/ModuleInterface.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"

#define TOBII_MAX_VISIBLE_IDS 500

class TOBIIGTOM_API FTobiiGTOMModule : public IModuleInterface
{
public:
	static inline FTobiiGTOMModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FTobiiGTOMModule>("TobiiGTOM");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("TobiiGTOM");
	}

public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

public:
	void* GTOMDllHandle;
	ITobiiGTOMEngine* GTOMEngine;
	FTobiiUnrealEngineInterface* UnrealInterface;
	TobiiGTOMGazeData GTOMGazeData;
	TobiiGazeFocusableID VisibleIds[TOBII_MAX_VISIBLE_IDS];
	int32 ActualNrVisibleIDs;

public:
	void* G2OMDllHandle;
	g2om_context* G2OMContext;
	g2om_gaze_data G2OMGazeData;
	g2om_raycast_result G2OMRaycastResults;
	TArray<FTobiiGazeFocusData> G2OMFocusResults;

public:
	FDateTime StartTime;

private:
	void Tick(float DeltaTimeSecs, APlayerController* CurrentEyeTrackingPlayerController);

	g2om_vector UE4VectorToG2OMVector(FVector Input) const;
	FVector G2OMVectorToUE4Vector(g2om_vector Input) const;
};
