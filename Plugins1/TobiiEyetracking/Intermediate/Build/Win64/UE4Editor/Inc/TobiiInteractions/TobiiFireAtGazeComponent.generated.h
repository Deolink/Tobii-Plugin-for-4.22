// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOBIIINTERACTIONS_TobiiFireAtGazeComponent_generated_h
#error "TobiiFireAtGazeComponent.generated.h already included, missing '#pragma once' in TobiiFireAtGazeComponent.h"
#endif
#define TOBIIINTERACTIONS_TobiiFireAtGazeComponent_generated_h

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireAtGazeAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FireAtGazeAvailable(); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireAtGazeAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FireAtGazeAvailable(); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiFireAtGazeComponent(); \
	friend struct Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiFireAtGazeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiFireAtGazeComponent)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiFireAtGazeComponent(); \
	friend struct Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiFireAtGazeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiFireAtGazeComponent)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiFireAtGazeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiFireAtGazeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiFireAtGazeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiFireAtGazeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiFireAtGazeComponent(UTobiiFireAtGazeComponent&&); \
	NO_API UTobiiFireAtGazeComponent(const UTobiiFireAtGazeComponent&); \
public:


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiFireAtGazeComponent(UTobiiFireAtGazeComponent&&); \
	NO_API UTobiiFireAtGazeComponent(const UTobiiFireAtGazeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiFireAtGazeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiFireAtGazeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTobiiFireAtGazeComponent)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_PRIVATE_PROPERTY_OFFSET
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_22_PROLOG
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_RPC_WRAPPERS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_INCLASS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_INCLASS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIINTERACTIONS_API UClass* StaticClass<class UTobiiFireAtGazeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Desktop_TobiiFireAtGazeComponent_h


#define FOREACH_ENUM_ETOBIIFIREATGAZENOTARGETBEHAVIOR(op) \
	op(ETobiiFireAtGazeNoTargetBehavior::PointGunForward) \
	op(ETobiiFireAtGazeNoTargetBehavior::PointGunToGaze) 

enum class ETobiiFireAtGazeNoTargetBehavior : uint8;
template<> TOBIIINTERACTIONS_API UEnum* StaticEnum<ETobiiFireAtGazeNoTargetBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
