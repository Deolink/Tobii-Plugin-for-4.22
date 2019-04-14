// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiGTOM_init() {}
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetHoverSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_GazeFocusReceivedSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_GazeFocusLostSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_WidgetGazeFocusSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_WidgetHoverSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_GazeFocusReceivedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_GazeFocusLostSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_FocusableGainedGazeFocusSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_FocusableLostGazeFocusSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TobiiGTOM",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE0BABDF3,
				0x32E88886,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
