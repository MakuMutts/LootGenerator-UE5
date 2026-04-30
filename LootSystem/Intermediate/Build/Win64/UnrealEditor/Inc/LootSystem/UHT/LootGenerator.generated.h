// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootGenerator.h"

#ifdef LOOTSYSTEM_LootGenerator_generated_h
#error "LootGenerator.generated.h already included, missing '#pragma once' in LootGenerator.h"
#endif
#define LOOTSYSTEM_LootGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ULootItemBase;
enum class ELootType : uint8;

// ********** Begin Class ULootGenerator ***********************************************************
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateLootUnique); \
	DECLARE_FUNCTION(execGenerateLoot); \
	DECLARE_FUNCTION(execSetPlayerLevel);


LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootGenerator_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootGenerator(); \
	friend struct Z_Construct_UClass_ULootGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(ULootGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_ULootGenerator_NoRegister) \
	DECLARE_SERIALIZER(ULootGenerator)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULootGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULootGenerator(ULootGenerator&&) = delete; \
	ULootGenerator(const ULootGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULootGenerator) \
	NO_API virtual ~ULootGenerator();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h_11_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULootGenerator;

// ********** End Class ULootGenerator *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
