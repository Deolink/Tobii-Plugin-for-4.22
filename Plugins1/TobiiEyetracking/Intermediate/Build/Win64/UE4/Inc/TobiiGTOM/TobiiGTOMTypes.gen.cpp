// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiGTOM/Public/TobiiGTOMTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiGTOMTypes() {}
// Cross Module References
	TOBIIGTOM_API UEnum* Z_Construct_UEnum_TobiiGTOM_ETobiiCleanUIMode();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM();
	TOBIIGTOM_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeFocusData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusableWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* ETobiiCleanUIMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TobiiGTOM_ETobiiCleanUIMode, Z_Construct_UPackage__Script_TobiiGTOM(), TEXT("ETobiiCleanUIMode"));
		}
		return Singleton;
	}
	template<> TOBIIGTOM_API UEnum* StaticEnum<ETobiiCleanUIMode>()
	{
		return ETobiiCleanUIMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETobiiCleanUIMode(ETobiiCleanUIMode_StaticEnum, TEXT("/Script/TobiiGTOM"), TEXT("ETobiiCleanUIMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TobiiGTOM_ETobiiCleanUIMode_Hash() { return 782253677U; }
	UEnum* Z_Construct_UEnum_TobiiGTOM_ETobiiCleanUIMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiGTOM();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETobiiCleanUIMode"), 0, Get_Z_Construct_UEnum_TobiiGTOM_ETobiiCleanUIMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETobiiCleanUIMode::Disabled", (int64)ETobiiCleanUIMode::Disabled },
				{ "ETobiiCleanUIMode::Normal", (int64)ETobiiCleanUIMode::Normal },
				{ "ETobiiCleanUIMode::FocusExclusive", (int64)ETobiiCleanUIMode::FocusExclusive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FocusExclusive.ToolTip", "CleanUI will only consider the gaze point for determining alpha, and will ignore nearby widgets." },
				{ "ModuleRelativePath", "Public/TobiiGTOMTypes.h" },
				{ "Normal.ToolTip", "CleanUI is disabled for this widget." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TobiiGTOM,
				nullptr,
				"ETobiiCleanUIMode",
				"ETobiiCleanUIMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTobiiGazeFocusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIIGTOM_API uint32 Get_Z_Construct_UScriptStruct_FTobiiGazeFocusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiGazeFocusData, Z_Construct_UPackage__Script_TobiiGTOM(), TEXT("TobiiGazeFocusData"), sizeof(FTobiiGazeFocusData), Get_Z_Construct_UScriptStruct_FTobiiGazeFocusData_Hash());
	}
	return Singleton;
}
template<> TOBIIGTOM_API UScriptStruct* StaticStruct<FTobiiGazeFocusData>()
{
	return FTobiiGazeFocusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiGazeFocusData(FTobiiGazeFocusData::StaticStruct, TEXT("/Script/TobiiGTOM"), TEXT("TobiiGazeFocusData"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiGTOM_StaticRegisterNativesFTobiiGazeFocusData
{
	FScriptStruct_TobiiGTOM_StaticRegisterNativesFTobiiGazeFocusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiGazeFocusData")),new UScriptStruct::TCppStructOps<FTobiiGazeFocusData>);
	}
} ScriptStruct_TobiiGTOM_StaticRegisterNativesFTobiiGazeFocusData;
	struct Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusConfidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusConfidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastVisibleWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastVisibleWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FocusedWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedPrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FocusedPrimitiveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FocusedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiGTOMTypes.h" },
		{ "ToolTip", "Information about an object that is being considered when determining user focus.\nWhen utilizing gaze, this is almost always what you should be using as your input data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiGazeFocusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusConfidence_MetaData[] = {
		{ "Category", "Focus Data" },
		{ "ModuleRelativePath", "Public/TobiiGTOMTypes.h" },
		{ "ToolTip", "This is how confident the focus system is that this object is in focus. The object with the highest confidence is not necessarily the object with focus however." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusConfidence = { "FocusConfidence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiGazeFocusData, FocusConfidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusConfidence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusConfidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_LastVisibleWorldLocation_MetaData[] = {
		{ "Category", "Focus Data" },
		{ "ModuleRelativePath", "Public/TobiiGTOMTypes.h" },
		{ "ToolTip", "This is the point on the Focused Primitive Component that was last confirmed visible to the user. This is very useful when aligning objects towards a focused object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_LastVisibleWorldLocation = { "LastVisibleWorldLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiGazeFocusData, LastVisibleWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_LastVisibleWorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_LastVisibleWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedWidget_MetaData[] = {
		{ "Category", "Focus Data" },
		{ "ModuleRelativePath", "Public/TobiiGTOMTypes.h" },
		{ "ToolTip", "This is the primitive component that is most likely to hold the user's focus." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedWidget = { "FocusedWidget", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiGazeFocusData, FocusedWidget), Z_Construct_UClass_UTobiiGazeFocusableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedWidget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedPrimitiveComponent_MetaData[] = {
		{ "Category", "Focus Data" },
		{ "ModuleRelativePath", "Public/TobiiGTOMTypes.h" },
		{ "ToolTip", "This is the primitive component that is most likely to hold the user's focus." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedPrimitiveComponent = { "FocusedPrimitiveComponent", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiGazeFocusData, FocusedPrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedPrimitiveComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedPrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedActor_MetaData[] = {
		{ "Category", "Focus Data" },
		{ "ModuleRelativePath", "Public/TobiiGTOMTypes.h" },
		{ "ToolTip", "This is the actor that the Focused Primitive Component belongs to." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedActor = { "FocusedActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiGazeFocusData, FocusedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusConfidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_LastVisibleWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedPrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::NewProp_FocusedActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
		nullptr,
		&NewStructOps,
		"TobiiGazeFocusData",
		sizeof(FTobiiGazeFocusData),
		alignof(FTobiiGazeFocusData),
		Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeFocusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiGazeFocusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiGTOM();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiGazeFocusData"), sizeof(FTobiiGazeFocusData), Get_Z_Construct_UScriptStruct_FTobiiGazeFocusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiGazeFocusData_Hash() { return 1304938181U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
