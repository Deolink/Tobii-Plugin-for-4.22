// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/Desktop/TobiiAimAtGazeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiAimAtGazeComponent() {}
// Cross Module References
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiAimAtGazeComponent_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiAimAtGazeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent_NoRegister();
// End Cross Module References
	void UTobiiAimAtGazeComponent::StaticRegisterNativesUTobiiAimAtGazeComponent()
	{
		UClass* Class = UTobiiAimAtGazeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AimAtGaze", &UTobiiAimAtGazeComponent::execAimAtGaze },
			{ "AimAtGazeAvailable", &UTobiiAimAtGazeComponent::execAimAtGazeAvailable },
			{ "ContinuousAimAtGaze", &UTobiiAimAtGazeComponent::execContinuousAimAtGaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aim@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
		{ "ToolTip", "Trigger an aim@gaze" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiAimAtGazeComponent, "AimAtGaze", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics
	{
		struct TobiiAimAtGazeComponent_eventAimAtGazeAvailable_Parms
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
	void Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiAimAtGazeComponent_eventAimAtGazeAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiAimAtGazeComponent_eventAimAtGazeAvailable_Parms), &Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aim@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
		{ "ToolTip", "Use this to test if the user has turned aim@gaze on and it is available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiAimAtGazeComponent, "AimAtGazeAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TobiiAimAtGazeComponent_eventAimAtGazeAvailable_Parms), Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aim@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
		{ "ToolTip", "Call this every frame you want to continually track the aim@gaze target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiAimAtGazeComponent, "ContinuousAimAtGaze", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiAimAtGazeComponent_NoRegister()
	{
		return UTobiiAimAtGazeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRetarget_MetaData[];
#endif
		static void NewProp_bAllowRetarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRetarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze, "AimAtGaze" }, // 4255932208
		{ &Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable, "AimAtGazeAvailable" }, // 3056122647
		{ &Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze, "ContinuousAimAtGaze" }, // 1160949140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Desktop/TobiiAimAtGazeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed_MetaData[] = {
		{ "Category", "Aim@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "AimSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTobiiAimAtGazeComponent, AimSpeed), METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_MetaData[] = {
		{ "Category", "Aim@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_SetBit(void* Obj)
	{
		((UTobiiAimAtGazeComponent*)Obj)->bAllowRetarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowRetarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTobiiAimAtGazeComponent), &Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusManager_MetaData[] = {
		{ "Category", "Aim@gaze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusManager = { UE4CodeGen_Private::EPropertyClass::Object, "FocusManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UTobiiAimAtGazeComponent, FocusManager), Z_Construct_UClass_UTobiiGazeFocusManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiAimAtGazeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::ClassParams = {
		&UTobiiAimAtGazeComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiAimAtGazeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiAimAtGazeComponent, 3096030888);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiAimAtGazeComponent(Z_Construct_UClass_UTobiiAimAtGazeComponent, &UTobiiAimAtGazeComponent::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiAimAtGazeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiAimAtGazeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
