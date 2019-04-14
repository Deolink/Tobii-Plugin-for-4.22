// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiCore/Public/TobiiBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiBlueprintLibrary() {}
// Cross Module References
	TOBIICORE_API UClass* Z_Construct_UClass_UTobiiBlueprintLibrary_NoRegister();
	TOBIICORE_API UClass* Z_Construct_UClass_UTobiiBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TobiiCore();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeData();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiDesktopTrackBox();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiDisplayInfo();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus();
	TOBIICORE_API UEnum* Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiHeadPoseData();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm();
	TOBIICORE_API UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UTobiiBlueprintLibrary::StaticRegisterNativesUTobiiBlueprintLibrary()
	{
		UClass* Class = UTobiiBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertScreenCmCoordToPixelCoord", &UTobiiBlueprintLibrary::execConvertScreenCmCoordToPixelCoord },
			{ "ConvertScreenPixelCoordToCmCoord", &UTobiiBlueprintLibrary::execConvertScreenPixelCoordToCmCoord },
			{ "GetCombinedGazeData", &UTobiiBlueprintLibrary::execGetCombinedGazeData },
			{ "GetCombinedWorldGazeHitData", &UTobiiBlueprintLibrary::execGetCombinedWorldGazeHitData },
			{ "GetDesktopTrackBox", &UTobiiBlueprintLibrary::execGetDesktopTrackBox },
			{ "GetDisplayInformation", &UTobiiBlueprintLibrary::execGetDisplayInformation },
			{ "GetEyetrackingEnabled", &UTobiiBlueprintLibrary::execGetEyetrackingEnabled },
			{ "GetEyetrackingFrozen", &UTobiiBlueprintLibrary::execGetEyetrackingFrozen },
			{ "GetGazeTrackerStatus", &UTobiiBlueprintLibrary::execGetGazeTrackerStatus },
			{ "GetHeadPoseData", &UTobiiBlueprintLibrary::execGetHeadPoseData },
			{ "GetLeftGazeData", &UTobiiBlueprintLibrary::execGetLeftGazeData },
			{ "GetRightGazeData", &UTobiiBlueprintLibrary::execGetRightGazeData },
			{ "GetTobiiFloat", &UTobiiBlueprintLibrary::execGetTobiiFloat },
			{ "GetTobiiInt", &UTobiiBlueprintLibrary::execGetTobiiInt },
			{ "IsXRPlayerController", &UTobiiBlueprintLibrary::execIsXRPlayerController },
			{ "LoadTobiiSettings", &UTobiiBlueprintLibrary::execLoadTobiiSettings },
			{ "SaveTobiiSetting", &UTobiiBlueprintLibrary::execSaveTobiiSetting },
			{ "SetEyetrackingEnabled", &UTobiiBlueprintLibrary::execSetEyetrackingEnabled },
			{ "SetEyetrackingFrozen", &UTobiiBlueprintLibrary::execSetEyetrackingFrozen },
			{ "SetTobiiFloat", &UTobiiBlueprintLibrary::execSetTobiiFloat },
			{ "SetTobiiInt", &UTobiiBlueprintLibrary::execSetTobiiInt },
			{ "ViewportCoordinateUNormToVirtualDesktopPixel", &UTobiiBlueprintLibrary::execViewportCoordinateUNormToVirtualDesktopPixel },
			{ "VirtualDesktopPixelToViewportCoordinateUNorm", &UTobiiBlueprintLibrary::execVirtualDesktopPixelToViewportCoordinateUNorm },
			{ "WorldSpaceDirectionToHMDSpaceDirection", &UTobiiBlueprintLibrary::execWorldSpaceDirectionToHMDSpaceDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics
	{
		struct TobiiBlueprintLibrary_eventConvertScreenCmCoordToPixelCoord_Parms
		{
			FVector2D InCoordinateCm;
			FVector2D OutCoordinatePx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCoordinatePx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCoordinateCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCoordinateCm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventConvertScreenCmCoordToPixelCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventConvertScreenCmCoordToPixelCoord_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_OutCoordinatePx = { UE4CodeGen_Private::EPropertyClass::Struct, "OutCoordinatePx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventConvertScreenCmCoordToPixelCoord_Parms, OutCoordinatePx), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm = { UE4CodeGen_Private::EPropertyClass::Struct, "InCoordinateCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventConvertScreenCmCoordToPixelCoord_Parms, InCoordinateCm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_OutCoordinatePx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "ConvertScreenCmCoordToPixelCoord", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TobiiBlueprintLibrary_eventConvertScreenCmCoordToPixelCoord_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics
	{
		struct TobiiBlueprintLibrary_eventConvertScreenPixelCoordToCmCoord_Parms
		{
			FVector2D InCoordinatePx;
			FVector2D OutCoordinateCm;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCoordinateCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCoordinatePx_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCoordinatePx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventConvertScreenPixelCoordToCmCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventConvertScreenPixelCoordToCmCoord_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_OutCoordinateCm = { UE4CodeGen_Private::EPropertyClass::Struct, "OutCoordinateCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventConvertScreenPixelCoordToCmCoord_Parms, OutCoordinateCm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx = { UE4CodeGen_Private::EPropertyClass::Struct, "InCoordinatePx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventConvertScreenPixelCoordToCmCoord_Parms, InCoordinatePx), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_OutCoordinateCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "ConvertScreenPixelCoordToCmCoord", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TobiiBlueprintLibrary_eventConvertScreenPixelCoordToCmCoord_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetCombinedGazeData_Parms
		{
			FTobiiGazeData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetCombinedGazeData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiGazeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This is the main method to get basic eye tracking data. You should not be using this though for most things. Use the focus system instead if you can." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetCombinedGazeData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetCombinedGazeData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetCombinedWorldGazeHitData_Parms
		{
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetCombinedWorldGazeHitData_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetCombinedWorldGazeHitData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetCombinedWorldGazeHitData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics
	{
		struct TobiiBlueprintLibrary_eventGetDesktopTrackBox_Parms
		{
			FTobiiDesktopTrackBox ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetDesktopTrackBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiDesktopTrackBox, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Track box information." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetDesktopTrackBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetDesktopTrackBox_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics
	{
		struct TobiiBlueprintLibrary_eventGetDisplayInformation_Parms
		{
			FTobiiDisplayInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetDisplayInformation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiDisplayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Gets information about the display device and window used for the application." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetDisplayInformation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetDisplayInformation_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics
	{
		struct TobiiBlueprintLibrary_eventGetEyetrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventGetEyetrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventGetEyetrackingEnabled_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetEyetrackingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetEyetrackingEnabled_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics
	{
		struct TobiiBlueprintLibrary_eventGetEyetrackingFrozen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventGetEyetrackingFrozen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventGetEyetrackingFrozen_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetEyetrackingFrozen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetEyetrackingFrozen_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics
	{
		struct TobiiBlueprintLibrary_eventGetGazeTrackerStatus_Parms
		{
			ETobiiGazeTrackerStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetGazeTrackerStatus_Parms, ReturnValue), Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This will indicate the readiness of the gaze tracking subsystem. For most applications this will also indicate head tracking readiness." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetGazeTrackerStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetGazeTrackerStatus_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetHeadPoseData_Parms
		{
			FTobiiHeadPoseData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetHeadPoseData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiHeadPoseData, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This is the main method to get basic head pose data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetHeadPoseData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetHeadPoseData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetLeftGazeData_Parms
		{
			FTobiiGazeData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetLeftGazeData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiGazeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetLeftGazeData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetLeftGazeData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetRightGazeData_Parms
		{
			FTobiiGazeData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetRightGazeData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiGazeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetRightGazeData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetRightGazeData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiFloat_Parms
		{
			FString CVarName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::NewProp_CVarName = { UE4CodeGen_Private::EPropertyClass::Str, "CVarName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiFloat_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::NewProp_CVarName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetTobiiFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetTobiiFloat_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiInt_Parms
		{
			FString CVarName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::NewProp_CVarName = { UE4CodeGen_Private::EPropertyClass::Str, "CVarName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiInt_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::NewProp_CVarName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Use these functions to get and set CVars in runtime." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "GetTobiiInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventGetTobiiInt_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics
	{
		struct TobiiBlueprintLibrary_eventIsXRPlayerController_Parms
		{
			const APlayerController* PlayerController;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventIsXRPlayerController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventIsXRPlayerController_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventIsXRPlayerController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii XR Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Tests if a given player controller is XR enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "IsXRPlayerController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiBlueprintLibrary_eventIsXRPlayerController_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "If you are persisting your custom CVar values, you should call this function when you start your application." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "LoadTobiiSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics
	{
		struct TobiiBlueprintLibrary_eventSaveTobiiSetting_Parms
		{
			FString CVarSettingToSave;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarSettingToSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::NewProp_CVarSettingToSave = { UE4CodeGen_Private::EPropertyClass::Str, "CVarSettingToSave", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSaveTobiiSetting_Parms, CVarSettingToSave), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::NewProp_CVarSettingToSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "If you want to persist a CVar to .ini, use this function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "SaveTobiiSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(TobiiBlueprintLibrary_eventSaveTobiiSetting_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics
	{
		struct TobiiBlueprintLibrary_eventSetEyetrackingEnabled_Parms
		{
			bool bEyetrackingEnabled;
		};
		static void NewProp_bEyetrackingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEyetrackingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::NewProp_bEyetrackingEnabled_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventSetEyetrackingEnabled_Parms*)Obj)->bEyetrackingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::NewProp_bEyetrackingEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEyetrackingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventSetEyetrackingEnabled_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::NewProp_bEyetrackingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::NewProp_bEyetrackingEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This is just a helper function to set the eyetracking enabled CVar for blueprint convenience.\nSet eyetracking disabled if you don't need tracking and don't want to pay the CPU cost in some parts of your program." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "SetEyetrackingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(TobiiBlueprintLibrary_eventSetEyetrackingEnabled_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics
	{
		struct TobiiBlueprintLibrary_eventSetEyetrackingFrozen_Parms
		{
			bool bEyetrackingFrozen;
		};
		static void NewProp_bEyetrackingFrozen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEyetrackingFrozen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::NewProp_bEyetrackingFrozen_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventSetEyetrackingFrozen_Parms*)Obj)->bEyetrackingFrozen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::NewProp_bEyetrackingFrozen = { UE4CodeGen_Private::EPropertyClass::Bool, "bEyetrackingFrozen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventSetEyetrackingFrozen_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::NewProp_bEyetrackingFrozen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::NewProp_bEyetrackingFrozen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This is just a helper function to set the eyetracking frozen CVar for blueprint convenience.\nFreezing the eyetracking can be very useful for debugging as well as when trying to show someone what effect eyetracking has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "SetEyetrackingFrozen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(TobiiBlueprintLibrary_eventSetEyetrackingFrozen_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics
	{
		struct TobiiBlueprintLibrary_eventSetTobiiFloat_Parms
		{
			FString CVarName;
			float NewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSetTobiiFloat_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_CVarName = { UE4CodeGen_Private::EPropertyClass::Str, "CVarName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSetTobiiFloat_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_CVarName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "SetTobiiFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(TobiiBlueprintLibrary_eventSetTobiiFloat_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics
	{
		struct TobiiBlueprintLibrary_eventSetTobiiInt_Parms
		{
			FString CVarName;
			int32 NewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Int, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSetTobiiInt_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_CVarName = { UE4CodeGen_Private::EPropertyClass::Str, "CVarName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSetTobiiInt_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_CVarName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "SetTobiiInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(TobiiBlueprintLibrary_eventSetTobiiInt_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics
	{
		struct TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms
		{
			FVector2D ViewportCoordinateUNorm;
			FVector2D OutVirtualDesktopPixel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVirtualDesktopPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportCoordinateUNorm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportCoordinateUNorm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_OutVirtualDesktopPixel = { UE4CodeGen_Private::EPropertyClass::Struct, "OutVirtualDesktopPixel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms, OutVirtualDesktopPixel), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewportCoordinateUNorm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms, ViewportCoordinateUNorm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_OutVirtualDesktopPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "ViewportCoordinateUNormToVirtualDesktopPixel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics
	{
		struct TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms
		{
			FVector2D VirtualDesktopPixel;
			FVector2D OutViewportCoordinateUNorm;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutViewportCoordinateUNorm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualDesktopPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualDesktopPixel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_OutViewportCoordinateUNorm = { UE4CodeGen_Private::EPropertyClass::Struct, "OutViewportCoordinateUNorm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms, OutViewportCoordinateUNorm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel = { UE4CodeGen_Private::EPropertyClass::Struct, "VirtualDesktopPixel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms, VirtualDesktopPixel), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_OutViewportCoordinateUNorm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Use this function if you want to project slate information to viewport space. Includes DPI adjustments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "VirtualDesktopPixelToViewportCoordinateUNorm", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics
	{
		struct TobiiBlueprintLibrary_eventWorldSpaceDirectionToHMDSpaceDirection_Parms
		{
			APlayerController* PlayerController;
			FVector WorldSpaceDirection;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSpaceDirection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventWorldSpaceDirectionToHMDSpaceDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_WorldSpaceDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_WorldSpaceDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldSpaceDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventWorldSpaceDirectionToHMDSpaceDirection_Parms, WorldSpaceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_WorldSpaceDirection_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_WorldSpaceDirection_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiBlueprintLibrary_eventWorldSpaceDirectionToHMDSpaceDirection_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_WorldSpaceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This function lets you move from world space to HMD local space. This can be useful if you want to get a gaze direction in HMD space for example." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, "WorldSpaceDirectionToHMDSpaceDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TobiiBlueprintLibrary_eventWorldSpaceDirectionToHMDSpaceDirection_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiBlueprintLibrary_NoRegister()
	{
		return UTobiiBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenCmCoordToPixelCoord, "ConvertScreenCmCoordToPixelCoord" }, // 111116769
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertScreenPixelCoordToCmCoord, "ConvertScreenPixelCoordToCmCoord" }, // 1958313373
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedGazeData, "GetCombinedGazeData" }, // 2287067165
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetCombinedWorldGazeHitData, "GetCombinedWorldGazeHitData" }, // 3798819409
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDesktopTrackBox, "GetDesktopTrackBox" }, // 3050387398
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetDisplayInformation, "GetDisplayInformation" }, // 3003635650
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingEnabled, "GetEyetrackingEnabled" }, // 2448144972
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetEyetrackingFrozen, "GetEyetrackingFrozen" }, // 268203841
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetGazeTrackerStatus, "GetGazeTrackerStatus" }, // 701860447
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetHeadPoseData, "GetHeadPoseData" }, // 4180382860
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetLeftGazeData, "GetLeftGazeData" }, // 3871875220
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetRightGazeData, "GetRightGazeData" }, // 449612616
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat, "GetTobiiFloat" }, // 2787013990
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt, "GetTobiiInt" }, // 1067414511
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController, "IsXRPlayerController" }, // 2450054055
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings, "LoadTobiiSettings" }, // 698910090
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting, "SaveTobiiSetting" }, // 3841379414
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingEnabled, "SetEyetrackingEnabled" }, // 3661708119
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetEyetrackingFrozen, "SetEyetrackingFrozen" }, // 592332010
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat, "SetTobiiFloat" }, // 4204078303
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt, "SetTobiiInt" }, // 613057997
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel, "ViewportCoordinateUNormToVirtualDesktopPixel" }, // 3408468541
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm, "VirtualDesktopPixelToViewportCoordinateUNorm" }, // 2877707347
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_WorldSpaceDirectionToHMDSpaceDirection, "WorldSpaceDirectionToHMDSpaceDirection" }, // 987451344
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TobiiBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::ClassParams = {
		&UTobiiBlueprintLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiBlueprintLibrary, 2434328752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiBlueprintLibrary(Z_Construct_UClass_UTobiiBlueprintLibrary, &UTobiiBlueprintLibrary::StaticClass, TEXT("/Script/TobiiCore"), TEXT("UTobiiBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
