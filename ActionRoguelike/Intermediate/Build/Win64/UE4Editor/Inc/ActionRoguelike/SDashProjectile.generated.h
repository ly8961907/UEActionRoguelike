// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONROGUELIKE_SDashProjectile_generated_h
#error "SDashProjectile.generated.h already included, missing '#pragma once' in SDashProjectile.h"
#endif
#define ACTIONROGUELIKE_SDashProjectile_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_RPC_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASDashProjectile(); \
	friend struct Z_Construct_UClass_ASDashProjectile_Statics; \
public: \
	DECLARE_CLASS(ASDashProjectile, ASProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASDashProjectile)


#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASDashProjectile(); \
	friend struct Z_Construct_UClass_ASDashProjectile_Statics; \
public: \
	DECLARE_CLASS(ASDashProjectile, ASProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASDashProjectile)


#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASDashProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASDashProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDashProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDashProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDashProjectile(ASDashProjectile&&); \
	NO_API ASDashProjectile(const ASDashProjectile&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDashProjectile(ASDashProjectile&&); \
	NO_API ASDashProjectile(const ASDashProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDashProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDashProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASDashProjectile)


#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TeleportDelay() { return STRUCT_OFFSET(ASDashProjectile, TeleportDelay); } \
	FORCEINLINE static uint32 __PPO__DetonateDelay() { return STRUCT_OFFSET(ASDashProjectile, DetonateDelay); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_12_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASDashProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SDashProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
