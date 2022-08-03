// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USAttributeComponent;
#ifdef ACTIONROGUELIKE_SAttributeComponent_generated_h
#error "SAttributeComponent.generated.h already included, missing '#pragma once' in SAttributeComponent.h"
#endif
#define ACTIONROGUELIKE_SAttributeComponent_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_9_DELEGATE \
struct _Script_ActionRoguelike_eventOnHealthChanged_Parms \
{ \
	AActor* InstigatorActor; \
	USAttributeComponent* OwningComp; \
	float NewHealth; \
	float Delta; \
}; \
static inline void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta) \
{ \
	_Script_ActionRoguelike_eventOnHealthChanged_Parms Parms; \
	Parms.InstigatorActor=InstigatorActor; \
	Parms.OwningComp=OwningComp; \
	Parms.NewHealth=NewHealth; \
	Parms.Delta=Delta; \
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyHealthChange); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetHealthMax); \
	DECLARE_FUNCTION(execIsFullHealth); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execIsActorAlive); \
	DECLARE_FUNCTION(execGetAttributes);


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyHealthChange); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetHealthMax); \
	DECLARE_FUNCTION(execIsFullHealth); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execIsActorAlive); \
	DECLARE_FUNCTION(execGetAttributes);


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAttributeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAttributeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeComponent(USAttributeComponent&&); \
	NO_API USAttributeComponent(const USAttributeComponent&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeComponent(USAttributeComponent&&); \
	NO_API USAttributeComponent(const USAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USAttributeComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USAttributeComponent, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(USAttributeComponent, MaxHealth); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_11_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
