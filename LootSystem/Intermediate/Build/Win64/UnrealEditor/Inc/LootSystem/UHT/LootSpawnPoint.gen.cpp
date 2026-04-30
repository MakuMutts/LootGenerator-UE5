// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootSpawnPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLootSpawnPoint() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootPickupActor_NoRegister();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootSpawnPoint();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootSpawnPoint_NoRegister();
LOOTSYSTEM_API UEnum* Z_Construct_UEnum_LootSystem_ELootType();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALootSpawnPoint **********************************************************
void ALootSpawnPoint::StaticRegisterNativesALootSpawnPoint()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALootSpawnPoint;
UClass* ALootSpawnPoint::GetPrivateStaticClass()
{
	using TClass = ALootSpawnPoint;
	if (!Z_Registration_Info_UClass_ALootSpawnPoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LootSpawnPoint"),
			Z_Registration_Info_UClass_ALootSpawnPoint.InnerSingleton,
			StaticRegisterNativesALootSpawnPoint,
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
	return Z_Registration_Info_UClass_ALootSpawnPoint.InnerSingleton;
}
UClass* Z_Construct_UClass_ALootSpawnPoint_NoRegister()
{
	return ALootSpawnPoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALootSpawnPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LootSpawnPoint.h" },
		{ "ModuleRelativePath", "Public/LootSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupClass_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "Public/LootSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "Public/LootSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedLootTypes_MetaData[] = {
		{ "Category", "Loot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/LootSpawnPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PickupClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedLootTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedLootTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedLootTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootSpawnPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_PickupClass = { "PickupClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALootSpawnPoint, PickupClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALootPickupActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupClass_MetaData), NewProp_PickupClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALootSpawnPoint, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_AllowedLootTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_AllowedLootTypes_Inner = { "AllowedLootTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LootSystem_ELootType, METADATA_PARAMS(0, nullptr) }; // 2343231742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_AllowedLootTypes = { "AllowedLootTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALootSpawnPoint, AllowedLootTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedLootTypes_MetaData), NewProp_AllowedLootTypes_MetaData) }; // 2343231742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootSpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_PickupClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_SpawnChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_AllowedLootTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_AllowedLootTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawnPoint_Statics::NewProp_AllowedLootTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawnPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALootSpawnPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawnPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALootSpawnPoint_Statics::ClassParams = {
	&ALootSpawnPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALootSpawnPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawnPoint_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawnPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ALootSpawnPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALootSpawnPoint()
{
	if (!Z_Registration_Info_UClass_ALootSpawnPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALootSpawnPoint.OuterSingleton, Z_Construct_UClass_ALootSpawnPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALootSpawnPoint.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALootSpawnPoint);
ALootSpawnPoint::~ALootSpawnPoint() {}
// ********** End Class ALootSpawnPoint ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h__Script_LootSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALootSpawnPoint, ALootSpawnPoint::StaticClass, TEXT("ALootSpawnPoint"), &Z_Registration_Info_UClass_ALootSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALootSpawnPoint), 2750728949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h__Script_LootSystem_804298556(TEXT("/Script/LootSystem"),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h__Script_LootSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h__Script_LootSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
