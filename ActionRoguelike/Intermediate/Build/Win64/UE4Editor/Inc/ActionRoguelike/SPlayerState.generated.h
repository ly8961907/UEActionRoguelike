// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASPlayerState;
#ifdef ACTIONROGUELIKE_SPlayerState_generated_h
#error "SPlayerState.generated.h already included, missing '#pragma once' in SPlayerState.h"
#endif
#define ACTIONROGUELIKE_SPlayerState_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_10_DELEGATE \
struct _Script_ActionRoguelike_eventOnCreditsChanged_Parms \
{ \
	ASPlayerState* PlayerState; \
	int32 NewCredits; \
	int32 Delta; \
}; \
static inline void FOnCreditsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCreditsChanged, ASPlayerState* PlayerState, int32 NewCredits, int32 Delta) \
{ \
	_Script_ActionRoguelike_eventOnCreditsChanged_Parms Parms; \
	Parms.PlayerState=PlayerState; \
	Parms.NewCredits=NewCredits; \
	Parms.Delta=Delta; \
	OnCreditsChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveCredits); \
	DECLARE_FUNCTION(execAddCredits); \
	DECLARE_FUNCTION(execGetCredits);


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveCredits); \
	DECLARE_FUNCTION(execAddCredits); \
	DECLARE_FUNCTION(execGetCredits);


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerState(); \
	friend struct Z_Construct_UClass_ASPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerState)


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASPlayerState(); \
	friend struct Z_Construct_UClass_ASPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerState)


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerState(ASPlayerState&&); \
	NO_API ASPlayerState(const ASPlayerState&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerState(ASPlayerState&&); \
	NO_API ASPlayerState(const ASPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerState)


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Credits() { return STRUCT_OFFSET(ASPlayerState, Credits); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_15_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
