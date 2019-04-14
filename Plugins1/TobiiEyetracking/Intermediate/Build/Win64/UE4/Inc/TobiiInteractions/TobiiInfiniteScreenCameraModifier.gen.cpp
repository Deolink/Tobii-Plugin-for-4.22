// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/Desktop/TobiiInfiniteScreenCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiInfiniteScreenCameraModifier() {}
// Cross Module References
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UTobiiInfiniteScreenCameraModifier::StaticRegisterNativesUTobiiInfiniteScreenCameraModifier()
	{
		UClass* Class = UTobiiInfiniteScreenCameraModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtendedViewAvailable", &UTobiiInfiniteScreenCameraModifier::execExtendedViewAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics
	{
		struct TobiiInfiniteScreenCameraModifier_eventExtendedViewAvailable_Parms
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
	void Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInfiniteScreenCameraModifier_eventExtendedViewAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInfiniteScreenCameraModifier_eventExtendedViewAvailable_Parms), &Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Infinite Screen" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiInfiniteScreenCameraModifier.h" },
		{ "ToolTip", "Use this to test if the user has turned extended view on and it is available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier, nullptr, "ExtendedViewAvailable", sizeof(TobiiInfiniteScreenCameraModifier_eventExtendedViewAvailable_Parms), Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_NoRegister()
	{
		return UTobiiInfiniteScreenCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewInfoWithoutExtendedView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewInfoWithoutExtendedView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfiniteScreenAngles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfiniteScreenAngles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiInfiniteScreenCameraModifier_ExtendedViewAvailable, "ExtendedViewAvailable" }, // 1289208069
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Desktop/TobiiInfiniteScreenCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiInfiniteScreenCameraModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_ViewInfoWithoutExtendedView_MetaData[] = {
		{ "Category", "Infinite Screen Properties" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiInfiniteScreenCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_ViewInfoWithoutExtendedView = { "ViewInfoWithoutExtendedView", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiInfiniteScreenCameraModifier, ViewInfoWithoutExtendedView), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_ViewInfoWithoutExtendedView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_ViewInfoWithoutExtendedView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_InfiniteScreenAngles_MetaData[] = {
		{ "Category", "Infinite Screen Properties" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiInfiniteScreenCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_InfiniteScreenAngles = { "InfiniteScreenAngles", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiInfiniteScreenCameraModifier, InfiniteScreenAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_InfiniteScreenAngles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_InfiniteScreenAngles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_ViewInfoWithoutExtendedView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::NewProp_InfiniteScreenAngles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiInfiniteScreenCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::ClassParams = {
		&UTobiiInfiniteScreenCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiInfiniteScreenCameraModifier, 2827026152);
	template<> TOBIIINTERACTIONS_API UClass* StaticClass<UTobiiInfiniteScreenCameraModifier>()
	{
		return UTobiiInfiniteScreenCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiInfiniteScreenCameraModifier(Z_Construct_UClass_UTobiiInfiniteScreenCameraModifier, &UTobiiInfiniteScreenCameraModifier::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiInfiniteScreenCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiInfiniteScreenCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
