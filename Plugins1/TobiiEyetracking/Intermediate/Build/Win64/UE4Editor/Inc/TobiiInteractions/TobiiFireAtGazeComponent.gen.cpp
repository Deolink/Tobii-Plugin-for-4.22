// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/Desktop/TobiiFireAtGazeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiFireAtGazeComponent() {}
// Cross Module References
	TOBIIINTERACTIONS_API UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiFireAtGazeNoTargetBehavior();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiFireAtGazeComponent_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiFireAtGazeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent_NoRegister();
// End Cross Module References
	static UEnum* ETobiiFireAtGazeNoTargetBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TobiiInteractions_ETobiiFireAtGazeNoTargetBehavior, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("ETobiiFireAtGazeNoTargetBehavior"));
		}
		return Singleton;
	}
	template<> TOBIIINTERACTIONS_API UEnum* StaticEnum<ETobiiFireAtGazeNoTargetBehavior>()
	{
		return ETobiiFireAtGazeNoTargetBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETobiiFireAtGazeNoTargetBehavior(ETobiiFireAtGazeNoTargetBehavior_StaticEnum, TEXT("/Script/TobiiInteractions"), TEXT("ETobiiFireAtGazeNoTargetBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TobiiInteractions_ETobiiFireAtGazeNoTargetBehavior_Hash() { return 4024563728U; }
	UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiFireAtGazeNoTargetBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETobiiFireAtGazeNoTargetBehavior"), 0, Get_Z_Construct_UEnum_TobiiInteractions_ETobiiFireAtGazeNoTargetBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETobiiFireAtGazeNoTargetBehavior::PointGunForward", (int64)ETobiiFireAtGazeNoTargetBehavior::PointGunForward },
				{ "ETobiiFireAtGazeNoTargetBehavior::PointGunToGaze", (int64)ETobiiFireAtGazeNoTargetBehavior::PointGunToGaze },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TobiiInteractions,
				nullptr,
				"ETobiiFireAtGazeNoTargetBehavior",
				"ETobiiFireAtGazeNoTargetBehavior",
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
	void UTobiiFireAtGazeComponent::StaticRegisterNativesUTobiiFireAtGazeComponent()
	{
		UClass* Class = UTobiiFireAtGazeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireAtGazeAvailable", &UTobiiFireAtGazeComponent::execFireAtGazeAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics
	{
		struct TobiiFireAtGazeComponent_eventFireAtGazeAvailable_Parms
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
	void Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiFireAtGazeComponent_eventFireAtGazeAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiFireAtGazeComponent_eventFireAtGazeAvailable_Parms), &Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fire@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
		{ "ToolTip", "Use this to test if the user has turned fire@gaze on and it is available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiFireAtGazeComponent, nullptr, "FireAtGazeAvailable", sizeof(TobiiFireAtGazeComponent_eventFireAtGazeAvailable_Parms), Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiFireAtGazeComponent_NoRegister()
	{
		return UTobiiFireAtGazeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoTargetBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NoTargetBehavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NoTargetBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAtGazeTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireAtGazeTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAtGazeTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FireAtGazeTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiFireAtGazeComponent_FireAtGazeAvailable, "FireAtGazeAvailable" }, // 1836607090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Desktop/TobiiFireAtGazeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Fire@gaze Settings" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiFireAtGazeComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_TraceChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_NoTargetBehavior_MetaData[] = {
		{ "Category", "Fire@gaze Settings" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_NoTargetBehavior = { "NoTargetBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiFireAtGazeComponent, NoTargetBehavior), Z_Construct_UEnum_TobiiInteractions_ETobiiFireAtGazeNoTargetBehavior, METADATA_PARAMS(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_NoTargetBehavior_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_NoTargetBehavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_NoTargetBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Fire@gaze Settings" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiFireAtGazeComponent, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_MaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetLocation_MetaData[] = {
		{ "Category", "Fire@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetLocation = { "FireAtGazeTargetLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiFireAtGazeComponent, FireAtGazeTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetActor_MetaData[] = {
		{ "Category", "Fire@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetActor = { "FireAtGazeTargetActor", nullptr, (EPropertyFlags)0x0014000000020015, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiFireAtGazeComponent, FireAtGazeTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Fire@gaze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiFireAtGazeComponent, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FocusManager_MetaData[] = {
		{ "Category", "Fire@gaze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiFireAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FocusManager = { "FocusManager", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiFireAtGazeComponent, FocusManager), Z_Construct_UClass_UTobiiGazeFocusManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FocusManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FocusManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_NoTargetBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_NoTargetBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FireAtGazeTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::NewProp_FocusManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiFireAtGazeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::ClassParams = {
		&UTobiiFireAtGazeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiFireAtGazeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiFireAtGazeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiFireAtGazeComponent, 498758546);
	template<> TOBIIINTERACTIONS_API UClass* StaticClass<UTobiiFireAtGazeComponent>()
	{
		return UTobiiFireAtGazeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiFireAtGazeComponent(Z_Construct_UClass_UTobiiFireAtGazeComponent, &UTobiiFireAtGazeComponent::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiFireAtGazeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiFireAtGazeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
