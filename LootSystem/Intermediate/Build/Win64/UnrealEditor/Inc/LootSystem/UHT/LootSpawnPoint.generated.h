// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootSpawnPoint.h"

#ifdef LOOTSYSTEM_LootSpawnPoint_generated_h
#error "LootSpawnPoint.generated.h already included, missing '#pragma once' in LootSpawnPoint.h"
#endif
#define LOOTSYSTEM_LootSpawnPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALootSpawnPoint **********************************************************
LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootSpawnPoint_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootSpawnPoint(); \
	friend struct Z_Construct_UClass_ALootSpawnPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootSpawnPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(ALootSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_ALootSpawnPoint_NoRegister) \
	DECLARE_SERIALIZER(ALootSpawnPoint)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALootSpawnPoint(ALootSpawnPoint&&) = delete; \
	ALootSpawnPoint(const ALootSpawnPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootSpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALootSpawnPoint) \
	NO_API virtual ~ALootSpawnPoint();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h_10_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALootSpawnPoint;

// ********** End Class ALootSpawnPoint ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootSpawnPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
