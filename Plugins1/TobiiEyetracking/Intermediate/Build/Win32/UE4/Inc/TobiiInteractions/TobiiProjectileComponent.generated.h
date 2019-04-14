// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef TOBIIINTERACTIONS_TobiiProjectileComponent_generated_h
#error "TobiiProjectileComponent.generated.h already included, missing '#pragma once' in TobiiProjectileComponent.h"
#endif
#define TOBIIINTERACTIONS_TobiiProjectileComponent_generated_h

#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopHoming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopHoming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartHoming) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewHomingTargetComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartHoming(Z_Param_NewHomingTargetComponent); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopHoming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopHoming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartHoming) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewHomingTargetComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartHoming(Z_Param_NewHomingTargetComponent); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiProjectileComponent(); \
	friend struct Z_Construct_UClass_UTobiiProjectileComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiProjectileComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiProjectileComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiProjectileComponent(); \
	friend struct Z_Construct_UClass_UTobiiProjectileComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiProjectileComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiProjectileComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiProjectileComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiProjectileComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiProjectileComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiProjectileComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiProjectileComponent(UTobiiProjectileComponent&&); \
	NO_API UTobiiProjectileComponent(const UTobiiProjectileComponent&); \
public:


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiProjectileComponent(UTobiiProjectileComponent&&); \
	NO_API UTobiiProjectileComponent(const UTobiiProjectileComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiProjectileComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiProjectileComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTobiiProjectileComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_PRIVATE_PROPERTY_OFFSET
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_30_PROLOG
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_RPC_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_INCLASS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_INCLASS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiProjectileComponent_h


#define FOREACH_ENUM_ETOBIIPROJECTILEGUIDANCESYSTEM(op) \
	op(ETobiiProjectileGuidanceSystem::Simple) \
	op(ETobiiProjectileGuidanceSystem::Prediction) \
	op(ETobiiProjectileGuidanceSystem::ComplexPrediction) 
#define FOREACH_ENUM_ETOBIIPROJECTILEHOMINGBEHAVIOR(op) \
	op(ETobiiProjectileHomingBehavior::Acceleration) \
	op(ETobiiProjectileHomingBehavior::Steering) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
