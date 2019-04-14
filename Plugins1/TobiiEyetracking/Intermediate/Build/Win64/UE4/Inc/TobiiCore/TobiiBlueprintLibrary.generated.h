// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FVector;
struct FVector2D;
struct FTobiiDesktopTrackBox;
struct FTobiiHeadPoseData;
struct FTobiiDisplayInfo;
enum class ETobiiGazeTrackerStatus : uint8;
struct FHitResult;
struct FTobiiGazeData;
#ifdef TOBIICORE_TobiiBlueprintLibrary_generated_h
#error "TobiiBlueprintLibrary.generated.h already included, missing '#pragma once' in TobiiBlueprintLibrary.h"
#endif
#define TOBIICORE_TobiiBlueprintLibrary_generated_h

#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsXRPlayerController) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::IsXRPlayerController(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveTobiiSetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarSettingToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SaveTobiiSetting(Z_Param_CVarSettingToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTobiiSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::LoadTobiiSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTobiiFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SetTobiiFloat(Z_Param_CVarName,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTobiiFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiFloat(Z_Param_CVarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTobiiInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SetTobiiInt(Z_Param_CVarName,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTobiiInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiInt(Z_Param_CVarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldSpaceDirectionToHMDSpaceDirection) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldSpaceDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTobiiBlueprintLibrary::WorldSpaceDirectionToHMDSpaceDirection(Z_Param_PlayerController,Z_Param_Out_WorldSpaceDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertScreenCmCoordToPixelCoord) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCoordinateCm); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCoordinatePx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ConvertScreenCmCoordToPixelCoord(Z_Param_Out_InCoordinateCm,Z_Param_Out_OutCoordinatePx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertScreenPixelCoordToCmCoord) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCoordinatePx); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCoordinateCm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ConvertScreenPixelCoordToCmCoord(Z_Param_Out_InCoordinatePx,Z_Param_Out_OutCoordinateCm); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewportCoordinateUNormToVirtualDesktopPixel) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportCoordinateUNorm); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutVirtualDesktopPixel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ViewportCoordinateUNormToVirtualDesktopPixel(Z_Param_Out_ViewportCoordinateUNorm,Z_Param_Out_OutVirtualDesktopPixel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVirtualDesktopPixelToViewportCoordinateUNorm) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VirtualDesktopPixel); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutViewportCoordinateUNorm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::VirtualDesktopPixelToViewportCoordinateUNorm(Z_Param_Out_VirtualDesktopPixel,Z_Param_Out_OutViewportCoordinateUNorm); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesktopTrackBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiDesktopTrackBox*)Z_Param__Result=UTobiiBlueprintLibrary::GetDesktopTrackBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadPoseData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiHeadPoseData*)Z_Param__Result=UTobiiBlueprintLibrary::GetHeadPoseData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisplayInformation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiDisplayInfo*)Z_Param__Result=UTobiiBlueprintLibrary::GetDisplayInformation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGazeTrackerStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiGazeTrackerStatus*)Z_Param__Result=UTobiiBlueprintLibrary::GetGazeTrackerStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCombinedWorldGazeHitData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=UTobiiBlueprintLibrary::GetCombinedWorldGazeHitData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightGazeData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetRightGazeData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeftGazeData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetLeftGazeData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCombinedGazeData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetCombinedGazeData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyetrackingFrozen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::GetEyetrackingFrozen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEyetrackingFrozen) \
	{ \
		P_GET_UBOOL(Z_Param_bEyetrackingFrozen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SetEyetrackingFrozen(Z_Param_bEyetrackingFrozen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyetrackingEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::GetEyetrackingEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEyetrackingEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEyetrackingEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SetEyetrackingEnabled(Z_Param_bEyetrackingEnabled); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsXRPlayerController) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::IsXRPlayerController(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveTobiiSetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarSettingToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SaveTobiiSetting(Z_Param_CVarSettingToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTobiiSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::LoadTobiiSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTobiiFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SetTobiiFloat(Z_Param_CVarName,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTobiiFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiFloat(Z_Param_CVarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTobiiInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SetTobiiInt(Z_Param_CVarName,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTobiiInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CVarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiInt(Z_Param_CVarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldSpaceDirectionToHMDSpaceDirection) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldSpaceDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTobiiBlueprintLibrary::WorldSpaceDirectionToHMDSpaceDirection(Z_Param_PlayerController,Z_Param_Out_WorldSpaceDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertScreenCmCoordToPixelCoord) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCoordinateCm); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCoordinatePx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ConvertScreenCmCoordToPixelCoord(Z_Param_Out_InCoordinateCm,Z_Param_Out_OutCoordinatePx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertScreenPixelCoordToCmCoord) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCoordinatePx); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCoordinateCm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ConvertScreenPixelCoordToCmCoord(Z_Param_Out_InCoordinatePx,Z_Param_Out_OutCoordinateCm); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewportCoordinateUNormToVirtualDesktopPixel) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportCoordinateUNorm); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutVirtualDesktopPixel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ViewportCoordinateUNormToVirtualDesktopPixel(Z_Param_Out_ViewportCoordinateUNorm,Z_Param_Out_OutVirtualDesktopPixel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVirtualDesktopPixelToViewportCoordinateUNorm) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VirtualDesktopPixel); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutViewportCoordinateUNorm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::VirtualDesktopPixelToViewportCoordinateUNorm(Z_Param_Out_VirtualDesktopPixel,Z_Param_Out_OutViewportCoordinateUNorm); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesktopTrackBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiDesktopTrackBox*)Z_Param__Result=UTobiiBlueprintLibrary::GetDesktopTrackBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadPoseData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiHeadPoseData*)Z_Param__Result=UTobiiBlueprintLibrary::GetHeadPoseData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisplayInformation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiDisplayInfo*)Z_Param__Result=UTobiiBlueprintLibrary::GetDisplayInformation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGazeTrackerStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETobiiGazeTrackerStatus*)Z_Param__Result=UTobiiBlueprintLibrary::GetGazeTrackerStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCombinedWorldGazeHitData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=UTobiiBlueprintLibrary::GetCombinedWorldGazeHitData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightGazeData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetRightGazeData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeftGazeData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetLeftGazeData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCombinedGazeData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetCombinedGazeData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyetrackingFrozen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::GetEyetrackingFrozen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEyetrackingFrozen) \
	{ \
		P_GET_UBOOL(Z_Param_bEyetrackingFrozen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SetEyetrackingFrozen(Z_Param_bEyetrackingFrozen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyetrackingEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::GetEyetrackingEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEyetrackingEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEyetrackingEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiBlueprintLibrary::SetEyetrackingEnabled(Z_Param_bEyetrackingEnabled); \
		P_NATIVE_END; \
	}


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiCore"), NO_API) \
	DECLARE_SERIALIZER(UTobiiBlueprintLibrary)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiCore"), NO_API) \
	DECLARE_SERIALIZER(UTobiiBlueprintLibrary)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiBlueprintLibrary(UTobiiBlueprintLibrary&&); \
	NO_API UTobiiBlueprintLibrary(const UTobiiBlueprintLibrary&); \
public:


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiBlueprintLibrary(UTobiiBlueprintLibrary&&); \
	NO_API UTobiiBlueprintLibrary(const UTobiiBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiBlueprintLibrary)


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_20_PROLOG
#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_RPC_WRAPPERS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_INCLASS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIICORE_API UClass* StaticClass<class UTobiiBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TobiiPlugin_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
