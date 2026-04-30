// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLootManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootManager();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootManager_NoRegister();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALootManager *************************************************************
void ALootManager::StaticRegisterNativesALootManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALootManager;
UClass* ALootManager::GetPrivateStaticClass()
{
	using TClass = ALootManager;
	if (!Z_Registration_Info_UClass_ALootManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LootManager"),
			Z_Registration_Info_UClass_ALootManager.InnerSingleton,
			StaticRegisterNativesALootManager,
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
	return Z_Registration_Info_UClass_ALootManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ALootManager_NoRegister()
{
	return ALootManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALootManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LootManager.h" },
		{ "ModuleRelativePath", "Public/LootManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootGeneratorClass_MetaData[] = {
		{ "Category", "LootManager" },
		{ "ModuleRelativePath", "Public/LootManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPlayerLevel_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "Public/LootManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LootGeneratorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalPlayerLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootManager_Statics::NewProp_LootGeneratorClass = { "LootGeneratorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALootManager, LootGeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULootGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootGeneratorClass_MetaData), NewProp_LootGeneratorClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALootManager_Statics::NewProp_ExternalPlayerLevel = { "ExternalPlayerLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALootManager, ExternalPlayerLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalPlayerLevel_MetaData), NewProp_ExternalPlayerLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootManager_Statics::NewProp_LootGeneratorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootManager_Statics::NewProp_ExternalPlayerLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALootManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALootManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALootManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALootManager_Statics::ClassParams = {
	&ALootManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALootManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALootManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALootManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALootManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALootManager()
{
	if (!Z_Registration_Info_UClass_ALootManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALootManager.OuterSingleton, Z_Construct_UClass_ALootManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALootManager.OuterSingleton;
}
ALootManager::ALootManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALootManager);
ALootManager::~ALootManager() {}
// ********** End Class ALootManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h__Script_LootSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALootManager, ALootManager::StaticClass, TEXT("ALootManager"), &Z_Registration_Info_UClass_ALootManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALootManager), 2882927535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h__Script_LootSystem_1544547045(TEXT("/Script/LootSystem"),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h__Script_LootSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h__Script_LootSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
