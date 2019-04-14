// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/TobiiInteractionsBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiInteractionsBlueprintLibrary() {}
// Cross Module References
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticResult();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticData();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiProjectileTraceData();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	void UTobiiInteractionsBlueprintLibrary::StaticRegisterNativesUTobiiInteractionsBlueprintLibrary()
	{
		UClass* Class = UTobiiInteractionsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindNeededAccelerationForAccelerationBasedHomingProjectile", &UTobiiInteractionsBlueprintLibrary::execFindNeededAccelerationForAccelerationBasedHomingProjectile },
			{ "FindNeededInitialVelocityForBallisticProjectile", &UTobiiInteractionsBlueprintLibrary::execFindNeededInitialVelocityForBallisticProjectile },
			{ "FindRealCubicRoots", &UTobiiInteractionsBlueprintLibrary::execFindRealCubicRoots },
			{ "FindRealQuarticRoots", &UTobiiInteractionsBlueprintLibrary::execFindRealQuarticRoots },
			{ "FindRealSquareRoots", &UTobiiInteractionsBlueprintLibrary::execFindRealSquareRoots },
			{ "GetInfiniteScreenAngles", &UTobiiInteractionsBlueprintLibrary::execGetInfiniteScreenAngles },
			{ "IsAimAtGazeEnabled", &UTobiiInteractionsBlueprintLibrary::execIsAimAtGazeEnabled },
			{ "IsCleanUIEnabled", &UTobiiInteractionsBlueprintLibrary::execIsCleanUIEnabled },
			{ "IsFireAtGazeEnabled", &UTobiiInteractionsBlueprintLibrary::execIsFireAtGazeEnabled },
			{ "IsInfiniteScreenEnabled", &UTobiiInteractionsBlueprintLibrary::execIsInfiniteScreenEnabled },
			{ "IsThrowAtGazeEnabled", &UTobiiInteractionsBlueprintLibrary::execIsThrowAtGazeEnabled },
			{ "TraceBallisticProjectilePath", &UTobiiInteractionsBlueprintLibrary::execTraceBallisticProjectilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms
		{
			FTobiiAccelerationBasedHomingData InputData;
			FTobiiAccelerationBasedHomingResult BestResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BestResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_BestResult = { UE4CodeGen_Private::EPropertyClass::Struct, "BestResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms, BestResult), Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData = { UE4CodeGen_Private::EPropertyClass::Struct, "InputData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms, InputData), Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_BestResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will try to find which acceleration you will need for the current frame to hit a certain target given a homing projectile that uses acceleration for it's movement behavior." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "FindNeededAccelerationForAccelerationBasedHomingProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms
		{
			FTobiiBallisticData InputData;
			TArray<FTobiiBallisticResult> Results;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_Results = { UE4CodeGen_Private::EPropertyClass::Array, "Results", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms, Results), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_Results_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Results", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTobiiBallisticResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData = { UE4CodeGen_Private::EPropertyClass::Struct, "InputData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms, InputData), Z_Construct_UScriptStruct_FTobiiBallisticData, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_Results,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_Results_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will try to find the initial velocity needed to hit a moving target with a ballistic projectile that passes through a selected apex point.\nTo find an arc that works with your environment and thrower you might have to call this function multiple times and trace the results in your scene.\n\n@return Whether a valid velocity could be found. If this is false, it usually means that SourceZ + ProjectileApexOffset was smaller than TargetZ. Try increasing the apex offset and try again." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "FindNeededInitialVelocityForBallisticProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms
		{
			float A;
			float B;
			float C;
			float D;
			TArray<float> OutRealRoots;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRealRoots;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRealRoots_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_D;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_C;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_OutRealRoots = { UE4CodeGen_Private::EPropertyClass::Array, "OutRealRoots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, OutRealRoots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_OutRealRoots_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "OutRealRoots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_D = { UE4CodeGen_Private::EPropertyClass::Float, "D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, D), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_C = { UE4CodeGen_Private::EPropertyClass::Float, "C", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, C), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Float, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Float, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_OutRealRoots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_OutRealRoots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will find and return all real roots to the cubic equation Ax^3 + Bx^2 + Cx + D = 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "FindRealCubicRoots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms
		{
			float A;
			float B;
			float C;
			float D;
			float E;
			TArray<float> OutRealRoots;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRealRoots;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRealRoots_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_E;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_D;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_C;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_OutRealRoots = { UE4CodeGen_Private::EPropertyClass::Array, "OutRealRoots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, OutRealRoots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_OutRealRoots_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "OutRealRoots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_E = { UE4CodeGen_Private::EPropertyClass::Float, "E", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, E), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_D = { UE4CodeGen_Private::EPropertyClass::Float, "D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, D), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_C = { UE4CodeGen_Private::EPropertyClass::Float, "C", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, C), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Float, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Float, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_OutRealRoots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_OutRealRoots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_E,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will find and return all real roots to the quartic equation Ax^4 + Bx^3 + Cx^2 + Dx + E = 0\nWARNING: The roots of a full degree quartic are generally not cheap to compute. Use with care." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "FindRealQuarticRoots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms
		{
			float A;
			float B;
			float C;
			TArray<float> OutRealRoots;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRealRoots;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRealRoots_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_C;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_OutRealRoots = { UE4CodeGen_Private::EPropertyClass::Array, "OutRealRoots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms, OutRealRoots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_OutRealRoots_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "OutRealRoots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_C = { UE4CodeGen_Private::EPropertyClass::Float, "C", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms, C), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Float, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Float, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_OutRealRoots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_OutRealRoots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will find and return all real roots to the square equation Ax^2 + Bx + C = 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "FindRealSquareRoots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventGetInfiniteScreenAngles_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventGetInfiniteScreenAngles_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "GetInfiniteScreenAngles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TobiiInteractionsBlueprintLibrary_eventGetInfiniteScreenAngles_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsAimAtGazeEnabled_Parms
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
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsAimAtGazeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiInteractionsBlueprintLibrary_eventIsAimAtGazeEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "IsAimAtGazeEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiInteractionsBlueprintLibrary_eventIsAimAtGazeEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsCleanUIEnabled_Parms
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
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsCleanUIEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiInteractionsBlueprintLibrary_eventIsCleanUIEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "Util functions to see if the feature can be considered enabled by the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "IsCleanUIEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiInteractionsBlueprintLibrary_eventIsCleanUIEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsFireAtGazeEnabled_Parms
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
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsFireAtGazeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiInteractionsBlueprintLibrary_eventIsFireAtGazeEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "IsFireAtGazeEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiInteractionsBlueprintLibrary_eventIsFireAtGazeEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsInfiniteScreenEnabled_Parms
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
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsInfiniteScreenEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiInteractionsBlueprintLibrary_eventIsInfiniteScreenEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "IsInfiniteScreenEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiInteractionsBlueprintLibrary_eventIsInfiniteScreenEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsThrowAtGazeEnabled_Parms
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
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsThrowAtGazeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiInteractionsBlueprintLibrary_eventIsThrowAtGazeEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "IsThrowAtGazeEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TobiiInteractionsBlueprintLibrary_eventIsThrowAtGazeEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms
		{
			const UWorld* World;
			FTobiiProjectileTraceData InputData;
			TArray<FVector> OutTracedPath;
			FHitResult OutHitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHitResult;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTracedPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTracedPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutHitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms, OutHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath = { UE4CodeGen_Private::EPropertyClass::Array, "OutTracedPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms, OutTracedPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutTracedPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData = { UE4CodeGen_Private::EPropertyClass::Struct, "InputData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms, InputData), Z_Construct_UScriptStruct_FTobiiProjectileTraceData, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_World_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will trace along a ballistic path until it hits something. It will then return the traced path as well as what it hit.\n\n@return Whether the path hit anything after tracing the maximum distance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, "TraceBallisticProjectilePath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_NoRegister()
	{
		return UTobiiInteractionsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile, "FindNeededAccelerationForAccelerationBasedHomingProjectile" }, // 273342320
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile, "FindNeededInitialVelocityForBallisticProjectile" }, // 1964334380
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots, "FindRealCubicRoots" }, // 301627567
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots, "FindRealQuarticRoots" }, // 2551401213
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots, "FindRealSquareRoots" }, // 3407222560
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_GetInfiniteScreenAngles, "GetInfiniteScreenAngles" }, // 1864596761
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled, "IsAimAtGazeEnabled" }, // 3039482286
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled, "IsCleanUIEnabled" }, // 770546116
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled, "IsFireAtGazeEnabled" }, // 2672583252
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled, "IsInfiniteScreenEnabled" }, // 3214176436
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled, "IsThrowAtGazeEnabled" }, // 2693038893
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath, "TraceBallisticProjectilePath" }, // 605679931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TobiiInteractionsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiInteractionsBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::ClassParams = {
		&UTobiiInteractionsBlueprintLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiInteractionsBlueprintLibrary, 1473326245);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiInteractionsBlueprintLibrary(Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, &UTobiiInteractionsBlueprintLibrary::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiInteractionsBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiInteractionsBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
