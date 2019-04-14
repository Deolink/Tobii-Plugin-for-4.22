// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UWidget;
class UTobiiRadialMenuSlot;
struct FColor;
#ifdef TOBIIGTOM_TobiiRadialMenuWidget_generated_h
#error "TobiiRadialMenuWidget.generated.h already included, missing '#pragma once' in TobiiRadialMenuWidget.h"
#endif
#define TOBIIGTOM_TobiiRadialMenuWidget_generated_h

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlpha) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAlpha(Z_Param_InAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScale(Z_Param_InScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOffset(Z_Param_InOffset); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlpha) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAlpha(Z_Param_InAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScale(Z_Param_InScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOffset(Z_Param_InOffset); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiRadialMenuSlot(); \
	friend struct Z_Construct_UClass_UTobiiRadialMenuSlot_Statics; \
public: \
	DECLARE_CLASS(UTobiiRadialMenuSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiRadialMenuSlot)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiRadialMenuSlot(); \
	friend struct Z_Construct_UClass_UTobiiRadialMenuSlot_Statics; \
public: \
	DECLARE_CLASS(UTobiiRadialMenuSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiRadialMenuSlot)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiRadialMenuSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiRadialMenuSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiRadialMenuSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiRadialMenuSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiRadialMenuSlot(UTobiiRadialMenuSlot&&); \
	NO_API UTobiiRadialMenuSlot(const UTobiiRadialMenuSlot&); \
public:


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiRadialMenuSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiRadialMenuSlot(UTobiiRadialMenuSlot&&); \
	NO_API UTobiiRadialMenuSlot(const UTobiiRadialMenuSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiRadialMenuSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiRadialMenuSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiRadialMenuSlot)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_PRIVATE_PROPERTY_OFFSET
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_19_PROLOG
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_RPC_WRAPPERS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_INCLASS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_INCLASS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiRadialMenuSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIGTOM_API UClass* StaticClass<class UTobiiRadialMenuSlot>();

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRadialMenuChild) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTobiiRadialMenuSlot**)Z_Param__Result=P_THIS->AddRadialMenuChild(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVertexCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewVertexCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVertexCount(Z_Param_NewVertexCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRadiusPx) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadiusPx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadiusPx(Z_Param_NewRadiusPx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDisplacementDeg) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAngularDisplacementDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDisplacementDeg(Z_Param_NewAngularDisplacementDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSegmentSeparationPx) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSegmentSeparationPx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSegmentSeparationPx(Z_Param_NewSegmentSeparationPx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBorderThicknessPx) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBorderThicknessPx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBorderThicknessPx(Z_Param_NewBorderThicknessPx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPanelColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewPanelColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPanelColor(Z_Param_NewPanelColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBorderColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewBorderColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBorderColor(Z_Param_NewBorderColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseHardBorder) \
	{ \
		P_GET_UBOOL(Z_Param_bNewUseHardBorder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseHardBorder(Z_Param_bNewUseHardBorder); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRadialMenuChild) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTobiiRadialMenuSlot**)Z_Param__Result=P_THIS->AddRadialMenuChild(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVertexCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewVertexCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVertexCount(Z_Param_NewVertexCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRadiusPx) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadiusPx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadiusPx(Z_Param_NewRadiusPx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDisplacementDeg) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAngularDisplacementDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDisplacementDeg(Z_Param_NewAngularDisplacementDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSegmentSeparationPx) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSegmentSeparationPx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSegmentSeparationPx(Z_Param_NewSegmentSeparationPx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBorderThicknessPx) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBorderThicknessPx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBorderThicknessPx(Z_Param_NewBorderThicknessPx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPanelColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewPanelColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPanelColor(Z_Param_NewPanelColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBorderColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewBorderColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBorderColor(Z_Param_NewBorderColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseHardBorder) \
	{ \
		P_GET_UBOOL(Z_Param_bNewUseHardBorder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseHardBorder(Z_Param_bNewUseHardBorder); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiRadialMenuWidget(); \
	friend struct Z_Construct_UClass_UTobiiRadialMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UTobiiRadialMenuWidget, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiRadialMenuWidget)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiRadialMenuWidget(); \
	friend struct Z_Construct_UClass_UTobiiRadialMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UTobiiRadialMenuWidget, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiRadialMenuWidget)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiRadialMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiRadialMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiRadialMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiRadialMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiRadialMenuWidget(UTobiiRadialMenuWidget&&); \
	NO_API UTobiiRadialMenuWidget(const UTobiiRadialMenuWidget&); \
public:


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiRadialMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiRadialMenuWidget(UTobiiRadialMenuWidget&&); \
	NO_API UTobiiRadialMenuWidget(const UTobiiRadialMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiRadialMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiRadialMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiRadialMenuWidget)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_PRIVATE_PROPERTY_OFFSET
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_77_PROLOG
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_RPC_WRAPPERS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_INCLASS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_INCLASS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiRadialMenuWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIGTOM_API UClass* StaticClass<class UTobiiRadialMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiRadialMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
