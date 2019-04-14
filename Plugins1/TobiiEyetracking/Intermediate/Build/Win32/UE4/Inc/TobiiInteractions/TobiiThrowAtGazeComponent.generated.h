// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class ETobiiThrowAtGazeResult : uint8;
#ifdef TOBIIINTERACTIONS_TobiiThrowAtGazeComponent_generated_h
#error "TobiiThrowAtGazeComponent.generated.h already included, missing '#pragma once' in TobiiThrowAtGazeComponent.h"
#endif
#define TOBIIINTERACTIONS_TobiiThrowAtGazeComponent_generated_h

#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateThrowArcComplex) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetAcceleration); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutThrowVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowArcComplex(Z_Param_Out_ThrowOrigin,Z_Param_Out_TargetLocation,Z_Param_Out_TargetVelocity,Z_Param_Out_TargetAcceleration,Z_Param_Out_OutThrowVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateThrowAtGazeVectorComplex) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutGazeThrowVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowAtGazeVectorComplex(Z_Param_Out_ThrowOrigin,Z_Param_Out_OutGazeThrowVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateThrowArcSimple) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetAcceleration); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutThrowVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowArcSimple(Z_Param_Out_ThrowOrigin,Z_Param_Out_TargetLocation,Z_Param_Out_TargetVelocity,Z_Param_Out_TargetAcceleration,Z_Param_Out_OutThrowVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateThrowAtGazeVectorSimple) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutGazeThrowVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowAtGazeVectorSimple(Z_Param_Out_ThrowOrigin,Z_Param_Out_OutGazeThrowVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCorrectThrow) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalThrowVector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrowAngleThresholdDeg); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrowSpeedThresholdCmPerSec); \
		P_GET_UBOOL(Z_Param_bUseSimple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->CorrectThrow(Z_Param_Out_ThrowOrigin,Z_Param_Out_OriginalThrowVector,Z_Param_ThrowAngleThresholdDeg,Z_Param_ThrowSpeedThresholdCmPerSec,Z_Param_bUseSimple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execThrowAtGazeAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ThrowAtGazeAvailable(); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateThrowArcComplex) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetAcceleration); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutThrowVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowArcComplex(Z_Param_Out_ThrowOrigin,Z_Param_Out_TargetLocation,Z_Param_Out_TargetVelocity,Z_Param_Out_TargetAcceleration,Z_Param_Out_OutThrowVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateThrowAtGazeVectorComplex) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutGazeThrowVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowAtGazeVectorComplex(Z_Param_Out_ThrowOrigin,Z_Param_Out_OutGazeThrowVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateThrowArcSimple) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetAcceleration); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutThrowVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowArcSimple(Z_Param_Out_ThrowOrigin,Z_Param_Out_TargetLocation,Z_Param_Out_TargetVelocity,Z_Param_Out_TargetAcceleration,Z_Param_Out_OutThrowVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateThrowAtGazeVectorSimple) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutGazeThrowVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowAtGazeVectorSimple(Z_Param_Out_ThrowOrigin,Z_Param_Out_OutGazeThrowVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCorrectThrow) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalThrowVector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrowAngleThresholdDeg); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrowSpeedThresholdCmPerSec); \
		P_GET_UBOOL(Z_Param_bUseSimple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->CorrectThrow(Z_Param_Out_ThrowOrigin,Z_Param_Out_OriginalThrowVector,Z_Param_ThrowAngleThresholdDeg,Z_Param_ThrowSpeedThresholdCmPerSec,Z_Param_bUseSimple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execThrowAtGazeAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ThrowAtGazeAvailable(); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiThrowAtGazeComponent(); \
	friend struct Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiThrowAtGazeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiThrowAtGazeComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiThrowAtGazeComponent(); \
	friend struct Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiThrowAtGazeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiThrowAtGazeComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiThrowAtGazeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiThrowAtGazeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiThrowAtGazeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiThrowAtGazeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiThrowAtGazeComponent(UTobiiThrowAtGazeComponent&&); \
	NO_API UTobiiThrowAtGazeComponent(const UTobiiThrowAtGazeComponent&); \
public:


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiThrowAtGazeComponent(UTobiiThrowAtGazeComponent&&); \
	NO_API UTobiiThrowAtGazeComponent(const UTobiiThrowAtGazeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiThrowAtGazeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiThrowAtGazeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTobiiThrowAtGazeComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_PRIVATE_PROPERTY_OFFSET
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_22_PROLOG
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_RPC_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_INCLASS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_INCLASS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
