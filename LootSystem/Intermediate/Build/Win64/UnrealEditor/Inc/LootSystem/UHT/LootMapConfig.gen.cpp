// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootMapConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLootMapConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootMapConfig();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootMapConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULootMapConfig ***********************************************************
void ULootMapConfig::StaticRegisterNativesULootMapConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULootMapConfig;
UClass* ULootMapConfig::GetPrivateStaticClass()
{
	using TClass = ULootMapConfig;
	if (!Z_Registration_Info_UClass_ULootMapConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LootMapConfig"),
			Z_Registration_Info_UClass_ULootMapConfig.InnerSingleton,
			StaticRegisterNativesULootMapConfig,
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
	return Z_Registration_Info_UClass_ULootMapConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_ULootMapConfig_NoRegister()
{
	return ULootMapConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULootMapConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LootMapConfig.h" },
		{ "ModuleRelativePath", "Public/LootMapConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapLootTable_MetaData[] = {
		{ "Category", "LootMapConfig" },
		{ "ModuleRelativePath", "Public/LootMapConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLootLevel_MetaData[] = {
		{ "Category", "LootMapConfig" },
		{ "ModuleRelativePath", "Public/LootMapConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLootLevel_MetaData[] = {
		{ "Category", "LootMapConfig" },
		{ "ModuleRelativePath", "Public/LootMapConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapLootTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLootLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLootLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootMapConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootMapConfig_Statics::NewProp_MapLootTable = { "MapLootTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootMapConfig, MapLootTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapLootTable_MetaData), NewProp_MapLootTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULootMapConfig_Statics::NewProp_MinLootLevel = { "MinLootLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootMapConfig, MinLootLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLootLevel_MetaData), NewProp_MinLootLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULootMapConfig_Statics::NewProp_MaxLootLevel = { "MaxLootLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootMapConfig, MaxLootLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLootLevel_MetaData), NewProp_MaxLootLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootMapConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootMapConfig_Statics::NewProp_MapLootTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootMapConfig_Statics::NewProp_MinLootLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootMapConfig_Statics::NewProp_MaxLootLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootMapConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULootMapConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootMapConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootMapConfig_Statics::ClassParams = {
	&ULootMapConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULootMapConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULootMapConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootMapConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootMapConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootMapConfig()
{
	if (!Z_Registration_Info_UClass_ULootMapConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootMapConfig.OuterSingleton, Z_Construct_UClass_ULootMapConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootMapConfig.OuterSingleton;
}
ULootMapConfig::ULootMapConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootMapConfig);
ULootMapConfig::~ULootMapConfig() {}
// ********** End Class ULootMapConfig *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h__Script_LootSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootMapConfig, ULootMapConfig::StaticClass, TEXT("ULootMapConfig"), &Z_Registration_Info_UClass_ULootMapConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootMapConfig), 3989150001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h__Script_LootSystem_265814207(TEXT("/Script/LootSystem"),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h__Script_LootSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h__Script_LootSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
