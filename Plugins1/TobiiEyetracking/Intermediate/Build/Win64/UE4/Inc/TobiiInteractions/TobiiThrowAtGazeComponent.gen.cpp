// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/Common/TobiiThrowAtGazeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiThrowAtGazeComponent() {}
// Cross Module References
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiThrowAtGazeComponent_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiThrowAtGazeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex();
	TOBIIINTERACTIONS_API UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void UTobiiThrowAtGazeComponent::StaticRegisterNativesUTobiiThrowAtGazeComponent()
	{
		UClass* Class = UTobiiThrowAtGazeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateThrowArcComplex", &UTobiiThrowAtGazeComponent::execCalculateThrowArcComplex },
			{ "CalculateThrowArcSimple", &UTobiiThrowAtGazeComponent::execCalculateThrowArcSimple },
			{ "CalculateThrowAtGazeVectorComplex", &UTobiiThrowAtGazeComponent::execCalculateThrowAtGazeVectorComplex },
			{ "CalculateThrowAtGazeVectorSimple", &UTobiiThrowAtGazeComponent::execCalculateThrowAtGazeVectorSimple },
			{ "CorrectThrow", &UTobiiThrowAtGazeComponent::execCorrectThrow },
			{ "ThrowAtGazeAvailable", &UTobiiThrowAtGazeComponent::execThrowAtGazeAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCalculateThrowArcComplex_Parms
		{
			FVector ThrowOrigin;
			FVector TargetLocation;
			FVector TargetVelocity;
			FVector TargetAcceleration;
			FVector OutThrowVector;
			ETobiiThrowAtGazeResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutThrowVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcComplex_Parms, ReturnValue), Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_OutThrowVector = { "OutThrowVector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcComplex_Parms, OutThrowVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetAcceleration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetAcceleration = { "TargetAcceleration", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcComplex_Parms, TargetAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcComplex_Parms, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcComplex_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ThrowOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ThrowOrigin = { "ThrowOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcComplex_Parms, ThrowOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ThrowOrigin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ThrowOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_OutThrowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::NewProp_ThrowOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is a companion function to CalculateThrowAtGazeVectorComplex that lets you calculate a throw vector towards a world location.\nYou can specify target velocity and acceleration if you would like to.\n\n@param ThrowOrigin                  This is where the projectile will start.\n@param TargetLocation               This is where the target is.\n@param TargetVelocity               This is the target's velocity. Can be zero.\n@param TargetAcceleration   This is the target's acceleration. Can be zero.\n@param OutThrowVector               This is the force that should be applied to the projectile to reach the target.\n@return                                             The result of the calculation. Please note that in the case of OutOfRange, the best solution will still be returned in OutGazeThrowVector, adjusted to your max throw speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CalculateThrowArcComplex", sizeof(TobiiThrowAtGazeComponent_eventCalculateThrowArcComplex_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCalculateThrowArcSimple_Parms
		{
			FVector ThrowOrigin;
			FVector TargetLocation;
			FVector TargetVelocity;
			FVector TargetAcceleration;
			FVector OutThrowVector;
			ETobiiThrowAtGazeResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutThrowVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcSimple_Parms, ReturnValue), Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_OutThrowVector = { "OutThrowVector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcSimple_Parms, OutThrowVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetAcceleration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetAcceleration = { "TargetAcceleration", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcSimple_Parms, TargetAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcSimple_Parms, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcSimple_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ThrowOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ThrowOrigin = { "ThrowOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArcSimple_Parms, ThrowOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ThrowOrigin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ThrowOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_OutThrowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::NewProp_ThrowOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is a companion function to CalculateThrowAtGazeVectorSimple that lets you calculate a throw vector towards a world location.\nYou can specify target velocity and acceleration if you would like to.\n\n@param ThrowOrigin                  This is where the projectile will start.\n@param TargetLocation               This is where the target is.\n@param TargetVelocity               This is the target's velocity. Can be zero.\n@param TargetAcceleration   This is the target's acceleration. Can be zero.\n@param OutThrowVector               This is the force that should be applied to the projectile to reach the target.\n@return                                             The result of the calculation. Please note that in the case of OutOfRange, the best solution will still be returned in OutGazeThrowVector, adjusted to your max throw speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CalculateThrowArcSimple", sizeof(TobiiThrowAtGazeComponent_eventCalculateThrowArcSimple_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorComplex_Parms
		{
			FVector ThrowOrigin;
			FVector OutGazeThrowVector;
			ETobiiThrowAtGazeResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutGazeThrowVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorComplex_Parms, ReturnValue), Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_OutGazeThrowVector = { "OutGazeThrowVector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorComplex_Parms, OutGazeThrowVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ThrowOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ThrowOrigin = { "ThrowOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorComplex_Parms, ThrowOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ThrowOrigin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ThrowOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_OutGazeThrowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::NewProp_ThrowOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "Call this function to request an impulse vector to use for gaze throwing.\nThis function will start by testing the standard apex and force, and if that works it will just return it.\nIf no solution is found, the algorithm will test other apex heights until either MaxNrIterations is reached or a result is found.\n\n@param ThrowOrigin                  This is where the projectile will start.\n@param OutGazeThrowVector   This is the force that should be applied to the projectile to reach the target.\n@return                                             The result of the calculation. Please note that in the case of OutOfRange, the best solution will still be returned in OutGazeThrowVector, adjusted to your max throw speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CalculateThrowAtGazeVectorComplex", sizeof(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorComplex_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorSimple_Parms
		{
			FVector ThrowOrigin;
			FVector OutGazeThrowVector;
			ETobiiThrowAtGazeResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutGazeThrowVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorSimple_Parms, ReturnValue), Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_OutGazeThrowVector = { "OutGazeThrowVector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorSimple_Parms, OutGazeThrowVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ThrowOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ThrowOrigin = { "ThrowOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorSimple_Parms, ThrowOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ThrowOrigin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ThrowOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_OutGazeThrowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::NewProp_ThrowOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "Call this function to request an impulse vector to use for gaze throwing.\nThis function will try once, and give up if no valid vector is found.\nIt will also not test if there is something in the way of the arc.\n\n@param ThrowOrigin                  This is where the projectile will start.\n@param OutGazeThrowVector   This is the force that should be applied to the projectile to reach the target.\n@return                                             The result of the calculation. Please note that in the case of OutOfRange, the best solution will still be returned in OutGazeThrowVector, adjusted to your max throw speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CalculateThrowAtGazeVectorSimple", sizeof(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVectorSimple_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCorrectThrow_Parms
		{
			FVector ThrowOrigin;
			FVector OriginalThrowVector;
			float ThrowAngleThresholdDeg;
			float ThrowSpeedThresholdCmPerSec;
			bool bUseSimple;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseSimple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSimple;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowSpeedThresholdCmPerSec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowAngleThresholdDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalThrowVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalThrowVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_bUseSimple_SetBit(void* Obj)
	{
		((TobiiThrowAtGazeComponent_eventCorrectThrow_Parms*)Obj)->bUseSimple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_bUseSimple = { "bUseSimple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms), &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_bUseSimple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowSpeedThresholdCmPerSec = { "ThrowSpeedThresholdCmPerSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, ThrowSpeedThresholdCmPerSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowAngleThresholdDeg = { "ThrowAngleThresholdDeg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, ThrowAngleThresholdDeg), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector = { "OriginalThrowVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, OriginalThrowVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin = { "ThrowOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, ThrowOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_bUseSimple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowSpeedThresholdCmPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowAngleThresholdDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This function is useful when throwing things in XR and you have a throw vector from the player's attempt to throw something.\nDon't forget to set collision on the thing you're throwing etc before using this though, otherwise tracing might not work.\nIt will only correct trajectories where we can expect a direct hit, or where we are simply out of range.\n\n@param ThrowOrigin                          This is where the projectile will start.\n@param OriginalThrowVector          This is the throw vector supplied by the developer to correct.\n@param ThrowAngleThresholdDeg       If the angle difference between the OriginalThrowVector and the suggested vector is greater than this parameter, the vector will not be corrected. This is not applied if it is 0.\n@param ThrowSpeedThreshold          If the OriginalThrowVector speed is lower than the suggested vector's speed by at least this amount, the vector will not be corrected. This is measured in centimeters per second. This is not applied if it is 0.\n@param bUseSimple                           If this is true, CalculateThrowAtGazeVectorSimple is used in favor of the Complex version internally\n@return                                                     The potentially corrected throw vector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CorrectThrow", sizeof(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics
	{
		struct TobiiThrowAtGazeComponent_eventThrowAtGazeAvailable_Parms
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
	void Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiThrowAtGazeComponent_eventThrowAtGazeAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiThrowAtGazeComponent_eventThrowAtGazeAvailable_Parms), &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fire@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "ThrowAtGazeAvailable", sizeof(TobiiThrowAtGazeComponent_eventThrowAtGazeAvailable_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiThrowAtGazeComponent_NoRegister()
	{
		return UTobiiThrowAtGazeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomProjectileGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomProjectileGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomGravity_MetaData[];
#endif
		static void NewProp_bUseCustomGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldTraceIgnoreOwner_MetaData[];
#endif
		static void NewProp_bShouldTraceIgnoreOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldTraceIgnoreOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceIgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TraceIgnoreActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceIgnoreActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStepSizeSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceStepSizeSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNrTraceSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNrTraceSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceRadiusCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceRadiusCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumApexDeltaCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumApexDeltaCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowApexOffsetMaximumCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowApexOffsetMaximumCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowApexOffsetMinimumCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowApexOffsetMinimumCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldTraceResult_MetaData[];
#endif
		static void NewProp_bShouldTraceResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldTraceResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreferLowApexForTargetsBelowThrower_MetaData[];
#endif
		static void NewProp_bPreferLowApexForTargetsBelowThrower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreferLowApexForTargetsBelowThrower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNrTries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNrTries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowApexOffsetCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowApexOffsetCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxThrowSpeedCmPerSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxThrowSpeedCmPerSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ThrowTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcComplex, "CalculateThrowArcComplex" }, // 482255758
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArcSimple, "CalculateThrowArcSimple" }, // 2974012464
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorComplex, "CalculateThrowAtGazeVectorComplex" }, // 1698294945
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVectorSimple, "CalculateThrowAtGazeVectorSimple" }, // 897102642
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow, "CorrectThrow" }, // 1758677754
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable, "ThrowAtGazeAvailable" }, // 4197281975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Tobii" },
		{ "IncludePath", "Common/TobiiThrowAtGazeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This component will generate gaze contingent throw vectors on demand.\nYou can use this vector to either simulate a trajectory yourself, or simply apply it to the rigid body of some object." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity_MetaData[] = {
		{ "Category", "Throw@gaze Gravity" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bUseCustomGravity is true, this is the gravity that will be used in calculations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity = { "CustomProjectileGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, CustomProjectileGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_MetaData[] = {
		{ "Category", "Throw@gaze Gravity" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If this is false, the world gravity is used for calculations. If this is true, CustomProjectileGravity is used instead." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bUseCustomGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity = { "bUseCustomGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "Let's you ignore this component's owner collision when tracing." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bShouldTraceIgnoreOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner = { "bShouldTraceIgnoreOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If you have any additional actors that should be ignored by the tracing" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, TraceIgnoreActors), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_Inner = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is the channel that will be used when tracing." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, this is the length of each trace step done in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs = { "TraceStepSizeSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, TraceStepSizeSecs), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, this is the length of each trace step done." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps = { "MaxNrTraceSteps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MaxNrTraceSteps), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, this is the size that will be used for tracing. Should be larger or equal to the projectile size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm = { "TraceRadiusCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, TraceRadiusCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "When testing different apexes, if the delta between the last test and the next one is smaller than this value, tests will be aborted" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm = { "MinimumApexDeltaCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MinimumApexDeltaCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, an apex larger than this value will never be tested" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm = { "ThrowApexOffsetMaximumCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, ThrowApexOffsetMaximumCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, an apex smaller than this value will never be tested" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm = { "ThrowApexOffsetMinimumCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, ThrowApexOffsetMinimumCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If this is true, the algorithm will attempt to trace the solution in the world to make sure nothing is in the way." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bShouldTraceResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult = { "bShouldTraceResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If this is true, the algorithm will prefer low apexes rather than mid or high ones for a more natural looking throw." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bPreferLowApexForTargetsBelowThrower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower = { "bPreferLowApexForTargetsBelowThrower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTries_MetaData[] = {
		{ "Category", "Throw@gaze Complex" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If a solution could not be found with the current apex, the algorithm will try to find a valid apex up to a maximum number of times equal to this value" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTries = { "MaxNrTries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MaxNrTries), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm_MetaData[] = {
		{ "Category", "Throw@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is how high above the thrower the arc apex will be." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm = { "ThrowApexOffsetCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, ThrowApexOffsetCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs_MetaData[] = {
		{ "Category", "Throw@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "Throw force applied to the throw vector can never be greater than this value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs = { "MaxThrowSpeedCmPerSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MaxThrowSpeedCmPerSecs), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget_MetaData[] = {
		{ "Category", "Throw@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is the component that you're trying to hit with the throw. You can set this on the same frame you are trying to throw, but setting it earlier will allow the component to \"aim\" a bit better." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget = { "ThrowTarget", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, ThrowTarget), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiThrowAtGazeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::ClassParams = {
		&UTobiiThrowAtGazeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiThrowAtGazeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiThrowAtGazeComponent, 787272725);
	template<> TOBIIINTERACTIONS_API UClass* StaticClass<UTobiiThrowAtGazeComponent>()
	{
		return UTobiiThrowAtGazeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiThrowAtGazeComponent(Z_Construct_UClass_UTobiiThrowAtGazeComponent, &UTobiiThrowAtGazeComponent::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiThrowAtGazeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiThrowAtGazeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
