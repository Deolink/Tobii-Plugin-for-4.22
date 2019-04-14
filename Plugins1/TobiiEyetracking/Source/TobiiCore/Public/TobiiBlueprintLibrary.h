/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "TobiiTypes.h"

#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"

#include "TobiiBlueprintLibrary.generated.h"

/**
  * Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP.
  */
UCLASS()
class TOBIICORE_API UTobiiBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	/************************************************************************/
	/* Common functions                                                     */
	/************************************************************************/
public:

	/**
	  * This is just a helper function to set the eyetracking enabled CVar for blueprint convenience.
	  * Set eyetracking disabled if you don't need tracking and don't want to pay the CPU cost in some parts of your program.
	  */
	UFUNCTION(BlueprintCallable, Category = "Tobii Eyetracking")
	static void SetEyetrackingEnabled(bool bEyetrackingEnabled);

	UFUNCTION(BlueprintPure, Category = "Tobii Eyetracking")
	static bool GetEyetrackingEnabled();

	/**
	  * This is just a helper function to set the eyetracking frozen CVar for blueprint convenience.
	  * Freezing the eyetracking can be very useful for debugging as well as when trying to show someone what effect eyetracking has.
	  */
	UFUNCTION(BlueprintCallable, Category = "Tobii Eyetracking")
	static void SetEyetrackingFrozen(bool bEyetrackingFrozen);

	UFUNCTION(BlueprintPure, Category = "Tobii Eyetracking")
	static bool GetEyetrackingFrozen();

	/**
	  * This is the main method to get basic eye tracking data. You should not be using this though for most things. Use the focus system instead if you can.
	  */
	UFUNCTION(BlueprintPure, Category = "Tobii Eyetracking")
	static FTobiiGazeData GetCombinedGazeData();
	UFUNCTION(BlueprintPure, Category = "Tobii Eyetracking")
	static FTobiiGazeData GetLeftGazeData();
	UFUNCTION(BlueprintPure, Category = "Tobii Eyetracking")
	static FTobiiGazeData GetRightGazeData();
	UFUNCTION(BlueprintPure, Category = "Tobii Eyetracking")
	static FHitResult GetCombinedWorldGazeHitData();

	/**
	  * This will indicate the readiness of the gaze tracking subsystem. For most applications this will also indicate head tracking readiness.
	  */
	UFUNCTION(BlueprintPure, Category = "Tobii Eyetracking")
	static ETobiiGazeTrackerStatus GetGazeTrackerStatus();
	
	/**
	  * Gets information about the display device and window used for the application.
	  */
	UFUNCTION(BlueprintPure, Category = "Tobii Eyetracking")
	static FTobiiDisplayInfo GetDisplayInformation();


	/************************************************************************/
	/* Desktop functions                                                    */
	/************************************************************************/
public:
	/**
	  * This is the main method to get basic head pose data.
	  */
	UFUNCTION(BlueprintPure, Category = "Tobii Desktop Eyetracking")
	static const FTobiiHeadPoseData& GetHeadPoseData();
	/**
	  * Track box information.
	  */
	UFUNCTION(BlueprintPure, Category = "Tobii Desktop Eyetracking")
	static const FTobiiDesktopTrackBox& GetDesktopTrackBox();

	/************************************************************************/
	/* Math Util functions													*/
	/************************************************************************/
public:
	/**
	  * Use this function if you want to project slate information to viewport space. Includes DPI adjustments
	  */
	UFUNCTION(BlueprintPure, Category = "Tobii Math Utils")
	static bool VirtualDesktopPixelToViewportCoordinateUNorm(const FVector2D& VirtualDesktopPixel, FVector2D& OutViewportCoordinateUNorm);

	UFUNCTION(BlueprintPure, Category = "Tobii Math Utils")
	static bool ViewportCoordinateUNormToVirtualDesktopPixel(const FVector2D& ViewportCoordinateUNorm, FVector2D& OutVirtualDesktopPixel);

	UFUNCTION(BlueprintPure, Category = "Tobii Math Utils")
	static bool ConvertScreenPixelCoordToCmCoord(const FVector2D& InCoordinatePx, FVector2D& OutCoordinateCm);

	UFUNCTION(BlueprintPure, Category = "Tobii Math Utils")
	static bool ConvertScreenCmCoordToPixelCoord(const FVector2D& InCoordinateCm, FVector2D& OutCoordinatePx);

	/**
	  * This function lets you move from world space to HMD local space. This can be useful if you want to get a gaze direction in HMD space for example.
	  */
	UFUNCTION(BlueprintPure, Category = "Tobii Math Utils")
	static FVector WorldSpaceDirectionToHMDSpaceDirection(APlayerController* PlayerController, const FVector& WorldSpaceDirection);

	/************************************************************************/
	/* Settings functions													*/
	/************************************************************************/
public:
	//Use these functions to get and set CVars in runtime.
	UFUNCTION(BlueprintPure, Category = "Tobii Settings")
	static int32 GetTobiiInt(FString CVarName);
	UFUNCTION(BlueprintCallable, Category = "Tobii Settings")
	static void SetTobiiInt(FString CVarName, const int32 NewValue);
	UFUNCTION(BlueprintPure, Category = "Tobii Settings")
	static float GetTobiiFloat(FString CVarName);
	UFUNCTION(BlueprintCallable, Category = "Tobii Settings")
	static void SetTobiiFloat(FString CVarName, const float NewValue);

	//If you are persisting your custom CVar values, you should call this function when you start your application.
	UFUNCTION(BlueprintCallable, Category = "Tobii Settings")
	static void LoadTobiiSettings();
	//If you want to persist a CVar to .ini, use this function.
	UFUNCTION(BlueprintCallable, Category = "Tobii Settings")
	static void SaveTobiiSetting(FString CVarSettingToSave);

	/************************************************************************/
	/* Util functions														*/
	/************************************************************************/
public:
	/**
	* Tests if a given player controller is XR enabled
	*/
	UFUNCTION(BlueprintPure, Category = "Tobii XR Utils")
	static bool IsXRPlayerController(const APlayerController* PlayerController);
};
