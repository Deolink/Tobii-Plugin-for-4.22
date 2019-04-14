// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTobiiGazeFocusableWidget;
struct FDateTime;
class UWidget;
enum class ETobiiCleanUIMode : uint8;
#ifdef TOBIIGTOM_TobiiGazeFocusableWidget_generated_h
#error "TobiiGazeFocusableWidget.generated.h already included, missing '#pragma once' in TobiiGazeFocusableWidget.h"
#endif
#define TOBIIGTOM_TobiiGazeFocusableWidget_generated_h

#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_23_DELEGATE \
struct _Script_TobiiGTOM_eventWidgetHoverSignature_Parms \
{ \
	UTobiiGazeFocusableWidget* FocusedWidget; \
}; \
static inline void FWidgetHoverSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetHoverSignature, UTobiiGazeFocusableWidget* FocusedWidget) \
{ \
	_Script_TobiiGTOM_eventWidgetHoverSignature_Parms Parms; \
	Parms.FocusedWidget=FocusedWidget; \
	WidgetHoverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_22_DELEGATE \
struct _Script_TobiiGTOM_eventWidgetGazeFocusSignature_Parms \
{ \
	UTobiiGazeFocusableWidget* FocusedWidget; \
}; \
static inline void FWidgetGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetGazeFocusSignature, UTobiiGazeFocusableWidget* FocusedWidget) \
{ \
	_Script_TobiiGTOM_eventWidgetGazeFocusSignature_Parms Parms; \
	Parms.FocusedWidget=FocusedWidget; \
	WidgetGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSuppressCleanUIUntil) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UtcTimeToSuppressUntil); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuppressCleanUIUntil(Z_Param_Out_UtcTimeToSuppressUntil); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuppressCleanUIFor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SecondsForCleanUIToBeSuppressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuppressCleanUIFor(Z_Param_SecondsForCleanUIToBeSuppressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTriggerOnMouseOver) \
	{ \
		P_GET_UBOOL(Z_Param_bNewTriggerOnMouseOver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTriggerOnMouseOver(Z_Param_bNewTriggerOnMouseOver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFastHitTesting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewFastHitTesting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFastHitTesting(Z_Param_bNewFastHitTesting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIMaxAlphaOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCleanUIMaxAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIMaxAlphaOverride(Z_Param_InCleanUIMaxAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIMinAlphaOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCleanUIMinAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIMinAlphaOverride(Z_Param_InCleanUIMinAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIFadeOutTimeOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCleanUIFadeOutTimeSecs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIFadeOutTimeOverride(Z_Param_InCleanUIFadeOutTimeSecs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIFadeInTimeOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCleanUIFadeInTimeSecs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIFadeInTimeOverride(Z_Param_InCleanUIFadeInTimeSecs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveChildWidgetBoundsToIgnore) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_WidgetToStopIgnoringBoundsOf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveChildWidgetBoundsToIgnore(Z_Param_WidgetToStopIgnoringBoundsOf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChildWidgetBoundsToIgnore) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_WidgetToIgnoreBoundsOf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddChildWidgetBoundsToIgnore(Z_Param_WidgetToIgnoreBoundsOf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIMode) \
	{ \
		P_GET_ENUM(ETobiiCleanUIMode,Z_Param_InCleanUIMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIMode(ETobiiCleanUIMode(Z_Param_InCleanUIMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGazeFocusableWidgetToPollHitsFrom) \
	{ \
		P_GET_OBJECT(UTobiiGazeFocusableWidget,Z_Param_GazeFocusableWidgetToStopPolling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGazeFocusableWidgetToPollHitsFrom(Z_Param_GazeFocusableWidgetToStopPolling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGazeFocusableWidgetToPollHitsFrom) \
	{ \
		P_GET_OBJECT(UTobiiGazeFocusableWidget,Z_Param_GazeFocusableWidgetToPoll); \
		P_GET_UBOOL(Z_Param_PollGazeHits); \
		P_GET_UBOOL(Z_Param_PollMouseHits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGazeFocusableWidgetToPollHitsFrom(Z_Param_GazeFocusableWidgetToPoll,Z_Param_PollGazeHits,Z_Param_PollMouseHits); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSuppressCleanUIUntil) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UtcTimeToSuppressUntil); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuppressCleanUIUntil(Z_Param_Out_UtcTimeToSuppressUntil); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuppressCleanUIFor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SecondsForCleanUIToBeSuppressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuppressCleanUIFor(Z_Param_SecondsForCleanUIToBeSuppressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTriggerOnMouseOver) \
	{ \
		P_GET_UBOOL(Z_Param_bNewTriggerOnMouseOver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTriggerOnMouseOver(Z_Param_bNewTriggerOnMouseOver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFastHitTesting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewFastHitTesting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFastHitTesting(Z_Param_bNewFastHitTesting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIMaxAlphaOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCleanUIMaxAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIMaxAlphaOverride(Z_Param_InCleanUIMaxAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIMinAlphaOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCleanUIMinAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIMinAlphaOverride(Z_Param_InCleanUIMinAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIFadeOutTimeOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCleanUIFadeOutTimeSecs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIFadeOutTimeOverride(Z_Param_InCleanUIFadeOutTimeSecs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIFadeInTimeOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCleanUIFadeInTimeSecs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIFadeInTimeOverride(Z_Param_InCleanUIFadeInTimeSecs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveChildWidgetBoundsToIgnore) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_WidgetToStopIgnoringBoundsOf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveChildWidgetBoundsToIgnore(Z_Param_WidgetToStopIgnoringBoundsOf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChildWidgetBoundsToIgnore) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_WidgetToIgnoreBoundsOf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddChildWidgetBoundsToIgnore(Z_Param_WidgetToIgnoreBoundsOf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCleanUIMode) \
	{ \
		P_GET_ENUM(ETobiiCleanUIMode,Z_Param_InCleanUIMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCleanUIMode(ETobiiCleanUIMode(Z_Param_InCleanUIMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGazeFocusableWidgetToPollHitsFrom) \
	{ \
		P_GET_OBJECT(UTobiiGazeFocusableWidget,Z_Param_GazeFocusableWidgetToStopPolling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGazeFocusableWidgetToPollHitsFrom(Z_Param_GazeFocusableWidgetToStopPolling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGazeFocusableWidgetToPollHitsFrom) \
	{ \
		P_GET_OBJECT(UTobiiGazeFocusableWidget,Z_Param_GazeFocusableWidgetToPoll); \
		P_GET_UBOOL(Z_Param_PollGazeHits); \
		P_GET_UBOOL(Z_Param_PollMouseHits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGazeFocusableWidgetToPollHitsFrom(Z_Param_GazeFocusableWidgetToPoll,Z_Param_PollGazeHits,Z_Param_PollMouseHits); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_EVENT_PARMS
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_CALLBACK_WRAPPERS
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusableWidget(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusableWidget_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusableWidget, USizeBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusableWidget)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusableWidget(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusableWidget_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusableWidget, USizeBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusableWidget)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusableWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusableWidget(UTobiiGazeFocusableWidget&&); \
	NO_API UTobiiGazeFocusableWidget(const UTobiiGazeFocusableWidget&); \
public:


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusableWidget(UTobiiGazeFocusableWidget&&); \
	NO_API UTobiiGazeFocusableWidget(const UTobiiGazeFocusableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusableWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusableWidget)


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_PRIVATE_PROPERTY_OFFSET
#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_38_PROLOG \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_EVENT_PARMS


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_RPC_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_CALLBACK_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_INCLASS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_CALLBACK_WRAPPERS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_INCLASS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiGazeFocusableWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__jenkins_UE4_Stage_4_21_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
