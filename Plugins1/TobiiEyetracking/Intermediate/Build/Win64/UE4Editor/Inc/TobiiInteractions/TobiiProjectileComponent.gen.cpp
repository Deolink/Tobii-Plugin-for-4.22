// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/Common/TobiiProjectileComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiProjectileComponent() {}
// Cross Module References
	TOBIIINTERACTIONS_API UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileGuidanceSystem();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	TOBIIINTERACTIONS_API UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileHomingBehavior();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiProjectileComponent_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiProjectileComponent();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TOBIIINTERACTIONS_API UFunction* Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* ETobiiProjectileGuidanceSystem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileGuidanceSystem, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("ETobiiProjectileGuidanceSystem"));
		}
		return Singleton;
	}
	template<> TOBIIINTERACTIONS_API UEnum* StaticEnum<ETobiiProjectileGuidanceSystem>()
	{
		return ETobiiProjectileGuidanceSystem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETobiiProjectileGuidanceSystem(ETobiiProjectileGuidanceSystem_StaticEnum, TEXT("/Script/TobiiInteractions"), TEXT("ETobiiProjectileGuidanceSystem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileGuidanceSystem_Hash() { return 1253776529U; }
	UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileGuidanceSystem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETobiiProjectileGuidanceSystem"), 0, Get_Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileGuidanceSystem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETobiiProjectileGuidanceSystem::Simple", (int64)ETobiiProjectileGuidanceSystem::Simple },
				{ "ETobiiProjectileGuidanceSystem::Prediction", (int64)ETobiiProjectileGuidanceSystem::Prediction },
				{ "ETobiiProjectileGuidanceSystem::ComplexPrediction", (int64)ETobiiProjectileGuidanceSystem::ComplexPrediction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ComplexPrediction.ToolTip", "This mode will predict possible impact times and locations to avoid orbiting. Considers position, velocity and acceleration. Is quite expensive." },
				{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
				{ "Prediction.ToolTip", "This is the default behavior. The projectile will home towards the target's last known location." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TobiiInteractions,
				nullptr,
				"ETobiiProjectileGuidanceSystem",
				"ETobiiProjectileGuidanceSystem",
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
	static UEnum* ETobiiProjectileHomingBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileHomingBehavior, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("ETobiiProjectileHomingBehavior"));
		}
		return Singleton;
	}
	template<> TOBIIINTERACTIONS_API UEnum* StaticEnum<ETobiiProjectileHomingBehavior>()
	{
		return ETobiiProjectileHomingBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETobiiProjectileHomingBehavior(ETobiiProjectileHomingBehavior_StaticEnum, TEXT("/Script/TobiiInteractions"), TEXT("ETobiiProjectileHomingBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileHomingBehavior_Hash() { return 1996078397U; }
	UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileHomingBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETobiiProjectileHomingBehavior"), 0, Get_Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileHomingBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETobiiProjectileHomingBehavior::Acceleration", (int64)ETobiiProjectileHomingBehavior::Acceleration },
				{ "ETobiiProjectileHomingBehavior::Steering", (int64)ETobiiProjectileHomingBehavior::Steering },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
				{ "Steering.ToolTip", "This is the default behavior. The projectile will accelerate towards the target. This also means the projectile will speed up. If this is not what you want, consider using another behavior." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TobiiInteractions,
				nullptr,
				"ETobiiProjectileHomingBehavior",
				"ETobiiProjectileHomingBehavior",
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
	void UTobiiProjectileComponent::StaticRegisterNativesUTobiiProjectileComponent()
	{
		UClass* Class = UTobiiProjectileComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartHoming", &UTobiiProjectileComponent::execStartHoming },
			{ "StopHoming", &UTobiiProjectileComponent::execStopHoming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics
	{
		struct TobiiProjectileComponent_eventStartHoming_Parms
		{
			USceneComponent* NewHomingTargetComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewHomingTargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHomingTargetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::NewProp_NewHomingTargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::NewProp_NewHomingTargetComponent = { "NewHomingTargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiProjectileComponent_eventStartHoming_Parms, NewHomingTargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::NewProp_NewHomingTargetComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::NewProp_NewHomingTargetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::NewProp_NewHomingTargetComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Homing" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "This function will attempt to set up the actor to start homing. This entails disabling physics simulation etc. Please note that if the actor is intersecting the ground or other geometry, the simulation might stop immediately since it will \"hit\" it. To avoid this, set the appropriate collision masks or turn off collision during launch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiProjectileComponent, nullptr, "StartHoming", sizeof(TobiiProjectileComponent_eventStartHoming_Parms), Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Homing" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiProjectileComponent, nullptr, "StopHoming", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiProjectileComponent_NoRegister()
	{
		return UTobiiProjectileComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiProjectileComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTargetOffCourse_MetaData[];
#endif
		static void NewProp_bTargetOffCourse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetOffCourse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationVectorTowardsTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelerationVectorTowardsTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidanceSystemTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GuidanceSystemTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidanceSystemMaximumTargetAngleDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GuidanceSystemMaximumTargetAngleDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidanceSystemUpdateFreq_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GuidanceSystemUpdateFreq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidanceSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuidanceSystem;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GuidanceSystem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringMaxTurnSpeedDegPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringMaxTurnSpeedDegPerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomingBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HomingBehavior;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HomingBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLifeTimeSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLifeTimeSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialFuelSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialFuelSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSpaceGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectedByGravity_MetaData[];
#endif
		static void NewProp_bAffectedByGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectedByGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiProjectileComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiProjectileComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiProjectileComponent_StartHoming, "StartHoming" }, // 1900454803
		{ &Z_Construct_UFunction_UTobiiProjectileComponent_StopHoming, "StopHoming" }, // 1513193227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Tobii" },
		{ "IncludePath", "Common/TobiiProjectileComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bTargetOffCourse_MetaData[] = {
		{ "Category", "Guidance System" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bTargetOffCourse_SetBit(void* Obj)
	{
		((UTobiiProjectileComponent*)Obj)->bTargetOffCourse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bTargetOffCourse = { "bTargetOffCourse", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiProjectileComponent), &Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bTargetOffCourse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bTargetOffCourse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bTargetOffCourse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_AccelerationVectorTowardsTarget_MetaData[] = {
		{ "Category", "Guidance System" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_AccelerationVectorTowardsTarget = { "AccelerationVectorTowardsTarget", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, AccelerationVectorTowardsTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_AccelerationVectorTowardsTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_AccelerationVectorTowardsTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemTarget_MetaData[] = {
		{ "Category", "Guidance System" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemTarget = { "GuidanceSystemTarget", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, GuidanceSystemTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemMaximumTargetAngleDeg_MetaData[] = {
		{ "Category", "Guidance System" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "Sometimes you might not want the homing behavior to track targets that are too far off course. This is the maximium angle allowed between the projectile forward vector and the vector towards the target. If this threshold is breached, the homing will stop. 0 means there is no threshold." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemMaximumTargetAngleDeg = { "GuidanceSystemMaximumTargetAngleDeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, GuidanceSystemMaximumTargetAngleDeg), METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemMaximumTargetAngleDeg_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemMaximumTargetAngleDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemUpdateFreq_MetaData[] = {
		{ "Category", "Guidance System" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "This is how often the guidance system will update it's target location. A higher frequency will be more expensive but more accurate and vice versa. The guidance system will never update more than once per frame. 0 means every frame." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemUpdateFreq = { "GuidanceSystemUpdateFreq", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, GuidanceSystemUpdateFreq), METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemUpdateFreq_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemUpdateFreq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystem_MetaData[] = {
		{ "Category", "Guidance System" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "Allows you to customize the targeting part of the homing behavior. The different options generally provide different trade offs between performance and accuracy. Good accuracy also helps to avoid orbiting projectiles." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystem = { "GuidanceSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, GuidanceSystem), Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileGuidanceSystem, METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystem_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_SteeringMaxTurnSpeedDegPerSec_MetaData[] = {
		{ "Category", "Homing" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "This is the fastest the projectile is able to turn when using the steering homing behavior." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_SteeringMaxTurnSpeedDegPerSec = { "SteeringMaxTurnSpeedDegPerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, SteeringMaxTurnSpeedDegPerSec), METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_SteeringMaxTurnSpeedDegPerSec_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_SteeringMaxTurnSpeedDegPerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_HomingBehavior_MetaData[] = {
		{ "Category", "Homing" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "Allows you to customize the homing behavior if you have homing projectiles on. The homing target will always be set to the user's gaze target." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_HomingBehavior = { "HomingBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, HomingBehavior), Z_Construct_UEnum_TobiiInteractions_ETobiiProjectileHomingBehavior, METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_HomingBehavior_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_HomingBehavior_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_HomingBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_MaxLifeTimeSecs_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "The projectile is destroyed if it manages to stay alive for this amount of time. 0 means infinite lifetime." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_MaxLifeTimeSecs = { "MaxLifeTimeSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, MaxLifeTimeSecs), METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_MaxLifeTimeSecs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_MaxLifeTimeSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialFuelSecs_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "If fuel runs out, homing behavior stops for the projectile. 0 means infinite fuel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialFuelSecs = { "InitialFuelSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, InitialFuelSecs), METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialFuelSecs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialFuelSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_WorldSpaceGravity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "If bAffectedByGravity is true, this is the gravity acceleration vector that will be applied to the projectile. If this is zero, the default GetGravityZ will be used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_WorldSpaceGravity = { "WorldSpaceGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, WorldSpaceGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_WorldSpaceGravity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_WorldSpaceGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bAffectedByGravity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "If this is true, gravity acceleration will be added to the projectile." },
	};
#endif
	void Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bAffectedByGravity_SetBit(void* Obj)
	{
		((UTobiiProjectileComponent*)Obj)->bAffectedByGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bAffectedByGravity = { "bAffectedByGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiProjectileComponent), &Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bAffectedByGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bAffectedByGravity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bAffectedByGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialVelocity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Common/TobiiProjectileComponent.h" },
		{ "ToolTip", "Use this if you need to set starting values from the outside, don't use Velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiProjectileComponent, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiProjectileComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bTargetOffCourse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_AccelerationVectorTowardsTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemMaximumTargetAngleDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystemUpdateFreq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_GuidanceSystem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_SteeringMaxTurnSpeedDegPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_HomingBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_HomingBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_MaxLifeTimeSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialFuelSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_WorldSpaceGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_bAffectedByGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiProjectileComponent_Statics::NewProp_InitialVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiProjectileComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiProjectileComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiProjectileComponent_Statics::ClassParams = {
		&UTobiiProjectileComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiProjectileComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiProjectileComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTobiiProjectileComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiProjectileComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiProjectileComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiProjectileComponent, 4070965529);
	template<> TOBIIINTERACTIONS_API UClass* StaticClass<UTobiiProjectileComponent>()
	{
		return UTobiiProjectileComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiProjectileComponent(Z_Construct_UClass_UTobiiProjectileComponent, &UTobiiProjectileComponent::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiProjectileComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiProjectileComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
