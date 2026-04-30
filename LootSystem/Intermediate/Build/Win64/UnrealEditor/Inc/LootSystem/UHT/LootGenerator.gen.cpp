// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLootGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootGenerator();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootGenerator_NoRegister();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootItemBase_NoRegister();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootMapConfig_NoRegister();
LOOTSYSTEM_API UEnum* Z_Construct_UEnum_LootSystem_ELootType();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULootGenerator Function GenerateLoot *************************************
struct Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics
{
	struct LootGenerator_eventGenerateLoot_Parms
	{
		ULootItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "Public/LootGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootGenerator_eventGenerateLoot_Parms, ReturnValue), Z_Construct_UClass_ULootItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULootGenerator, nullptr, "GenerateLoot", Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::LootGenerator_eventGenerateLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::LootGenerator_eventGenerateLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootGenerator_GenerateLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootGenerator_GenerateLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootGenerator::execGenerateLoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULootItemBase**)Z_Param__Result=P_THIS->GenerateLoot();
	P_NATIVE_END;
}
// ********** End Class ULootGenerator Function GenerateLoot ***************************************

// ********** Begin Class ULootGenerator Function GenerateLootUnique *******************************
struct Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics
{
	struct LootGenerator_eventGenerateLootUnique_Parms
	{
		TSet<ELootType> ExcludedTypes;
		ULootItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "Public/LootGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExcludedTypes_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExcludedTypes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ExcludedTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::NewProp_ExcludedTypes_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::NewProp_ExcludedTypes_ElementProp = { "ExcludedTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LootSystem_ELootType, METADATA_PARAMS(0, nullptr) }; // 2343231742
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::NewProp_ExcludedTypes = { "ExcludedTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootGenerator_eventGenerateLootUnique_Parms, ExcludedTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedTypes_MetaData), NewProp_ExcludedTypes_MetaData) }; // 2343231742
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootGenerator_eventGenerateLootUnique_Parms, ReturnValue), Z_Construct_UClass_ULootItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::NewProp_ExcludedTypes_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::NewProp_ExcludedTypes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::NewProp_ExcludedTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULootGenerator, nullptr, "GenerateLootUnique", Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::LootGenerator_eventGenerateLootUnique_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::LootGenerator_eventGenerateLootUnique_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootGenerator_GenerateLootUnique()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootGenerator_GenerateLootUnique_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootGenerator::execGenerateLootUnique)
{
	P_GET_TSET_REF(ELootType,Z_Param_Out_ExcludedTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULootItemBase**)Z_Param__Result=P_THIS->GenerateLootUnique(Z_Param_Out_ExcludedTypes);
	P_NATIVE_END;
}
// ********** End Class ULootGenerator Function GenerateLootUnique *********************************

// ********** Begin Class ULootGenerator Function SetPlayerLevel ***********************************
struct Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics
{
	struct LootGenerator_eventSetPlayerLevel_Parms
	{
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "Public/LootGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootGenerator_eventSetPlayerLevel_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULootGenerator, nullptr, "SetPlayerLevel", Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::LootGenerator_eventSetPlayerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::LootGenerator_eventSetPlayerLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootGenerator_SetPlayerLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootGenerator_SetPlayerLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootGenerator::execSetPlayerLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerLevel(Z_Param_NewLevel);
	P_NATIVE_END;
}
// ********** End Class ULootGenerator Function SetPlayerLevel *************************************

// ********** Begin Class ULootGenerator ***********************************************************
void ULootGenerator::StaticRegisterNativesULootGenerator()
{
	UClass* Class = ULootGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateLoot", &ULootGenerator::execGenerateLoot },
		{ "GenerateLootUnique", &ULootGenerator::execGenerateLootUnique },
		{ "SetPlayerLevel", &ULootGenerator::execSetPlayerLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULootGenerator;
UClass* ULootGenerator::GetPrivateStaticClass()
{
	using TClass = ULootGenerator;
	if (!Z_Registration_Info_UClass_ULootGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LootGenerator"),
			Z_Registration_Info_UClass_ULootGenerator.InnerSingleton,
			StaticRegisterNativesULootGenerator,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULootGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_ULootGenerator_NoRegister()
{
	return ULootGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULootGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LootGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LootGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapConfig_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "Public/LootGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPlayerLevel_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "Public/LootGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapConfig;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalPlayerLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootGenerator_GenerateLoot, "GenerateLoot" }, // 3927378555
		{ &Z_Construct_UFunction_ULootGenerator_GenerateLootUnique, "GenerateLootUnique" }, // 738956038
		{ &Z_Construct_UFunction_ULootGenerator_SetPlayerLevel, "SetPlayerLevel" }, // 695323170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootGenerator_Statics::NewProp_MapConfig = { "MapConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootGenerator, MapConfig), Z_Construct_UClass_ULootMapConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapConfig_MetaData), NewProp_MapConfig_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULootGenerator_Statics::NewProp_ExternalPlayerLevel = { "ExternalPlayerLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootGenerator, ExternalPlayerLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalPlayerLevel_MetaData), NewProp_ExternalPlayerLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootGenerator_Statics::NewProp_MapConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootGenerator_Statics::NewProp_ExternalPlayerLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULootGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootGenerator_Statics::ClassParams = {
	&ULootGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULootGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULootGenerator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootGenerator()
{
	if (!Z_Registration_Info_UClass_ULootGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootGenerator.OuterSingleton, Z_Construct_UClass_ULootGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootGenerator.OuterSingleton;
}
ULootGenerator::ULootGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootGenerator);
ULootGenerator::~ULootGenerator() {}
// ********** End Class ULootGenerator *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h__Script_LootSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootGenerator, ULootGenerator::StaticClass, TEXT("ULootGenerator"), &Z_Registration_Info_UClass_ULootGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootGenerator), 3054484059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h__Script_LootSystem_935233280(TEXT("/Script/LootSystem"),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h__Script_LootSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h__Script_LootSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
