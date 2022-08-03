// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ACTIONROGUELIKE_SActionEffect_generated_h
#error "SActionEffect.generated.h already included, missing '#pragma once' in SActionEffect.h"
#endif
#define ACTIONROGUELIKE_SActionEffect_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_RPC_WRAPPERS \
	virtual void ExecutePeriodicEffect_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execExecutePeriodicEffect);


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecutePeriodicEffect_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execExecutePeriodicEffect);


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_EVENT_PARMS \
	struct SActionEffect_eventExecutePeriodicEffect_Parms \
	{ \
		AActor* Instigator; \
	};


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_CALLBACK_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSActionEffect(); \
	friend struct Z_Construct_UClass_USActionEffect_Statics; \
public: \
	DECLARE_CLASS(USActionEffect, USAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USActionEffect)


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSActionEffect(); \
	friend struct Z_Construct_UClass_USActionEffect_Statics; \
public: \
	DECLARE_CLASS(USActionEffect, USAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USActionEffect)


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USActionEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USActionEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USActionEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USActionEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USActionEffect(USActionEffect&&); \
	NO_API USActionEffect(const USActionEffect&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USActionEffect(USActionEffect&&); \
	NO_API USActionEffect(const USActionEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USActionEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USActionEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USActionEffect)


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(USActionEffect, Duration); } \
	FORCEINLINE static uint32 __PPO__Period() { return STRUCT_OFFSET(USActionEffect, Period); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_12_PROLOG \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_EVENT_PARMS


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USActionEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SActionEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
