// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootItemBase.h"

#ifdef LOOTSYSTEM_LootItemBase_generated_h
#error "LootItemBase.generated.h already included, missing '#pragma once' in LootItemBase.h"
#endif
#define LOOTSYSTEM_LootItemBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULootItemBase ************************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootItemBase_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootItemBase(); \
	friend struct Z_Construct_UClass_ULootItemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootItemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ULootItemBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_ULootItemBase_NoRegister) \
	DECLARE_SERIALIZER(ULootItemBase)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULootItemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULootItemBase(ULootItemBase&&) = delete; \
	ULootItemBase(const ULootItemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootItemBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULootItemBase) \
	NO_API virtual ~ULootItemBase();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h_8_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULootItemBase;

// ********** End Class ULootItemBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootItemBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
