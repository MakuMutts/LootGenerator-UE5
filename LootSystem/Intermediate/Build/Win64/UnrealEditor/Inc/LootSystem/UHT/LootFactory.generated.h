// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootFactory.h"

#ifdef LOOTSYSTEM_LootFactory_generated_h
#error "LootFactory.generated.h already included, missing '#pragma once' in LootFactory.h"
#endif
#define LOOTSYSTEM_LootFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULootFactory *************************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootFactory_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootFactory(); \
	friend struct Z_Construct_UClass_ULootFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_ULootFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULootFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_ULootFactory_NoRegister) \
	DECLARE_SERIALIZER(ULootFactory)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULootFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULootFactory(ULootFactory&&) = delete; \
	ULootFactory(const ULootFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULootFactory) \
	NO_API virtual ~ULootFactory();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h_10_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULootFactory;

// ********** End Class ULootFactory ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
