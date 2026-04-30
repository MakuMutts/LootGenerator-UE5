// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootManager.h"

#ifdef LOOTSYSTEM_LootManager_generated_h
#error "LootManager.generated.h already included, missing '#pragma once' in LootManager.h"
#endif
#define LOOTSYSTEM_LootManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALootManager *************************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootManager_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootManager(); \
	friend struct Z_Construct_UClass_ALootManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ALootManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_ALootManager_NoRegister) \
	DECLARE_SERIALIZER(ALootManager)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALootManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALootManager(ALootManager&&) = delete; \
	ALootManager(const ALootManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALootManager) \
	NO_API virtual ~ALootManager();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h_7_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALootManager;

// ********** End Class ALootManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
