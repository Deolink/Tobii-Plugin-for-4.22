// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiGTOM/Public/TobiiGTOMBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiGTOMBlueprintLibrary() {}
// Cross Module References
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGTOMBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection();
	TOBIIGTOM_API UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void UTobiiGTOMBlueprintLibrary::StaticRegisterNativesUTobiiGTOMBlueprintLibrary()
	{
		UClass* Class = UTobiiGTOMBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindLargestInscribedAlignedRect", &UTobiiGTOMBlueprintLibrary::execFindLargestInscribedAlignedRect },
			{ "IsPrimitiveComponentGazeFocusable", &UTobiiGTOMBlueprintLibrary::execIsPrimitiveComponentGazeFocusable },
			{ "TestConeSphereIntersection", &UTobiiGTOMBlueprintLibrary::execTestConeSphereIntersection },
			{ "TestRectEllipseIntersection", &UTobiiGTOMBlueprintLibrary::execTestRectEllipseIntersection },
			{ "TransformWidgetLocalPointToWorld", &UTobiiGTOMBlueprintLibrary::execTransformWidgetLocalPointToWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms
		{
			float CircleSegmentAngleRad;
			float CircleRadius;
			FVector2D LargestInscribedRectSize;
			float DistanceToCenter;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToCenter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LargestInscribedRectSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CircleSegmentAngleRad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_DistanceToCenter = { "DistanceToCenter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms, DistanceToCenter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_LargestInscribedRectSize = { "LargestInscribedRectSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms, LargestInscribedRectSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms, CircleRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_CircleSegmentAngleRad = { "CircleSegmentAngleRad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms, CircleSegmentAngleRad), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_DistanceToCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_LargestInscribedRectSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_CircleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_CircleSegmentAngleRad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will find and return all real roots to the square equation Ax^2 + Bx + C = 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "FindLargestInscribedAlignedRect", sizeof(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will find and return all real roots to the square equation Ax^2 + Bx + C = 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "IsPrimitiveComponentGazeFocusable", sizeof(TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms
		{
			FVector ConeApex;
			FVector ConeDirection;
			float ConeAngleDeg;
			FVector SphereCenter;
			float SphereRadius;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeAngleDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeAngleDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeApex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeApex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, SphereRadius), METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter = { "SphereCenter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, SphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg = { "ConeAngleDeg", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, ConeAngleDeg), METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection = { "ConeDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, ConeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex = { "ConeApex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, ConeApex), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will test whether a right angle cone and a sphere intersects. Very useful for world space eye tracking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "TestConeSphereIntersection", sizeof(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms
		{
			FVector2D RectangleCenter;
			FVector2D RectangleRightAxis;
			FVector2D RectangleUpAxis;
			FVector2D RectangleExtents;
			FVector2D EllipseCenter;
			FVector2D EllipseRadii;
			float EllipseRotationDeg;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EllipseRotationDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EllipseRotationDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EllipseRadii_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EllipseRadii;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EllipseCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EllipseCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectangleExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectangleExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectangleUpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectangleUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectangleRightAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectangleRightAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectangleCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectangleCenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg = { "EllipseRotationDeg", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, EllipseRotationDeg), METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii = { "EllipseRadii", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, EllipseRadii), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter = { "EllipseCenter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, EllipseCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents = { "RectangleExtents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, RectangleExtents), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis = { "RectangleUpAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, RectangleUpAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis = { "RectangleRightAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, RectangleRightAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter = { "RectangleCenter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, RectangleCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will test whether a rectangle and a rotated ellipse intersects. Very useful for screen space eye tracking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "TestRectEllipseIntersection", sizeof(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms
		{
			UWidgetComponent* Component;
			FVector2D LocalWidgetLocation;
			FVector OutWorldLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalWidgetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalWidgetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_OutWorldLocation = { "OutWorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms, OutWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation = { "LocalWidgetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms, LocalWidgetLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms, Component), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_OutWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will project a local point in a widget hosted by a widget component into world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "TransformWidgetLocalPointToWorld", sizeof(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_NoRegister()
	{
		return UTobiiGTOMBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect, "FindLargestInscribedAlignedRect" }, // 346917105
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable, "IsPrimitiveComponentGazeFocusable" }, // 3702086598
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection, "TestConeSphereIntersection" }, // 3877596238
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection, "TestRectEllipseIntersection" }, // 494002018
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld, "TransformWidgetLocalPointToWorld" }, // 2084671782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TobiiGTOMBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiGTOMBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::ClassParams = {
		&UTobiiGTOMBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiGTOMBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiGTOMBlueprintLibrary, 3374910809);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiGTOMBlueprintLibrary>()
	{
		return UTobiiGTOMBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiGTOMBlueprintLibrary(Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, &UTobiiGTOMBlueprintLibrary::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiGTOMBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiGTOMBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
