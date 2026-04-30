// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootMapConfig.h"

#ifdef LOOTSYSTEM_LootMapConfig_generated_h
#error "LootMapConfig.generated.h already included, missing '#pragma once' in LootMapConfig.h"
#endif
#define LOOTSYSTEM_LootMapConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULootMapConfig ***********************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootMapConfig_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootMapConfig(); \
	friend struct Z_Construct_UClass_ULootMapConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootMapConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(ULootMapConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_ULootMapConfig_NoRegister) \
	DECLARE_SERIALIZER(ULootMapConfig)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULootMapConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULootMapConfig(ULootMapConfig&&) = delete; \
	ULootMapConfig(const ULootMapConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootMapConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootMapConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULootMapConfig) \
	NO_API virtual ~ULootMapConfig();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h_7_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULootMapConfig;

// ********** End Class ULootMapConfig *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootMapConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
