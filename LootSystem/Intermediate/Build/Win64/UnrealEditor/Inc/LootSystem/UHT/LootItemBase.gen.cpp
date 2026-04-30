// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootItemBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLootItemBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootItemBase();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootItemBase_NoRegister();
LOOTSYSTEM_API UEnum* Z_Construct_UEnum_LootSystem_ELootRarity();
LOOTSYSTEM_API UEnum* Z_Construct_UEnum_LootSystem_ELootType();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULootItemBase ************************************************************
void ULootItemBase::StaticRegisterNativesULootItemBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULootItemBase;
UClass* ULootItemBase::GetPrivateStaticClass()
{
	using TClass = ULootItemBase;
	if (!Z_Registration_Info_UClass_ULootItemBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LootItemBase"),
			Z_Registration_Info_UClass_ULootItemBase.InnerSingleton,
			StaticRegisterNativesULootItemBase,
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
	return Z_Registration_Info_UClass_ULootItemBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ULootItemBase_NoRegister()
{
	return ULootItemBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULootItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LootItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LootItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "LootItemBase" },
		{ "ModuleRelativePath", "Public/LootItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootType_MetaData[] = {
		{ "Category", "LootItemBase" },
		{ "ModuleRelativePath", "Public/LootItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[] = {
		{ "Category", "LootItemBase" },
		{ "ModuleRelativePath", "Public/LootItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "LootItemBase" },
		{ "ModuleRelativePath", "Public/LootItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMesh_MetaData[] = {
		{ "Category", "LootItemBase" },
		{ "ModuleRelativePath", "Public/LootItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LootType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LootType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULootItemBase_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootItemBase, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULootItemBase_Statics::NewProp_LootType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULootItemBase_Statics::NewProp_LootType = { "LootType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootItemBase, LootType), Z_Construct_UEnum_LootSystem_ELootType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootType_MetaData), NewProp_LootType_MetaData) }; // 2343231742
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULootItemBase_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULootItemBase_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootItemBase, Rarity), Z_Construct_UEnum_LootSystem_ELootRarity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rarity_MetaData), NewProp_Rarity_MetaData) }; // 1221674888
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULootItemBase_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootItemBase, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootItemBase_Statics::NewProp_WorldMesh = { "WorldMesh", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootItemBase, WorldMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMesh_MetaData), NewProp_WorldMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootItemBase_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootItemBase_Statics::NewProp_LootType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootItemBase_Statics::NewProp_LootType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootItemBase_Statics::NewProp_Rarity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootItemBase_Statics::NewProp_Rarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootItemBase_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootItemBase_Statics::NewProp_WorldMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULootItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootItemBase_Statics::ClassParams = {
	&ULootItemBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULootItemBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULootItemBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootItemBase()
{
	if (!Z_Registration_Info_UClass_ULootItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootItemBase.OuterSingleton, Z_Construct_UClass_ULootItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootItemBase.OuterSingleton;
}
ULootItemBase::ULootItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootItemBase);
ULootItemBase::~ULootItemBase() {}
// ********** End Class ULootItemBase **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h__Script_LootSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootItemBase, ULootItemBase::StaticClass, TEXT("ULootItemBase"), &Z_Registration_Info_UClass_ULootItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootItemBase), 4263559663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h__Script_LootSystem_3115057804(TEXT("/Script/LootSystem"),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h__Script_LootSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h__Script_LootSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
