// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USAction;
#ifdef ACTIONROGUELIKE_SActionComponent_generated_h
#error "SActionComponent.generated.h already included, missing '#pragma once' in SActionComponent.h"
#endif
#define ACTIONROGUELIKE_SActionComponent_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopActionByName); \
	DECLARE_FUNCTION(execStartActionByName); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execAddAction);


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopActionByName); \
	DECLARE_FUNCTION(execStartActionByName); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execAddAction);


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSActionComponent(); \
	friend struct Z_Construct_UClass_USActionComponent_Statics; \
public: \
	DECLARE_CLASS(USActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USActionComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSActionComponent(); \
	friend struct Z_Construct_UClass_USActionComponent_Statics; \
public: \
	DECLARE_CLASS(USActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USActionComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USActionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USActionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USActionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USActionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USActionComponent(USActionComponent&&); \
	NO_API USActionComponent(const USActionComponent&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USActionComponent(USActionComponent&&); \
	NO_API USActionComponent(const USActionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USActionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USActionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USActionComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultActions() { return STRUCT_OFFSET(USActionComponent, DefaultActions); } \
	FORCEINLINE static uint32 __PPO__Actions() { return STRUCT_OFFSET(USActionComponent, Actions); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_12_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
