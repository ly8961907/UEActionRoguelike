// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UEnvQueryInstanceBlueprintWrapper;
#ifdef ACTIONROGUELIKE_SGameModeBase_generated_h
#error "SGameModeBase.generated.h already included, missing '#pragma once' in SGameModeBase.h"
#endif
#define ACTIONROGUELIKE_SGameModeBase_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execKillAll); \
	DECLARE_FUNCTION(execRespawnPlayerElapsed); \
	DECLARE_FUNCTION(execOnPowerupSpawnQueryCompleted); \
	DECLARE_FUNCTION(execOnBotSpawnQueryCompleted); \
	DECLARE_FUNCTION(execSpawnBotTimerElapsed);


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execKillAll); \
	DECLARE_FUNCTION(execRespawnPlayerElapsed); \
	DECLARE_FUNCTION(execOnPowerupSpawnQueryCompleted); \
	DECLARE_FUNCTION(execOnBotSpawnQueryCompleted); \
	DECLARE_FUNCTION(execSpawnBotTimerElapsed);


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameModeBase(); \
	friend struct Z_Construct_UClass_ASGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASGameModeBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASGameModeBase(); \
	friend struct Z_Construct_UClass_ASGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASGameModeBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameModeBase(ASGameModeBase&&); \
	NO_API ASGameModeBase(const ASGameModeBase&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameModeBase(ASGameModeBase&&); \
	NO_API ASGameModeBase(const ASGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameModeBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinionClass() { return STRUCT_OFFSET(ASGameModeBase, MinionClass); } \
	FORCEINLINE static uint32 __PPO__DifficultyCurve() { return STRUCT_OFFSET(ASGameModeBase, DifficultyCurve); } \
	FORCEINLINE static uint32 __PPO__SpawnBotQuery() { return STRUCT_OFFSET(ASGameModeBase, SpawnBotQuery); } \
	FORCEINLINE static uint32 __PPO__SpawnTimerInterval() { return STRUCT_OFFSET(ASGameModeBase, SpawnTimerInterval); } \
	FORCEINLINE static uint32 __PPO__CreditsPerKill() { return STRUCT_OFFSET(ASGameModeBase, CreditsPerKill); } \
	FORCEINLINE static uint32 __PPO__PowerupSpawnQuery() { return STRUCT_OFFSET(ASGameModeBase, PowerupSpawnQuery); } \
	FORCEINLINE static uint32 __PPO__PowerupClasses() { return STRUCT_OFFSET(ASGameModeBase, PowerupClasses); } \
	FORCEINLINE static uint32 __PPO__RequiredPowerupDistance() { return STRUCT_OFFSET(ASGameModeBase, RequiredPowerupDistance); } \
	FORCEINLINE static uint32 __PPO__DesiredPowerupCount() { return STRUCT_OFFSET(ASGameModeBase, DesiredPowerupCount); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_15_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
