// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponLootItem.h"

#ifdef LOOTSYSTEM_WeaponLootItem_generated_h
#error "WeaponLootItem.generated.h already included, missing '#pragma once' in WeaponLootItem.h"
#endif
#define LOOTSYSTEM_WeaponLootItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeaponLootItem **********************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_UWeaponLootItem_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponLootItem(); \
	friend struct Z_Construct_UClass_UWeaponLootItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_UWeaponLootItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponLootItem, ULootItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_UWeaponLootItem_NoRegister) \
	DECLARE_SERIALIZER(UWeaponLootItem)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponLootItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponLootItem(UWeaponLootItem&&) = delete; \
	UWeaponLootItem(const UWeaponLootItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponLootItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponLootItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponLootItem) \
	NO_API virtual ~UWeaponLootItem();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h_6_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h_9_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponLootItem;

// ********** End Class UWeaponLootItem ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_WeaponLootItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
