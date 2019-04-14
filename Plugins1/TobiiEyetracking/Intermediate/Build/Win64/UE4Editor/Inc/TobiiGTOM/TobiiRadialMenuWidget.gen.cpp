// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiGTOM/Public/GTOMAwareUI/TobiiRadialMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiRadialMenuWidget() {}
// Cross Module References
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiRadialMenuSlot_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiRadialMenuSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiRadialMenuWidget_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiRadialMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount();
// End Cross Module References
	void UTobiiRadialMenuSlot::StaticRegisterNativesUTobiiRadialMenuSlot()
	{
		UClass* Class = UTobiiRadialMenuSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlpha", &UTobiiRadialMenuSlot::execGetAlpha },
			{ "GetOffset", &UTobiiRadialMenuSlot::execGetOffset },
			{ "GetScale", &UTobiiRadialMenuSlot::execGetScale },
			{ "SetAlpha", &UTobiiRadialMenuSlot::execSetAlpha },
			{ "SetOffset", &UTobiiRadialMenuSlot::execSetOffset },
			{ "SetScale", &UTobiiRadialMenuSlot::execSetScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics
	{
		struct TobiiRadialMenuSlot_eventGetAlpha_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventGetAlpha_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "GetAlpha", sizeof(TobiiRadialMenuSlot_eventGetAlpha_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics
	{
		struct TobiiRadialMenuSlot_eventGetOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventGetOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "GetOffset", sizeof(TobiiRadialMenuSlot_eventGetOffset_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics
	{
		struct TobiiRadialMenuSlot_eventGetScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventGetScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "GetScale", sizeof(TobiiRadialMenuSlot_eventGetScale_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics
	{
		struct TobiiRadialMenuSlot_eventSetAlpha_Parms
		{
			float InAlpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::NewProp_InAlpha = { "InAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventSetAlpha_Parms, InAlpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::NewProp_InAlpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "SetAlpha", sizeof(TobiiRadialMenuSlot_eventSetAlpha_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics
	{
		struct TobiiRadialMenuSlot_eventSetOffset_Parms
		{
			FVector2D InOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventSetOffset_Parms, InOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "SetOffset", sizeof(TobiiRadialMenuSlot_eventSetOffset_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics
	{
		struct TobiiRadialMenuSlot_eventSetScale_Parms
		{
			float InScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventSetScale_Parms, InScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::NewProp_InScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "SetScale", sizeof(TobiiRadialMenuSlot_eventSetScale_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiRadialMenuSlot_NoRegister()
	{
		return UTobiiRadialMenuSlot::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiRadialMenuSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha, "GetAlpha" }, // 3318657920
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset, "GetOffset" }, // 1019063010
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale, "GetScale" }, // 1677141473
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha, "SetAlpha" }, // 2254683539
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset, "SetOffset" }, // 2900017093
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale, "SetScale" }, // 3910232626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuSlot, Alpha), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuSlot, Scale), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuSlot, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiRadialMenuSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::ClassParams = {
		&UTobiiRadialMenuSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiRadialMenuSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiRadialMenuSlot, 1443136142);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiRadialMenuSlot>()
	{
		return UTobiiRadialMenuSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiRadialMenuSlot(Z_Construct_UClass_UTobiiRadialMenuSlot, &UTobiiRadialMenuSlot::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiRadialMenuSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiRadialMenuSlot);
	void UTobiiRadialMenuWidget::StaticRegisterNativesUTobiiRadialMenuWidget()
	{
		UClass* Class = UTobiiRadialMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRadialMenuChild", &UTobiiRadialMenuWidget::execAddRadialMenuChild },
			{ "SetAngularDisplacementDeg", &UTobiiRadialMenuWidget::execSetAngularDisplacementDeg },
			{ "SetBorderColor", &UTobiiRadialMenuWidget::execSetBorderColor },
			{ "SetBorderThicknessPx", &UTobiiRadialMenuWidget::execSetBorderThicknessPx },
			{ "SetPanelColor", &UTobiiRadialMenuWidget::execSetPanelColor },
			{ "SetRadiusPx", &UTobiiRadialMenuWidget::execSetRadiusPx },
			{ "SetSegmentSeparationPx", &UTobiiRadialMenuWidget::execSetSegmentSeparationPx },
			{ "SetUseHardBorder", &UTobiiRadialMenuWidget::execSetUseHardBorder },
			{ "SetVertexCount", &UTobiiRadialMenuWidget::execSetVertexCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics
	{
		struct TobiiRadialMenuWidget_eventAddRadialMenuChild_Parms
		{
			UWidget* Content;
			UTobiiRadialMenuSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventAddRadialMenuChild_Parms, ReturnValue), Z_Construct_UClass_UTobiiRadialMenuSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventAddRadialMenuChild_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "AddRadialMenuChild", sizeof(TobiiRadialMenuWidget_eventAddRadialMenuChild_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics
	{
		struct TobiiRadialMenuWidget_eventSetAngularDisplacementDeg_Parms
		{
			float NewAngularDisplacementDeg;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngularDisplacementDeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::NewProp_NewAngularDisplacementDeg = { "NewAngularDisplacementDeg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetAngularDisplacementDeg_Parms, NewAngularDisplacementDeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::NewProp_NewAngularDisplacementDeg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetAngularDisplacementDeg", sizeof(TobiiRadialMenuWidget_eventSetAngularDisplacementDeg_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics
	{
		struct TobiiRadialMenuWidget_eventSetBorderColor_Parms
		{
			FColor NewBorderColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBorderColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::NewProp_NewBorderColor = { "NewBorderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetBorderColor_Parms, NewBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::NewProp_NewBorderColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetBorderColor", sizeof(TobiiRadialMenuWidget_eventSetBorderColor_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics
	{
		struct TobiiRadialMenuWidget_eventSetBorderThicknessPx_Parms
		{
			float NewBorderThicknessPx;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewBorderThicknessPx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::NewProp_NewBorderThicknessPx = { "NewBorderThicknessPx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetBorderThicknessPx_Parms, NewBorderThicknessPx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::NewProp_NewBorderThicknessPx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetBorderThicknessPx", sizeof(TobiiRadialMenuWidget_eventSetBorderThicknessPx_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics
	{
		struct TobiiRadialMenuWidget_eventSetPanelColor_Parms
		{
			FColor NewPanelColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPanelColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::NewProp_NewPanelColor = { "NewPanelColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetPanelColor_Parms, NewPanelColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::NewProp_NewPanelColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetPanelColor", sizeof(TobiiRadialMenuWidget_eventSetPanelColor_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics
	{
		struct TobiiRadialMenuWidget_eventSetRadiusPx_Parms
		{
			float NewRadiusPx;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadiusPx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::NewProp_NewRadiusPx = { "NewRadiusPx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetRadiusPx_Parms, NewRadiusPx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::NewProp_NewRadiusPx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetRadiusPx", sizeof(TobiiRadialMenuWidget_eventSetRadiusPx_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics
	{
		struct TobiiRadialMenuWidget_eventSetSegmentSeparationPx_Parms
		{
			float NewSegmentSeparationPx;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSegmentSeparationPx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::NewProp_NewSegmentSeparationPx = { "NewSegmentSeparationPx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetSegmentSeparationPx_Parms, NewSegmentSeparationPx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::NewProp_NewSegmentSeparationPx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetSegmentSeparationPx", sizeof(TobiiRadialMenuWidget_eventSetSegmentSeparationPx_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics
	{
		struct TobiiRadialMenuWidget_eventSetUseHardBorder_Parms
		{
			bool bNewUseHardBorder;
		};
		static void NewProp_bNewUseHardBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewUseHardBorder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::NewProp_bNewUseHardBorder_SetBit(void* Obj)
	{
		((TobiiRadialMenuWidget_eventSetUseHardBorder_Parms*)Obj)->bNewUseHardBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::NewProp_bNewUseHardBorder = { "bNewUseHardBorder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiRadialMenuWidget_eventSetUseHardBorder_Parms), &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::NewProp_bNewUseHardBorder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::NewProp_bNewUseHardBorder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetUseHardBorder", sizeof(TobiiRadialMenuWidget_eventSetUseHardBorder_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics
	{
		struct TobiiRadialMenuWidget_eventSetVertexCount_Parms
		{
			int32 NewVertexCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewVertexCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::NewProp_NewVertexCount = { "NewVertexCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetVertexCount_Parms, NewVertexCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::NewProp_NewVertexCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetVertexCount", sizeof(TobiiRadialMenuWidget_eventSetVertexCount_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiRadialMenuWidget_NoRegister()
	{
		return UTobiiRadialMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiRadialMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertexCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDisplacementDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDisplacementDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentSeparationPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentSeparationPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderThicknessPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BorderThicknessPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PanelColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHardBorder_MetaData[];
#endif
		static void NewProp_bUseHardBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHardBorder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild, "AddRadialMenuChild" }, // 1711428654
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg, "SetAngularDisplacementDeg" }, // 548791644
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor, "SetBorderColor" }, // 236344907
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx, "SetBorderThicknessPx" }, // 576031175
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor, "SetPanelColor" }, // 4035556122
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx, "SetRadiusPx" }, // 2075514505
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx, "SetSegmentSeparationPx" }, // 1777985336
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder, "SetUseHardBorder" }, // 947770218
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount, "SetVertexCount" }, // 2228886192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Tobii Radial Menu" },
		{ "IncludePath", "GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The amount of vertices that will be used for the outside of the circle segments in total." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, VertexCount), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "This is the preferred radius. This will inform the desired size of the widget" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx = { "RadiusPx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, RadiusPx), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "This is how rotated the panel is. Useful if you want another orientation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg = { "AngularDisplacementDeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, AngularDisplacementDeg), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The amount of pixels separating each segment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx = { "SegmentSeparationPx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, SegmentSeparationPx), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The thickness of the border area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx = { "BorderThicknessPx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, BorderThicknessPx), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The color of the panels themselves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor = { "PanelColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, PanelColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The color of the borders around each panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, BorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "A hard border will not be blended with the panel, while a soft border will be blended" },
	};
#endif
	void Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_SetBit(void* Obj)
	{
		((UTobiiRadialMenuWidget*)Obj)->bUseHardBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder = { "bUseHardBorder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiRadialMenuWidget), &Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiRadialMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::ClassParams = {
		&UTobiiRadialMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiRadialMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiRadialMenuWidget, 606093592);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiRadialMenuWidget>()
	{
		return UTobiiRadialMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiRadialMenuWidget(Z_Construct_UClass_UTobiiRadialMenuWidget, &UTobiiRadialMenuWidget::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiRadialMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiRadialMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
