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
class APawn;
#ifdef ACTIONROGUELIKE_SAICharacter_generated_h
#error "SAICharacter.generated.h already included, missing '#pragma once' in SAICharacter.h"
#endif
#define ACTIONROGUELIKE_SAICharacter_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnPawnSeen); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor);


#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnPawnSeen); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor);


#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAICharacter(); \
	friend struct Z_Construct_UClass_ASAICharacter_Statics; \
public: \
	DECLARE_CLASS(ASAICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASAICharacter)


#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASAICharacter(); \
	friend struct Z_Construct_UClass_ASAICharacter_Statics; \
public: \
	DECLARE_CLASS(ASAICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASAICharacter)


#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAICharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAICharacter(ASAICharacter&&); \
	NO_API ASAICharacter(const ASAICharacter&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAICharacter(ASAICharacter&&); \
	NO_API ASAICharacter(const ASAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASAICharacter)


#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeToHitParamName() { return STRUCT_OFFSET(ASAICharacter, TimeToHitParamName); } \
	FORCEINLINE static uint32 __PPO__TargetActorKey() { return STRUCT_OFFSET(ASAICharacter, TargetActorKey); } \
	FORCEINLINE static uint32 __PPO__HealthBarWidgetClass() { return STRUCT_OFFSET(ASAICharacter, HealthBarWidgetClass); } \
	FORCEINLINE static uint32 __PPO__SpottedWidgetClass() { return STRUCT_OFFSET(ASAICharacter, SpottedWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(ASAICharacter, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__AttributeComp() { return STRUCT_OFFSET(ASAICharacter, AttributeComp); } \
	FORCEINLINE static uint32 __PPO__ActionComp() { return STRUCT_OFFSET(ASAICharacter, ActionComp); }


#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_11_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_AI_SAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
