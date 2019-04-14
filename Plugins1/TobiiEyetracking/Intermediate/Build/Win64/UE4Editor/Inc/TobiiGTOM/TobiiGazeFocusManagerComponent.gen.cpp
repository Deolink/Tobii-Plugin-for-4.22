// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiGTOM/Public/TobiiGazeFocusManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiGazeFocusManagerComponent() {}
// Cross Module References
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData();
	TOBIIGTOM_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeFocusData();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics
	{
		struct _Script_TobiiGTOM_eventFocusableLostGazeFocusSignature_Parms
		{
			UPrimitiveComponent* GazeComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GazeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GazeComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent = { "GazeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TobiiGTOM_eventFocusableLostGazeFocusSignature_Parms, GazeComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TobiiGTOM, nullptr, "FocusableLostGazeFocusSignature__DelegateSignature", sizeof(_Script_TobiiGTOM_eventFocusableLostGazeFocusSignature_Parms), Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics
	{
		struct _Script_TobiiGTOM_eventFocusableGainedGazeFocusSignature_Parms
		{
			UPrimitiveComponent* GazeComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GazeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GazeComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent = { "GazeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TobiiGTOM_eventFocusableGainedGazeFocusSignature_Parms, GazeComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::NewProp_GazeComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TobiiGTOM, nullptr, "FocusableGainedGazeFocusSignature__DelegateSignature", sizeof(_Script_TobiiGTOM_eventFocusableGainedGazeFocusSignature_Parms), Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UTobiiGazeFocusManagerComponent::StaticRegisterNativesUTobiiGazeFocusManagerComponent()
	{
		UClass* Class = UTobiiGazeFocusManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllFocusData", &UTobiiGazeFocusManagerComponent::execGetAllFocusData },
			{ "GetFocusData", &UTobiiGazeFocusManagerComponent::execGetFocusData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics
	{
		struct TobiiGazeFocusManagerComponent_eventGetAllFocusData_Parms
		{
			TArray<FTobiiGazeFocusData> OutFocusData;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFocusData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGazeFocusManagerComponent_eventGetAllFocusData_Parms, OutFocusData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::NewProp_OutFocusData_Inner = { "OutFocusData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::NewProp_OutFocusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::NewProp_OutFocusData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "Get a sorted list of components that the focus system believes the user is looking at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGazeFocusManagerComponent, nullptr, "GetAllFocusData", sizeof(TobiiGazeFocusManagerComponent_eventGetAllFocusData_Parms), Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics
	{
		struct TobiiGazeFocusManagerComponent_eventGetFocusData_Parms
		{
			FTobiiGazeFocusData OutFocusData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGazeFocusManagerComponent_eventGetFocusData_Parms, OutFocusData), Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::NewProp_OutFocusData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "Get the component the focus system believes the user is looking at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGazeFocusManagerComponent, nullptr, "GetFocusData", sizeof(TobiiGazeFocusManagerComponent_eventGetFocusData_Parms), Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent_NoRegister()
	{
		return UTobiiGazeFocusManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFocusableLostFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusableLostFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFocusableGainedFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusableGainedFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FocusLayers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FocusLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWhiteList_MetaData[];
#endif
		static void NewProp_bIsWhiteList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWhiteList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFocusData, "GetAllFocusData" }, // 3292311129
		{ &Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetFocusData, "GetFocusData" }, // 60323640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "TobiiGazeFocusManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableLostFocus_MetaData[] = {
		{ "Category", "Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "This will trigger when a new component leaves focus" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableLostFocus = { "OnFocusableLostFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusManagerComponent, OnFocusableLostFocus), Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableLostFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableLostFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableGainedFocus_MetaData[] = {
		{ "Category", "Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "This will trigger when a new component enters focus" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableGainedFocus = { "OnFocusableGainedFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusManagerComponent, OnFocusableGainedFocus), Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableGainedFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableGainedFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayers_MetaData[] = {
		{ "Category", "Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "These are the filters defined on this manager. The behavior of the filters are controlled by bAreFiltersExclusive." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayers = { "FocusLayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusManagerComponent, FocusLayers), METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayers_Inner = { "FocusLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_MetaData[] = {
		{ "Category", "Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "This controls how the layers in FocusLayers are used. If this is true, only focusables with a layer that is in the FocusLayers array will be considered. If this is false, the FocusLayers array will act like a black list, excluding any focusables whos layer can be found in the array." },
	};
#endif
	void Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_SetBit(void* Obj)
	{
		((UTobiiGazeFocusManagerComponent*)Obj)->bIsWhiteList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList = { "bIsWhiteList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiGazeFocusManagerComponent), &Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableLostFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnFocusableGainedFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiGazeFocusManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::ClassParams = {
		&UTobiiGazeFocusManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiGazeFocusManagerComponent, 2881477021);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiGazeFocusManagerComponent>()
	{
		return UTobiiGazeFocusManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiGazeFocusManagerComponent(Z_Construct_UClass_UTobiiGazeFocusManagerComponent, &UTobiiGazeFocusManagerComponent::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiGazeFocusManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiGazeFocusManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
