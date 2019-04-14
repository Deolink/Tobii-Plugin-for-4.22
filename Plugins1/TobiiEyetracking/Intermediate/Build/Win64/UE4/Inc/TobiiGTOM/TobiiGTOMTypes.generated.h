// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOBIIGTOM_TobiiGTOMTypes_generated_h
#error "TobiiGTOMTypes.generated.h already included, missing '#pragma once' in TobiiGTOMTypes.h"
#endif
#define TOBIIGTOM_TobiiGTOMTypes_generated_h

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics; \
	TOBIIGTOM_API static class UScriptStruct* StaticStruct();


template<> TOBIIGTOM_API UScriptStruct* StaticStruct<struct FTobiiGazeFocusData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMTypes_h


#define FOREACH_ENUM_ETOBIICLEANUIMODE(op) \
	op(ETobiiCleanUIMode::Disabled) \
	op(ETobiiCleanUIMode::Normal) \
	op(ETobiiCleanUIMode::FocusExclusive) 

enum class ETobiiCleanUIMode : uint8;
template<> TOBIIGTOM_API UEnum* StaticEnum<ETobiiCleanUIMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
