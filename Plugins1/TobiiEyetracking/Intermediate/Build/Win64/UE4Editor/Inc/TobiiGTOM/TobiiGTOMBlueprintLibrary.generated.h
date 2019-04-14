// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FVector;
class UWidgetComponent;
class UPrimitiveComponent;
#ifdef TOBIIGTOM_TobiiGTOMBlueprintLibrary_generated_h
#error "TobiiGTOMBlueprintLibrary.generated.h already included, missing '#pragma once' in TobiiGTOMBlueprintLibrary.h"
#endif
#define TOBIIGTOM_TobiiGTOMBlueprintLibrary_generated_h

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestRectEllipseIntersection) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleCenter); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleRightAxis); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleUpAxis); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleExtents); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_EllipseCenter); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_EllipseRadii); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_EllipseRotationDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TestRectEllipseIntersection(Z_Param_Out_RectangleCenter,Z_Param_Out_RectangleRightAxis,Z_Param_Out_RectangleUpAxis,Z_Param_Out_RectangleExtents,Z_Param_Out_EllipseCenter,Z_Param_Out_EllipseRadii,Z_Param_Out_EllipseRotationDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestConeSphereIntersection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeApex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeAngleDeg); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SphereCenter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TestConeSphereIntersection(Z_Param_Out_ConeApex,Z_Param_Out_ConeDirection,Z_Param_ConeAngleDeg,Z_Param_Out_SphereCenter,Z_Param_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformWidgetLocalPointToWorld) \
	{ \
		P_GET_OBJECT(UWidgetComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalWidgetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TransformWidgetLocalPointToWorld(Z_Param_Component,Z_Param_Out_LocalWidgetLocation,Z_Param_Out_OutWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLargestInscribedAlignedRect) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CircleSegmentAngleRad); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CircleRadius); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LargestInscribedRectSize); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DistanceToCenter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::FindLargestInscribedAlignedRect(Z_Param_CircleSegmentAngleRad,Z_Param_CircleRadius,Z_Param_Out_LargestInscribedRectSize,Z_Param_Out_DistanceToCenter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPrimitiveComponentGazeFocusable) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::IsPrimitiveComponentGazeFocusable(Z_Param_PrimitiveComponent); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestRectEllipseIntersection) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleCenter); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleRightAxis); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleUpAxis); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleExtents); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_EllipseCenter); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_EllipseRadii); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_EllipseRotationDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TestRectEllipseIntersection(Z_Param_Out_RectangleCenter,Z_Param_Out_RectangleRightAxis,Z_Param_Out_RectangleUpAxis,Z_Param_Out_RectangleExtents,Z_Param_Out_EllipseCenter,Z_Param_Out_EllipseRadii,Z_Param_Out_EllipseRotationDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestConeSphereIntersection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeApex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeAngleDeg); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SphereCenter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TestConeSphereIntersection(Z_Param_Out_ConeApex,Z_Param_Out_ConeDirection,Z_Param_ConeAngleDeg,Z_Param_Out_SphereCenter,Z_Param_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformWidgetLocalPointToWorld) \
	{ \
		P_GET_OBJECT(UWidgetComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalWidgetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TransformWidgetLocalPointToWorld(Z_Param_Component,Z_Param_Out_LocalWidgetLocation,Z_Param_Out_OutWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLargestInscribedAlignedRect) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CircleSegmentAngleRad); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CircleRadius); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LargestInscribedRectSize); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DistanceToCenter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::FindLargestInscribedAlignedRect(Z_Param_CircleSegmentAngleRad,Z_Param_CircleRadius,Z_Param_Out_LargestInscribedRectSize,Z_Param_Out_DistanceToCenter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPrimitiveComponentGazeFocusable) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::IsPrimitiveComponentGazeFocusable(Z_Param_PrimitiveComponent); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiGTOMBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiGTOMBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGTOMBlueprintLibrary)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiGTOMBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiGTOMBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGTOMBlueprintLibrary)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGTOMBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGTOMBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGTOMBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGTOMBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGTOMBlueprintLibrary(UTobiiGTOMBlueprintLibrary&&); \
	NO_API UTobiiGTOMBlueprintLibrary(const UTobiiGTOMBlueprintLibrary&); \
public:


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGTOMBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGTOMBlueprintLibrary(UTobiiGTOMBlueprintLibrary&&); \
	NO_API UTobiiGTOMBlueprintLibrary(const UTobiiGTOMBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGTOMBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGTOMBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGTOMBlueprintLibrary)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_22_PROLOG
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_RPC_WRAPPERS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_INCLASS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_INCLASS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiGTOMBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIGTOM_API UClass* StaticClass<class UTobiiGTOMBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
