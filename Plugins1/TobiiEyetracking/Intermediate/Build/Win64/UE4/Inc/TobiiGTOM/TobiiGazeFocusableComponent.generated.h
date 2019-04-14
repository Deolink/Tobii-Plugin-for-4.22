// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTobiiGazeFocusManagerComponent;
class UPrimitiveComponent;
class UTobiiGazeFocusableWidget;
#ifdef TOBIIGTOM_TobiiGazeFocusableComponent_generated_h
#error "TobiiGazeFocusableComponent.generated.h already included, missing '#pragma once' in TobiiGazeFocusableComponent.h"
#endif
#define TOBIIGTOM_TobiiGazeFocusableComponent_generated_h

#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_23_DELEGATE \
struct _Script_TobiiGTOM_eventGazeFocusLostSignature_Parms \
{ \
	UTobiiGazeFocusManagerComponent* FocusManager; \
	UPrimitiveComponent* FocusedComponent; \
}; \
static inline void FGazeFocusLostSignature_DelegateWrapper(const FMulticastScriptDelegate& GazeFocusLostSignature, UTobiiGazeFocusManagerComponent* FocusManager, UPrimitiveComponent* FocusedComponent) \
{ \
	_Script_TobiiGTOM_eventGazeFocusLostSignature_Parms Parms; \
	Parms.FocusManager=FocusManager; \
	Parms.FocusedComponent=FocusedComponent; \
	GazeFocusLostSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_22_DELEGATE \
struct _Script_TobiiGTOM_eventGazeFocusReceivedSignature_Parms \
{ \
	UTobiiGazeFocusManagerComponent* FocusManager; \
	UPrimitiveComponent* FocusedComponent; \
}; \
static inline void FGazeFocusReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& GazeFocusReceivedSignature, UTobiiGazeFocusManagerComponent* FocusManager, UPrimitiveComponent* FocusedComponent) \
{ \
	_Script_TobiiGTOM_eventGazeFocusReceivedSignature_Parms Parms; \
	Parms.FocusManager=FocusManager; \
	Parms.FocusedComponent=FocusedComponent; \
	GazeFocusReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefresh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Refresh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGazeFocusedWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTobiiGazeFocusableWidget**)Z_Param__Result=P_THIS->GetGazeFocusedWidget(); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefresh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Refresh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGazeFocusedWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTobiiGazeFocusableWidget**)Z_Param__Result=P_THIS->GetGazeFocusedWidget(); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_EVENT_PARMS \
	struct TobiiGazeFocusableComponent_eventOnLostGazeFocus_Parms \
	{ \
		UTobiiGazeFocusManagerComponent* FocusManager; \
		UPrimitiveComponent* FocusedComponent; \
	}; \
	struct TobiiGazeFocusableComponent_eventOnReceivedGazeFocus_Parms \
	{ \
		UTobiiGazeFocusManagerComponent* FocusManager; \
		UPrimitiveComponent* FocusedComponent; \
	};


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_CALLBACK_WRAPPERS
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusableComponent(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusableComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusableComponent(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusableComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusableComponent(UTobiiGazeFocusableComponent&&); \
	NO_API UTobiiGazeFocusableComponent(const UTobiiGazeFocusableComponent&); \
public:


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusableComponent(UTobiiGazeFocusableComponent&&); \
	NO_API UTobiiGazeFocusableComponent(const UTobiiGazeFocusableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTobiiGazeFocusableComponent)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_PRIVATE_PROPERTY_OFFSET
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_34_PROLOG \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_EVENT_PARMS


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_RPC_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_CALLBACK_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_INCLASS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_CALLBACK_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_INCLASS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
