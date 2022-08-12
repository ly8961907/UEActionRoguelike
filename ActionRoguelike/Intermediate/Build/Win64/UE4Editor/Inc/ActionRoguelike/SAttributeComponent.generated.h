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

#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_12_DELEGATE \
struct _Script_ActionRoguelike_eventOnAttributeChanged_Parms \
{ \
	AActor* InstigatorActor; \
	USAttributeComponent* OwningComp; \
	float NewValue; \
	float Delta; \
}; \
static inline void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewValue, float Delta) \
{ \
	_Script_ActionRoguelike_eventOnAttributeChanged_Parms Parms; \
	Parms.InstigatorActor=InstigatorActor; \
	Parms.OwningComp=OwningComp; \
	Parms.NewValue=NewValue; \
	Parms.Delta=Delta; \
	OnAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_RPC_WRAPPERS \
	virtual void MulticastHealthChanged_Implementation(AActor* InstigatorActor, float NewHealth, float Delta); \
 \
	DECLARE_FUNCTION(execApplyManaChange); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execApplyHealthChange); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetHealthMax); \
	DECLARE_FUNCTION(execIsFullHealth); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execMulticastHealthChanged); \
	DECLARE_FUNCTION(execIsActorAlive); \
	DECLARE_FUNCTION(execGetAttributes);


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastHealthChanged_Implementation(AActor* InstigatorActor, float NewHealth, float Delta); \
 \
	DECLARE_FUNCTION(execApplyManaChange); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execApplyHealthChange); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetHealthMax); \
	DECLARE_FUNCTION(execIsFullHealth); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execMulticastHealthChanged); \
	DECLARE_FUNCTION(execIsActorAlive); \
	DECLARE_FUNCTION(execGetAttributes);


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_EVENT_PARMS \
	struct SAttributeComponent_eventMulticastHealthChanged_Parms \
	{ \
		AActor* InstigatorActor; \
		float NewHealth; \
		float Delta; \
	};


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_CALLBACK_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_STANDARD_CONSTRUCTORS \
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


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeComponent(USAttributeComponent&&); \
	NO_API USAttributeComponent(const USAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USAttributeComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USAttributeComponent, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(USAttributeComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Mana() { return STRUCT_OFFSET(USAttributeComponent, Mana); } \
	FORCEINLINE static uint32 __PPO__MaxMana() { return STRUCT_OFFSET(USAttributeComponent, MaxMana); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_15_PROLOG \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_EVENT_PARMS


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SAttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
