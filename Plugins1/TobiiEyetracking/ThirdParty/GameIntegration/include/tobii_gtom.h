/******************************************************************************
* Copyright 2017 Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

typedef int TobiiGazeFocusableLayer;
typedef int TobiiGazeFocusableID;
#define TOBII_GAZE_FOCUSABLE_ID_NONE (-1)

struct TobiiGTOMGazeData
{
	float WorldGazeOrigin3D[3];
	float WorldGazeDirection3D[3];
	float WorldGazeConeAngleDegrees;
	long long TimeStampMicroSecs;
	bool bIsGazeDataValid;
	bool bIsStable;
};

struct TobiiUIElementData
{
	TobiiGazeFocusableID Id;
	float WorldCenter[3];
	float WorldTopLeft[3];
	bool IsScreenSpaceWidget;
};

struct TobiiUIData
{
	int NrElements;
	TobiiUIElementData* Elements;
};

struct TobiiGTOMLineTraceResponse
{
public:
	TobiiGazeFocusableID HitFocusable;
	float HitLocation3D[3];
	bool bWasSuccessful;
};

class ITobiiGameEngine
{
public:
	//Physics
	virtual float GetCameraNearClipDistance() = 0;
	virtual void GetCameraDirection(float& x, float& y, float& z) = 0;
	virtual void GetCameraLocation(float& x, float& y, float& z) = 0;
	virtual bool LineTrace(float startX, float startY, float startZ, float dirX, float dirY, float dirZ, TobiiGTOMLineTraceResponse& HitResponse) = 0;

	//Focusable
	virtual bool IsFocusableValid(TobiiGazeFocusableID id) = 0;
	virtual bool QueryFocusableMaximumDistance(TobiiGazeFocusableID id, float& outValue) = 0;
	virtual bool QueryFocusablePosition(TobiiGazeFocusableID id, float& x, float& y, float& z) = 0;

	//Utils
	virtual float RandRange(float min, float max) = 0;

	//Debug
	virtual void DrawDebugSphere(float worldX, float worldY, float worldZ, float size, float r, float g, float b) = 0;
};

class ITobiiGTOMEngine
{
public:
	//Returns how many focusables were actually added to the output array
	virtual int ProcessWorldSpaceSet(const TobiiGTOMGazeData& GazeData, const float DeltaTime, TobiiGazeFocusableID* OutGazeFocusData, const int MaxNrOfOutputEntries) = 0;

	//Returns the ID of the focused UI object
	virtual TobiiGazeFocusableID ProcessUISet(const TobiiUIData& UIData) = 0;

	//Debug :D
	virtual void SetDebugDraw(bool bDrawDebug) = 0;
};

extern "C"
{
	__declspec(dllexport) ITobiiGTOMEngine* __stdcall CreateGTOMEngine(ITobiiGameEngine& GameEngine);
	__declspec(dllexport) void __stdcall DestroyGTOMEngine(ITobiiGTOMEngine* EngineToDestroy);
}
