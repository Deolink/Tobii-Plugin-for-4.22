/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#if TOBII_EYETRACKING_ACTIVE

#include "TobiiTypes.h"
#include "tobii_gtom.h"

#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"

class FTobiiUnrealEngineInterface : public ITobiiGameEngine
{
public:
	FTobiiUnrealEngineInterface();
	virtual ~FTobiiUnrealEngineInterface() {}

	void Tick(APlayerController* PlayerController, const FTobiiGazeData& GazeData);

public:
	//Physics
	virtual float GetCameraNearClipDistance() override;
	virtual void GetCameraDirection(float& x, float& y, float& z) override;
	virtual void GetCameraLocation(float& x, float& y, float& z) override;
	virtual bool LineTrace(float startX, float startY, float startZ, float dirX, float dirY, float dirZ, TobiiGTOMLineTraceResponse& HitResponse) override;

	//Focusable
	virtual bool IsFocusableValid(TobiiGazeFocusableID id) override;
	virtual bool QueryFocusableMaximumDistance(TobiiGazeFocusableID id, float& outValue) override;
	virtual bool QueryFocusablePosition(TobiiGazeFocusableID id, float& x, float& y, float& z) override;

	//Utils
	virtual float RandRange(float min, float max) override;

	//Debug
	virtual void DrawDebugSphere(float worldX, float worldY, float worldZ, float size, float r, float g, float b) override;

public:
	TWeakObjectPtr<UPrimitiveComponent> GetPrimitiveFromId(TobiiGazeFocusableID Id) { return IDToPrimitiveMap.Contains(Id) ? IDToPrimitiveMap[Id] : TWeakObjectPtr<UPrimitiveComponent>(nullptr); }
	TobiiGazeFocusableID GetIdFromPrimitive(TWeakObjectPtr<UPrimitiveComponent> Primitive) { return PrimitiveToIDMap.Contains(Primitive) ? PrimitiveToIDMap[Primitive] : TOBII_GAZE_FOCUSABLE_ID_NONE; }

private:
	TWeakObjectPtr<APlayerController> CurrentPlayerController;
	FVector CameraLocation;
	FVector CameraDirection;

	TMap<TobiiGazeFocusableID, TWeakObjectPtr<UPrimitiveComponent>> IDToPrimitiveMap;
	TMap<TWeakObjectPtr<UPrimitiveComponent>, TobiiGazeFocusableID> PrimitiveToIDMap;
	TobiiGazeFocusableID CurrentID;
};

#endif //TOBII_EYETRACKING_ACTIVE
