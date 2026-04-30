// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponLootItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponLootItem() {}

// ********** Begin Cross Module References ********************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootItemBase();
LOOTSYSTEM_API UClass* Z_Construct_UClass_UWeaponLootItem();
LOOTSYSTEM_API UClass* Z_Construct_UClass_UWeaponLootItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponLootItem **********************************************************
void UWeaponLootItem::StaticRegisterNativesUWeaponLootItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponLootItem;
UClass* UWeaponLootItem::GetPrivateStaticClass()
{
	using TClass = UWeaponLootItem;
	if (!Z_Registration_Info_UClass_UWeaponLootItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponLootItem"),
			Z_Registration_Info_UClass_UWeaponLootItem.InnerSingleton,
			StaticRegisterNativesUWeaponLootItem,
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
	return Z_Registration_Info_UClass_UWeaponLootItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponLootItem_NoRegister()
{
	return UWeaponLootItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponLootItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponLootItem.h" },
		{ "ModuleRelativePath", "Public/WeaponLootItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponLootItem" },
		{ "ModuleRelativePath", "Public/WeaponLootItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "WeaponLootItem" },
		{ "ModuleRelativePath", "Public/WeaponLootItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponLootItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponLootItem_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLootItem, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponLootItem_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLootItem, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponLootItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLootItem_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLootItem_Statics::NewProp_FireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLootItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponLootItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULootItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLootItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponLootItem_Statics::ClassParams = {
	&UWeaponLootItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponLootItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLootItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLootItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponLootItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponLootItem()
{
	if (!Z_Registration_Info_UClass_UWeaponLootItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponLootItem.OuterSingleton, Z_Construct_UClass_UWeaponLootItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponLootItem.OuterSingleton;
}
UWeaponLootItem::UWeaponLootItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponLootItem);
UWeaponLootItem::~UWeaponLootItem() {}
// ********** End Class UWeaponLootItem ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h__Script_LootSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponLootItem, UWeaponLootItem::StaticClass, TEXT("UWeaponLootItem"), &Z_Registration_Info_UClass_UWeaponLootItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponLootItem), 4287843173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h__Script_LootSystem_924228649(TEXT("/Script/LootSystem"),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h__Script_LootSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h__Script_LootSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
