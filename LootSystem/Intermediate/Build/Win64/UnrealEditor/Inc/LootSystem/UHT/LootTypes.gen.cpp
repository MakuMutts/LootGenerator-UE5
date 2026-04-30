// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLootTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootItemBase_NoRegister();
LOOTSYSTEM_API UEnum* Z_Construct_UEnum_LootSystem_ELootRarity();
LOOTSYSTEM_API UEnum* Z_Construct_UEnum_LootSystem_ELootType();
LOOTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLootTableRow();
UPackage* Z_Construct_UPackage__Script_LootSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELootType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootType;
static UEnum* ELootType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELootType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELootType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootSystem_ELootType, (UObject*)Z_Construct_UPackage__Script_LootSystem(), TEXT("ELootType"));
	}
	return Z_Registration_Info_UEnum_ELootType.OuterSingleton;
}
template<> LOOTSYSTEM_API UEnum* StaticEnum<ELootType>()
{
	return ELootType_StaticEnum();
}
struct Z_Construct_UEnum_LootSystem_ELootType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.Name", "ELootType::Armor" },
		{ "BlueprintType", "true" },
		{ "Consumable.Name", "ELootType::Consumable" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
		{ "Weapon.Name", "ELootType::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELootType::Weapon", (int64)ELootType::Weapon },
		{ "ELootType::Armor", (int64)ELootType::Armor },
		{ "ELootType::Consumable", (int64)ELootType::Consumable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootSystem_ELootType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LootSystem,
	nullptr,
	"ELootType",
	"ELootType",
	Z_Construct_UEnum_LootSystem_ELootType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LootSystem_ELootType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootSystem_ELootType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootSystem_ELootType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LootSystem_ELootType()
{
	if (!Z_Registration_Info_UEnum_ELootType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootType.InnerSingleton, Z_Construct_UEnum_LootSystem_ELootType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELootType.InnerSingleton;
}
// ********** End Enum ELootType *******************************************************************

// ********** Begin Enum ELootRarity ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootRarity;
static UEnum* ELootRarity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELootRarity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELootRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootSystem_ELootRarity, (UObject*)Z_Construct_UPackage__Script_LootSystem(), TEXT("ELootRarity"));
	}
	return Z_Registration_Info_UEnum_ELootRarity.OuterSingleton;
}
template<> LOOTSYSTEM_API UEnum* StaticEnum<ELootRarity>()
{
	return ELootRarity_StaticEnum();
}
struct Z_Construct_UEnum_LootSystem_ELootRarity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Common.Name", "ELootRarity::Common" },
		{ "Epic.Name", "ELootRarity::Epic" },
		{ "Legendary.Name", "ELootRarity::Legendary" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
		{ "Rare.Name", "ELootRarity::Rare" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELootRarity::Common", (int64)ELootRarity::Common },
		{ "ELootRarity::Rare", (int64)ELootRarity::Rare },
		{ "ELootRarity::Epic", (int64)ELootRarity::Epic },
		{ "ELootRarity::Legendary", (int64)ELootRarity::Legendary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootSystem_ELootRarity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LootSystem,
	nullptr,
	"ELootRarity",
	"ELootRarity",
	Z_Construct_UEnum_LootSystem_ELootRarity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LootSystem_ELootRarity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootSystem_ELootRarity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootSystem_ELootRarity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LootSystem_ELootRarity()
{
	if (!Z_Registration_Info_UEnum_ELootRarity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootRarity.InnerSingleton, Z_Construct_UEnum_LootSystem_ELootRarity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELootRarity.InnerSingleton;
}
// ********** End Enum ELootRarity *****************************************************************

// ********** Begin ScriptStruct FLootTableRow *****************************************************
static_assert(std::is_polymorphic<FLootTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLootTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLootTableRow;
class UScriptStruct* FLootTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLootTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLootTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootTableRow, (UObject*)Z_Construct_UPackage__Script_LootSystem(), TEXT("LootTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_FLootTableRow.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLootTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "LootTableRow" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootType_MetaData[] = {
		{ "Category", "LootTableRow" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "LootTableRow" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "LootTableRow" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "LootTableRow" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "LootTableRow" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMesh_MetaData[] = {
		{ "Category", "LootTableRow" },
		{ "ModuleRelativePath", "Public/LootTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LootType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LootType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_LootType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_LootType = { "LootType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, LootType), Z_Construct_UEnum_LootSystem_ELootType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootType_MetaData), NewProp_LootType_MetaData) }; // 2343231742
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULootItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_WorldMesh = { "WorldMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, WorldMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMesh_MetaData), NewProp_WorldMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_LootType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_LootType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_WorldMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LootSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"LootTableRow",
	Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers),
	sizeof(FLootTableRow),
	alignof(FLootTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLootTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_FLootTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLootTableRow.InnerSingleton, Z_Construct_UScriptStruct_FLootTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLootTableRow.InnerSingleton;
}
// ********** End ScriptStruct FLootTableRow *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootTypes_h__Script_LootSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELootType_StaticEnum, TEXT("ELootType"), &Z_Registration_Info_UEnum_ELootType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2343231742U) },
		{ ELootRarity_StaticEnum, TEXT("ELootRarity"), &Z_Registration_Info_UEnum_ELootRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1221674888U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLootTableRow::StaticStruct, Z_Construct_UScriptStruct_FLootTableRow_Statics::NewStructOps, TEXT("LootTableRow"), &Z_Registration_Info_UScriptStruct_FLootTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootTableRow), 2854708287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootTypes_h__Script_LootSystem_1861297112(TEXT("/Script/LootSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootTypes_h__Script_LootSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootTypes_h__Script_LootSystem_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootTypes_h__Script_LootSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootTypes_h__Script_LootSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
