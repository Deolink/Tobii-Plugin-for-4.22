// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOBIIINTERACTIONS_TobiiAimAtGazeComponent_generated_h
#error "TobiiAimAtGazeComponent.generated.h already included, missing '#pragma once' in TobiiAimAtGazeComponent.h"
#endif
#define TOBIIINTERACTIONS_TobiiAimAtGazeComponent_generated_h

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execContinuousAimAtGaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ContinuousAimAtGaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAimAtGaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AimAtGaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAimAtGazeAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AimAtGazeAvailable(); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execContinuousAimAtGaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ContinuousAimAtGaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAimAtGaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AimAtGaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAimAtGazeAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AimAtGazeAvailable(); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiAimAtGazeComponent(); \
	friend struct Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiAimAtGazeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiAimAtGazeComponent)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiAimAtGazeComponent(); \
	friend struct Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiAimAtGazeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiAimAtGazeComponent)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiAimAtGazeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiAimAtGazeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiAimAtGazeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiAimAtGazeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiAimAtGazeComponent(UTobiiAimAtGazeComponent&&); \
	NO_API UTobiiAimAtGazeComponent(const UTobiiAimAtGazeComponent&); \
public:


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiAimAtGazeComponent(UTobiiAimAtGazeComponent&&); \
	NO_API UTobiiAimAtGazeComponent(const UTobiiAimAtGazeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiAimAtGazeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiAimAtGazeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTobiiAimAtGazeComponent)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_15_PROLOG
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_RPC_WRAPPERS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_INCLASS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_INCLASS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIINTERACTIONS_API UClass* StaticClass<class UTobiiAimAtGazeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiAimAtGazeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
