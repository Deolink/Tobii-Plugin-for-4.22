// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FTobiiGazeFocusData;
#ifdef TOBIIGTOM_TobiiGazeFocusManagerComponent_generated_h
#error "TobiiGazeFocusManagerComponent.generated.h already included, missing '#pragma once' in TobiiGazeFocusManagerComponent.h"
#endif
#define TOBIIGTOM_TobiiGazeFocusManagerComponent_generated_h

#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_21_DELEGATE \
struct _Script_TobiiGTOM_eventFocusableLostGazeFocusSignature_Parms \
{ \
	UPrimitiveComponent* GazeComponent; \
}; \
static inline void FFocusableLostGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& FocusableLostGazeFocusSignature, UPrimitiveComponent* GazeComponent) \
{ \
	_Script_TobiiGTOM_eventFocusableLostGazeFocusSignature_Parms Parms; \
	Parms.GazeComponent=GazeComponent; \
	FocusableLostGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_20_DELEGATE \
struct _Script_TobiiGTOM_eventFocusableGainedGazeFocusSignature_Parms \
{ \
	UPrimitiveComponent* GazeComponent; \
}; \
static inline void FFocusableGainedGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& FocusableGainedGazeFocusSignature, UPrimitiveComponent* GazeComponent) \
{ \
	_Script_TobiiGTOM_eventFocusableGainedGazeFocusSignature_Parms Parms; \
	Parms.GazeComponent=GazeComponent; \
	FocusableGainedGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllFocusData) \
	{ \
		P_GET_TARRAY_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocusData) \
	{ \
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllFocusData) \
	{ \
		P_GET_TARRAY_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocusData) \
	{ \
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusManagerComponent(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusManagerComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusManagerComponent(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusManagerComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusManagerComponent(UTobiiGazeFocusManagerComponent&&); \
	NO_API UTobiiGazeFocusManagerComponent(const UTobiiGazeFocusManagerComponent&); \
public:


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusManagerComponent(UTobiiGazeFocusManagerComponent&&); \
	NO_API UTobiiGazeFocusManagerComponent(const UTobiiGazeFocusManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTobiiGazeFocusManagerComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_PRIVATE_PROPERTY_OFFSET
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_23_PROLOG
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_RPC_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_INCLASS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_INCLASS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
