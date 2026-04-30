// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootTypes.h"

#ifdef LOOTSYSTEM_LootTypes_generated_h
#error "LootTypes.generated.h already included, missing '#pragma once' in LootTypes.h"
#endif
#define LOOTSYSTEM_LootTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLootTableRow *****************************************************
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootTypes_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootTableRow_Statics; \
	LOOTSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FLootTableRow;
// ********** End ScriptStruct FLootTableRow *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootTypes_h

// ********** Begin Enum ELootType *****************************************************************
#define FOREACH_ENUM_ELOOTTYPE(op) \
	op(ELootType::Weapon) \
	op(ELootType::Armor) \
	op(ELootType::Consumable) 

enum class ELootType : uint8;
template<> struct TIsUEnumClass<ELootType> { enum { Value = true }; };
template<> LOOTSYSTEM_API UEnum* StaticEnum<ELootType>();
// ********** End Enum ELootType *******************************************************************

// ********** Begin Enum ELootRarity ***************************************************************
#define FOREACH_ENUM_ELOOTRARITY(op) \
	op(ELootRarity::Common) \
	op(ELootRarity::Rare) \
	op(ELootRarity::Epic) \
	op(ELootRarity::Legendary) 

enum class ELootRarity : uint8;
template<> struct TIsUEnumClass<ELootRarity> { enum { Value = true }; };
template<> LOOTSYSTEM_API UEnum* StaticEnum<ELootRarity>();
// ********** End Enum ELootRarity *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
