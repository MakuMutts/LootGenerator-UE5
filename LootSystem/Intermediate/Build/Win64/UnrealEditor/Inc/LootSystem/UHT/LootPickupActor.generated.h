// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootPickupActor.h"

#ifdef LOOTSYSTEM_LootPickupActor_generated_h
#error "LootPickupActor.generated.h already included, missing '#pragma once' in LootPickupActor.h"
#endif
#define LOOTSYSTEM_LootPickupActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ALootPickupActor *********************************************************
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootPickupActor_NoRegister();

#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootPickupActor(); \
	friend struct Z_Construct_UClass_ALootPickupActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOOTSYSTEM_API UClass* Z_Construct_UClass_ALootPickupActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALootPickupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LootSystem"), Z_Construct_UClass_ALootPickupActor_NoRegister) \
	DECLARE_SERIALIZER(ALootPickupActor)


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALootPickupActor(ALootPickupActor&&) = delete; \
	ALootPickupActor(const ALootPickupActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootPickupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootPickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALootPickupActor) \
	NO_API virtual ~ALootPickupActor();


#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h_12_PROLOG
#define FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALootPickupActor;

// ********** End Class ALootPickupActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kazmi_Documents_Unreal_Projects_Diplom_Plugins_LootSystem_Source_LootSystem_Public_LootPickupActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
