// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArmorLootItem.h"

#ifdef LOOTSYSTEM_ArmorLootItem_generated_h
#error "ArmorLootItem.generated.h already included, missing '#pragma once' in ArmorLootItem.h"
#endif
#define LOOTSYSTEM_ArmorLootItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UArmorLootItem ***********************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_UArmorLootItem_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArmorLootItem(); \
	friend struct Z_Construct_UClass_UArmorLootItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_UArmorLootItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UArmorLootItem, ULootItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_UArmorLootItem_NoRegister) \
	DECLARE_SERIALIZER(UArmorLootItem)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArmorLootItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UArmorLootItem(UArmorLootItem&&) = delete; \
	UArmorLootItem(const UArmorLootItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArmorLootItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArmorLootItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArmorLootItem) \
	NO_API virtual ~UArmorLootItem();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h_6_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h_9_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UArmorLootItem;

// ********** End Class UArmorLootItem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_ArmorLootItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
