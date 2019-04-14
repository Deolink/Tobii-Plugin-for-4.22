// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiCore/Public/TobiiTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiTypes() {}
// Cross Module References
	TOBIICORE_API UEnum* Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerCapability();
	UPackage* Z_Construct_UPackage__Script_TobiiCore();
	TOBIICORE_API UEnum* Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiDesktopTrackBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiDisplayInfo();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiHeadPoseData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* ETobiiGazeTrackerCapability_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerCapability, Z_Construct_UPackage__Script_TobiiCore(), TEXT("ETobiiGazeTrackerCapability"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETobiiGazeTrackerCapability(ETobiiGazeTrackerCapability_StaticEnum, TEXT("/Script/TobiiCore"), TEXT("ETobiiGazeTrackerCapability"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerCapability_CRC() { return 849600821U; }
	UEnum* Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerCapability()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETobiiGazeTrackerCapability"), 0, Get_Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerCapability_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETobiiGazeTrackerCapability::CombinedGazeData", (int64)ETobiiGazeTrackerCapability::CombinedGazeData },
				{ "ETobiiGazeTrackerCapability::LeftGazeData", (int64)ETobiiGazeTrackerCapability::LeftGazeData },
				{ "ETobiiGazeTrackerCapability::RightGazeData", (int64)ETobiiGazeTrackerCapability::RightGazeData },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CombinedGazeData.DisplayName", "Supports Combined Gaze Data" },
				{ "LeftGazeData.DisplayName", "Supports Left Eye Gaze Data" },
				{ "LeftGazeData.ToolTip", "This gaze tracker can deliver combined gaze data." },
				{ "ModuleRelativePath", "Public/TobiiTypes.h" },
				{ "RightGazeData.DisplayName", "Supports Right Eye Gaze Data" },
				{ "RightGazeData.ToolTip", "This gaze tracker can deliver individual gaze data for the left eye." },
				{ "ToolTip", "Some gaze trackers might only be able to deliver data for one eye, and others might be able to serve data for both.\nIf you are planning to use the left or right gaze data functions, checking that the gaze tracker you are working with supports them is recommended." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TobiiCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETobiiGazeTrackerCapability",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETobiiGazeTrackerCapability",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETobiiGazeTrackerStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus, Z_Construct_UPackage__Script_TobiiCore(), TEXT("ETobiiGazeTrackerStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETobiiGazeTrackerStatus(ETobiiGazeTrackerStatus_StaticEnum, TEXT("/Script/TobiiCore"), TEXT("ETobiiGazeTrackerStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus_CRC() { return 1533791864U; }
	UEnum* Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETobiiGazeTrackerStatus"), 0, Get_Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETobiiGazeTrackerStatus::NotConnected", (int64)ETobiiGazeTrackerStatus::NotConnected },
				{ "ETobiiGazeTrackerStatus::NotConfigured", (int64)ETobiiGazeTrackerStatus::NotConfigured },
				{ "ETobiiGazeTrackerStatus::Disabled", (int64)ETobiiGazeTrackerStatus::Disabled },
				{ "ETobiiGazeTrackerStatus::UserNotPresent", (int64)ETobiiGazeTrackerStatus::UserNotPresent },
				{ "ETobiiGazeTrackerStatus::UserPresent", (int64)ETobiiGazeTrackerStatus::UserPresent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.DisplayName", "Disabled" },
				{ "Disabled.ToolTip", "The gaze tracker is connected, but cannot track as it is missing some important configuration step." },
				{ "ModuleRelativePath", "Public/TobiiTypes.h" },
				{ "NotConfigured.DisplayName", "Not Configured" },
				{ "NotConfigured.ToolTip", "The gaze tracker is not connected to UE4 for some reason. The tracker might not be plugged in, the game window is currently running on a screen without a gaze tracker or is otherwise not available." },
				{ "NotConnected.DisplayName", "Not Connected" },
				{ "ToolTip", "Describes the current state of the gaze tracker. Is designed in such a way as later values indicates a higher level of readiness to make it easy to use in interactions." },
				{ "UserNotPresent.DisplayName", "User Not Present" },
				{ "UserNotPresent.ToolTip", "Gaze Tracking has been disabled by the user or developer or some other eventuality, like for example the game being minimized which might suspend the tracking." },
				{ "UserPresent.DisplayName", "User Present" },
				{ "UserPresent.ToolTip", "The gaze tracker is running but has not yet detected a user. Not relevant in XR." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TobiiCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETobiiGazeTrackerStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETobiiGazeTrackerStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTobiiDesktopTrackBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIICORE_API uint32 Get_Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox, Z_Construct_UPackage__Script_TobiiCore(), TEXT("TobiiDesktopTrackBox"), sizeof(FTobiiDesktopTrackBox), Get_Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiDesktopTrackBox(FTobiiDesktopTrackBox::StaticStruct, TEXT("/Script/TobiiCore"), TEXT("TobiiDesktopTrackBox"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiCore_StaticRegisterNativesFTobiiDesktopTrackBox
{
	FScriptStruct_TobiiCore_StaticRegisterNativesFTobiiDesktopTrackBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiDesktopTrackBox")),new UScriptStruct::TCppStructOps<FTobiiDesktopTrackBox>);
	}
} ScriptStruct_TobiiCore_StaticRegisterNativesFTobiiDesktopTrackBox;
	struct Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackLowerRightPointCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackLowerRightPointCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackLowerLeftPointCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackLowerLeftPointCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackUpperLeftPointCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackUpperLeftPointCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackUpperRightPointCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackUpperRightPointCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontLowerRightPointCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontLowerRightPointCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontLowerLeftPointCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontLowerLeftPointCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontUpperLeftPointCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontUpperLeftPointCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontUpperRightPointCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontUpperRightPointCm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the vertices for the desktop only track box expressed in Tobii User Coordinate System coordinates.\nThis coordinate system has its origin in the middle of the active display. X+ is towards the user's right. Y+ is up. Z+ is away from the screen towards the user.\nSee general API documentation for details." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiDesktopTrackBox>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerRightPointCm_MetaData[] = {
		{ "Category", "Track Box" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerRightPointCm = { UE4CodeGen_Private::EPropertyClass::Struct, "BackLowerRightPointCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDesktopTrackBox, BackLowerRightPointCm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerRightPointCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerRightPointCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerLeftPointCm_MetaData[] = {
		{ "Category", "Track Box" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerLeftPointCm = { UE4CodeGen_Private::EPropertyClass::Struct, "BackLowerLeftPointCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDesktopTrackBox, BackLowerLeftPointCm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerLeftPointCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerLeftPointCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperLeftPointCm_MetaData[] = {
		{ "Category", "Track Box" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperLeftPointCm = { UE4CodeGen_Private::EPropertyClass::Struct, "BackUpperLeftPointCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDesktopTrackBox, BackUpperLeftPointCm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperLeftPointCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperLeftPointCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperRightPointCm_MetaData[] = {
		{ "Category", "Track Box" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperRightPointCm = { UE4CodeGen_Private::EPropertyClass::Struct, "BackUpperRightPointCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDesktopTrackBox, BackUpperRightPointCm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperRightPointCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperRightPointCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerRightPointCm_MetaData[] = {
		{ "Category", "Track Box" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerRightPointCm = { UE4CodeGen_Private::EPropertyClass::Struct, "FrontLowerRightPointCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDesktopTrackBox, FrontLowerRightPointCm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerRightPointCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerRightPointCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerLeftPointCm_MetaData[] = {
		{ "Category", "Track Box" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerLeftPointCm = { UE4CodeGen_Private::EPropertyClass::Struct, "FrontLowerLeftPointCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDesktopTrackBox, FrontLowerLeftPointCm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerLeftPointCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerLeftPointCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperLeftPointCm_MetaData[] = {
		{ "Category", "Track Box" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperLeftPointCm = { UE4CodeGen_Private::EPropertyClass::Struct, "FrontUpperLeftPointCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDesktopTrackBox, FrontUpperLeftPointCm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperLeftPointCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperLeftPointCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperRightPointCm_MetaData[] = {
		{ "Category", "Track Box" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "These are the extreme points of the eye tracker tracking frustum where we get optimal tracking quality in centimeters. These are in the Tobii User Coordinate System." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperRightPointCm = { UE4CodeGen_Private::EPropertyClass::Struct, "FrontUpperRightPointCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDesktopTrackBox, FrontUpperRightPointCm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperRightPointCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperRightPointCm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerRightPointCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackLowerLeftPointCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperLeftPointCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_BackUpperRightPointCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerRightPointCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontLowerLeftPointCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperLeftPointCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::NewProp_FrontUpperRightPointCm,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiCore,
		nullptr,
		&NewStructOps,
		"TobiiDesktopTrackBox",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTobiiDesktopTrackBox),
		alignof(FTobiiDesktopTrackBox),
		Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiDesktopTrackBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiDesktopTrackBox"), sizeof(FTobiiDesktopTrackBox), Get_Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiDesktopTrackBox_CRC() { return 1501147771U; }
class UScriptStruct* FTobiiDisplayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIICORE_API uint32 Get_Z_Construct_UScriptStruct_FTobiiDisplayInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiDisplayInfo, Z_Construct_UPackage__Script_TobiiCore(), TEXT("TobiiDisplayInfo"), sizeof(FTobiiDisplayInfo), Get_Z_Construct_UScriptStruct_FTobiiDisplayInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiDisplayInfo(FTobiiDisplayInfo::StaticStruct, TEXT("/Script/TobiiCore"), TEXT("TobiiDisplayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiCore_StaticRegisterNativesFTobiiDisplayInfo
{
	FScriptStruct_TobiiCore_StaticRegisterNativesFTobiiDisplayInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiDisplayInfo")),new UScriptStruct::TCppStructOps<FTobiiDisplayInfo>);
	}
} ScriptStruct_TobiiCore_StaticRegisterNativesFTobiiDisplayInfo;
	struct Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DpiScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DpiScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainViewportHeightCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MainViewportHeightCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainViewportWidthCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MainViewportWidthCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainViewportHeightPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MainViewportHeightPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainViewportWidthPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MainViewportWidthPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorHeightCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MonitorHeightCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorWidthCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MonitorWidthCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorHeightPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MonitorHeightPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorWidthPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MonitorWidthPx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "Information regarding the display associated with the currently active eye tracker." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiDisplayInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_DpiScale_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the dpi scale of the monitor the game is running on" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_DpiScale = { UE4CodeGen_Private::EPropertyClass::Float, "DpiScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, DpiScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_DpiScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_DpiScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightCm_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the height of the main game viewport in centimeters as calculated using data from the game and the eyetracker. Centimeters is also the measurement used for unreal units." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightCm = { UE4CodeGen_Private::EPropertyClass::Float, "MainViewportHeightCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, MainViewportHeightCm), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthCm_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the width of the main game viewport in centimeters as calculated using data from the game and the eyetracker. Centimeters is also the measurement used for unreal units." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthCm = { UE4CodeGen_Private::EPropertyClass::Float, "MainViewportWidthCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, MainViewportWidthCm), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightPx_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the height in pixels of the main game viewport as reported by the game." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightPx = { UE4CodeGen_Private::EPropertyClass::Int, "MainViewportHeightPx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, MainViewportHeightPx), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightPx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthPx_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the width in pixels of the main game viewport as reported by the game." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthPx = { UE4CodeGen_Private::EPropertyClass::Int, "MainViewportWidthPx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, MainViewportWidthPx), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthPx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightCm_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the height in centimeters of the monitor the active eyetracker is attached to as reported by the eyetracker. Centimeters is also the measurement used for unreal units." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightCm = { UE4CodeGen_Private::EPropertyClass::Float, "MonitorHeightCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, MonitorHeightCm), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthCm_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the width in centimeters of the monitor the active eyetracker is attached to as reported by the eyetracker. Centimeters is also the measurement used for unreal units." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthCm = { UE4CodeGen_Private::EPropertyClass::Float, "MonitorWidthCm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, MonitorWidthCm), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthCm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightPx_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the height in pixels of the monitor the game is running on as reported by windows." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightPx = { UE4CodeGen_Private::EPropertyClass::Int, "MonitorHeightPx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, MonitorHeightPx), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightPx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthPx_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the width in pixels of the monitor the game is running on as reported by windows." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthPx = { UE4CodeGen_Private::EPropertyClass::Int, "MonitorWidthPx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTobiiDisplayInfo, MonitorWidthPx), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthPx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthPx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_DpiScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportHeightPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MainViewportWidthPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorHeightPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::NewProp_MonitorWidthPx,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiCore,
		nullptr,
		&NewStructOps,
		"TobiiDisplayInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTobiiDisplayInfo),
		alignof(FTobiiDisplayInfo),
		Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiDisplayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiDisplayInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiDisplayInfo"), sizeof(FTobiiDisplayInfo), Get_Z_Construct_UScriptStruct_FTobiiDisplayInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiDisplayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiDisplayInfo_CRC() { return 3112588284U; }
class UScriptStruct* FTobiiHeadPoseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIICORE_API uint32 Get_Z_Construct_UScriptStruct_FTobiiHeadPoseData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiHeadPoseData, Z_Construct_UPackage__Script_TobiiCore(), TEXT("TobiiHeadPoseData"), sizeof(FTobiiHeadPoseData), Get_Z_Construct_UScriptStruct_FTobiiHeadPoseData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiHeadPoseData(FTobiiHeadPoseData::StaticStruct, TEXT("/Script/TobiiCore"), TEXT("TobiiHeadPoseData"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiCore_StaticRegisterNativesFTobiiHeadPoseData
{
	FScriptStruct_TobiiCore_StaticRegisterNativesFTobiiHeadPoseData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiHeadPoseData")),new UScriptStruct::TCppStructOps<FTobiiHeadPoseData>);
	}
} ScriptStruct_TobiiCore_StaticRegisterNativesFTobiiHeadPoseData;
	struct Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "Location and orientation of the head." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiHeadPoseData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadOrientation_MetaData[] = {
		{ "Category", "Head Pose Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the local space orientation of the head." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadOrientation = { UE4CodeGen_Private::EPropertyClass::Struct, "HeadOrientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiHeadPoseData, HeadOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadOrientation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadLocation_MetaData[] = {
		{ "Category", "Head Pose Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is the local space location of the head relative to the device specified origin in centimeters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HeadLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiHeadPoseData, HeadLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::NewProp_HeadLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiCore,
		nullptr,
		&NewStructOps,
		"TobiiHeadPoseData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTobiiHeadPoseData),
		alignof(FTobiiHeadPoseData),
		Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiHeadPoseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiHeadPoseData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiHeadPoseData"), sizeof(FTobiiHeadPoseData), Get_Z_Construct_UScriptStruct_FTobiiHeadPoseData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiHeadPoseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiHeadPoseData_CRC() { return 3250656607U; }
class UScriptStruct* FTobiiGazeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIICORE_API uint32 Get_Z_Construct_UScriptStruct_FTobiiGazeData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiGazeData, Z_Construct_UPackage__Script_TobiiCore(), TEXT("TobiiGazeData"), sizeof(FTobiiGazeData), Get_Z_Construct_UScriptStruct_FTobiiGazeData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiGazeData(FTobiiGazeData::StaticStruct, TEXT("/Script/TobiiCore"), TEXT("TobiiGazeData"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiCore_StaticRegisterNativesFTobiiGazeData
{
	FScriptStruct_TobiiCore_StaticRegisterNativesFTobiiGazeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiGazeData")),new UScriptStruct::TCppStructOps<FTobiiGazeData>);
	}
} ScriptStruct_TobiiCore_StaticRegisterNativesFTobiiGazeData;
	struct Z_Construct_UScriptStruct_FTobiiGazeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGazeDataValid_MetaData[];
#endif
		static void NewProp_bIsGazeDataValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGazeDataValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStable_MetaData[];
#endif
		static void NewProp_bIsStable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeOpenness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EyeOpenness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenGazeCircleRadiiPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenGazeCircleRadiiPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenGazePointPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenGazePointPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGazeConeAngleDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldGazeConeAngleDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGazeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldGazeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGazeOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldGazeOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "Structure that contains gaze information from one eye in both screen and world space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiGazeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsGazeDataValid_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "If this is true, all other properties related to the eye should be safe to use. This might be false because the tracking system is a mono tracker, or if the data is bad for this frame." },
	};
#endif
	void Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsGazeDataValid_SetBit(void* Obj)
	{
		((FTobiiGazeData*)Obj)->bIsGazeDataValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsGazeDataValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsGazeDataValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTobiiGazeData), &Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsGazeDataValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsGazeDataValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsGazeDataValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsStable_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "If the gaze point is moving slowly enough, it is considered stable. This is useful when trying to prevent false positives when the gaze point is moving past objects." },
	};
#endif
	void Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsStable_SetBit(void* Obj)
	{
		((FTobiiGazeData*)Obj)->bIsStable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsStable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTobiiGazeData), &Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsStable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsStable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsStable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_EyeOpenness_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "This is how open the eye is. 0 means closed, 1 means open." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_EyeOpenness = { UE4CodeGen_Private::EPropertyClass::Float, "EyeOpenness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiGazeData, EyeOpenness), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_EyeOpenness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_EyeOpenness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "Time when the gaze point was created." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Struct, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiGazeData, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_TimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazeCircleRadiiPx_MetaData[] = {
		{ "Category", "Screen Space Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "Due to how the eye works and imperfections in eye tracking technology, it makes more sense to express the screen space gaze field as an ellipse rather than a point. This is the extent of that ellipse expressed in pixels for the eye." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazeCircleRadiiPx = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenGazeCircleRadiiPx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiGazeData, ScreenGazeCircleRadiiPx), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazeCircleRadiiPx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazeCircleRadiiPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazePointPx_MetaData[] = {
		{ "Category", "Screen Space Gaze Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "The gaze point in screen space in pixels this frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazePointPx = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenGazePointPx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiGazeData, ScreenGazePointPx), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazePointPx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazePointPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeConeAngleDegrees_MetaData[] = {
		{ "Category", "World Space Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "Due to how the eye works and imperfections in eye tracking technology, it makes more sense to express the world gaze field as a cone rather than a ray. This angle is the angle between the Gaze Direction and the side of the cone expressed in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeConeAngleDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "WorldGazeConeAngleDegrees", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiGazeData, WorldGazeConeAngleDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeConeAngleDegrees_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeConeAngleDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeDirection_MetaData[] = {
		{ "Category", "World Space Gaze Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "Forward direction of the eye's gaze ray this frame in Unreal world space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldGazeDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiGazeData, WorldGazeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeOrigin_MetaData[] = {
		{ "Category", "World Space Gaze Data" },
		{ "ModuleRelativePath", "Public/TobiiTypes.h" },
		{ "ToolTip", "Origin of the eye's gaze ray in Unreal world space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldGazeOrigin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTobiiGazeData, WorldGazeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeOrigin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsGazeDataValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_bIsStable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_EyeOpenness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazeCircleRadiiPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_ScreenGazePointPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeConeAngleDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiGazeData_Statics::NewProp_WorldGazeOrigin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiGazeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiCore,
		nullptr,
		&NewStructOps,
		"TobiiGazeData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTobiiGazeData),
		alignof(FTobiiGazeData),
		Z_Construct_UScriptStruct_FTobiiGazeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiGazeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiGazeData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiGazeData"), sizeof(FTobiiGazeData), Get_Z_Construct_UScriptStruct_FTobiiGazeData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiGazeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiGazeData_CRC() { return 3386511819U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
