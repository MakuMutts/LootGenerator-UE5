// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLootFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootFactory();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULootFactory *************************************************************
void ULootFactory::StaticRegisterNativesULootFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULootFactory;
UClass* ULootFactory::GetPrivateStaticClass()
{
	using TClass = ULootFactory;
	if (!Z_Registration_Info_UClass_ULootFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LootFactory"),
			Z_Registration_Info_UClass_ULootFactory.InnerSingleton,
			StaticRegisterNativesULootFactory,
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
	return Z_Registration_Info_UClass_ULootFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_ULootFactory_NoRegister()
{
	return ULootFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULootFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LootFactory.h" },
		{ "ModuleRelativePath", "Public/LootFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULootFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootFactory_Statics::ClassParams = {
	&ULootFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootFactory()
{
	if (!Z_Registration_Info_UClass_ULootFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootFactory.OuterSingleton, Z_Construct_UClass_ULootFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootFactory.OuterSingleton;
}
ULootFactory::ULootFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootFactory);
ULootFactory::~ULootFactory() {}
// ********** End Class ULootFactory ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h__Script_LootSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootFactory, ULootFactory::StaticClass, TEXT("ULootFactory"), &Z_Registration_Info_UClass_ULootFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootFactory), 4286208004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h__Script_LootSystem_3184647168(TEXT("/Script/LootSystem"),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h__Script_LootSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h__Script_LootSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
