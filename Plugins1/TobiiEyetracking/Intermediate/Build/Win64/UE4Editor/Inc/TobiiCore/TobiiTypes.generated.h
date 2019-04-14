// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOBIICORE_TobiiTypes_generated_h
#error "TobiiTypes.generated.h already included, missing '#pragma once' in TobiiTypes.h"
#endif
#define TOBIICORE_TobiiTypes_generated_h

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiTypes_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics; \
	TOBIICORE_API static class UScriptStruct* StaticStruct();


template<> TOBIICORE_API UScriptStruct* StaticStruct<struct FTobiiDesktopTrackBox>();

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiTypes_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics; \
	TOBIICORE_API static class UScriptStruct* StaticStruct();


template<> TOBIICORE_API UScriptStruct* StaticStruct<struct FTobiiDisplayInfo>();

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics; \
	TOBIICORE_API static class UScriptStruct* StaticStruct();


template<> TOBIICORE_API UScriptStruct* StaticStruct<struct FTobiiHeadPoseData>();

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiGazeData_Statics; \
	TOBIICORE_API static class UScriptStruct* StaticStruct();


template<> TOBIICORE_API UScriptStruct* StaticStruct<struct FTobiiGazeData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiTypes_h


#define FOREACH_ENUM_ETOBIIGAZETRACKERCAPABILITY(op) \
	op(ETobiiGazeTrackerCapability::CombinedGazeData) \
	op(ETobiiGazeTrackerCapability::LeftGazeData) \
	op(ETobiiGazeTrackerCapability::RightGazeData) 

enum class ETobiiGazeTrackerCapability : uint8;
template<> TOBIICORE_API UEnum* StaticEnum<ETobiiGazeTrackerCapability>();

#define FOREACH_ENUM_ETOBIIGAZETRACKERSTATUS(op) \
	op(ETobiiGazeTrackerStatus::NotConnected) \
	op(ETobiiGazeTrackerStatus::NotConfigured) \
	op(ETobiiGazeTrackerStatus::Disabled) \
	op(ETobiiGazeTrackerStatus::UserNotPresent) \
	op(ETobiiGazeTrackerStatus::UserPresent) 

enum class ETobiiGazeTrackerStatus : uint8;
template<> TOBIICORE_API UEnum* StaticEnum<ETobiiGazeTrackerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
