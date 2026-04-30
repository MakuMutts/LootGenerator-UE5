// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArmorLootItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeArmorLootItem() {}

// ********** Begin Cross Module References ********************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_UArmorLootItem();
LOOTSYSTEM_API UClass* Z_Construct_UClass_UArmorLootItem_NoRegister();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootItemBase();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UArmorLootItem ***********************************************************
void UArmorLootItem::StaticRegisterNativesUArmorLootItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UArmorLootItem;
UClass* UArmorLootItem::GetPrivateStaticClass()
{
	using TClass = UArmorLootItem;
	if (!Z_Registration_Info_UClass_UArmorLootItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ArmorLootItem"),
			Z_Registration_Info_UClass_UArmorLootItem.InnerSingleton,
			StaticRegisterNativesUArmorLootItem,
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
	return Z_Registration_Info_UClass_UArmorLootItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UArmorLootItem_NoRegister()
{
	return UArmorLootItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UArmorLootItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArmorLootItem.h" },
		{ "ModuleRelativePath", "Public/ArmorLootItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[] = {
		{ "Category", "ArmorLootItem" },
		{ "ModuleRelativePath", "Public/ArmorLootItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Defense;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArmorLootItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmorLootItem_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArmorLootItem, Defense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defense_MetaData), NewProp_Defense_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArmorLootItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmorLootItem_Statics::NewProp_Defense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArmorLootItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArmorLootItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULootItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArmorLootItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArmorLootItem_Statics::ClassParams = {
	&UArmorLootItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArmorLootItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArmorLootItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArmorLootItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UArmorLootItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArmorLootItem()
{
	if (!Z_Registration_Info_UClass_UArmorLootItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArmorLootItem.OuterSingleton, Z_Construct_UClass_UArmorLootItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArmorLootItem.OuterSingleton;
}
UArmorLootItem::UArmorLootItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArmorLootItem);
UArmorLootItem::~UArmorLootItem() {}
// ********** End Class UArmorLootItem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h__Script_LootSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArmorLootItem, UArmorLootItem::StaticClass, TEXT("UArmorLootItem"), &Z_Registration_Info_UClass_UArmorLootItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArmorLootItem), 3630575427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h__Script_LootSystem_3384708248(TEXT("/Script/LootSystem"),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h__Script_LootSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h__Script_LootSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
