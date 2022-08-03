// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USActionComponent;
#ifdef ACTIONROGUELIKE_SAction_generated_h
#error "SAction.generated.h already included, missing '#pragma once' in SAction.h"
#endif
#define ACTIONROGUELIKE_SAction_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_RPC_WRAPPERS \
	virtual void StopAction_Implementation(AActor* Instigator); \
	virtual void StartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetOwningComponent);


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopAction_Implementation(AActor* Instigator); \
	virtual void StartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetOwningComponent);


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_EVENT_PARMS \
	struct SAction_eventCanStart_Parms \
	{ \
		AActor* Instigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SAction_eventCanStart_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SAction_eventStartAction_Parms \
	{ \
		AActor* Instigator; \
	}; \
	struct SAction_eventStopAction_Parms \
	{ \
		AActor* Instigator; \
	};


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_CALLBACK_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAction(); \
	friend struct Z_Construct_UClass_USAction_Statics; \
public: \
	DECLARE_CLASS(USAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USAction)


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSAction(); \
	friend struct Z_Construct_UClass_USAction_Statics; \
public: \
	DECLARE_CLASS(USAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USAction)


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAction(USAction&&); \
	NO_API USAction(const USAction&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAction(USAction&&); \
	NO_API USAction(const USAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAction)


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GrantsTags() { return STRUCT_OFFSET(USAction, GrantsTags); } \
	FORCEINLINE static uint32 __PPO__BlockedTags() { return STRUCT_OFFSET(USAction, BlockedTags); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_15_PROLOG \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_EVENT_PARMS


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS