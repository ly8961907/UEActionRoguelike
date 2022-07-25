// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ACTIONROGUELIKE_SProjectileBase_generated_h
#error "SProjectileBase.generated.h already included, missing '#pragma once' in SProjectileBase.h"
#endif
#define ACTIONROGUELIKE_SProjectileBase_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_RPC_WRAPPERS \
	virtual void Explode_Implementation(); \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnActorHit);


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Explode_Implementation(); \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnActorHit);


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_EVENT_PARMS
#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_CALLBACK_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectileBase(); \
	friend struct Z_Construct_UClass_ASProjectileBase_Statics; \
public: \
	DECLARE_CLASS(ASProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASProjectileBase(); \
	friend struct Z_Construct_UClass_ASProjectileBase_Statics; \
public: \
	DECLARE_CLASS(ASProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectileBase(ASProjectileBase&&); \
	NO_API ASProjectileBase(const ASProjectileBase&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectileBase(ASProjectileBase&&); \
	NO_API ASProjectileBase(const ASProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASProjectileBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExistTime() { return STRUCT_OFFSET(ASProjectileBase, ExistTime); } \
	FORCEINLINE static uint32 __PPO__ImpactVFX() { return STRUCT_OFFSET(ASProjectileBase, ImpactVFX); } \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(ASProjectileBase, ImpactSound); } \
	FORCEINLINE static uint32 __PPO__ImpactShake() { return STRUCT_OFFSET(ASProjectileBase, ImpactShake); } \
	FORCEINLINE static uint32 __PPO__ImpactShakeInnerRadius() { return STRUCT_OFFSET(ASProjectileBase, ImpactShakeInnerRadius); } \
	FORCEINLINE static uint32 __PPO__ImpactShakeOuterRadius() { return STRUCT_OFFSET(ASProjectileBase, ImpactShakeOuterRadius); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASProjectileBase, SphereComp); } \
	FORCEINLINE static uint32 __PPO__MoveComp() { return STRUCT_OFFSET(ASProjectileBase, MoveComp); } \
	FORCEINLINE static uint32 __PPO__EffectComp() { return STRUCT_OFFSET(ASProjectileBase, EffectComp); } \
	FORCEINLINE static uint32 __PPO__AudioComp() { return STRUCT_OFFSET(ASProjectileBase, AudioComp); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_10_PROLOG \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_EVENT_PARMS


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
