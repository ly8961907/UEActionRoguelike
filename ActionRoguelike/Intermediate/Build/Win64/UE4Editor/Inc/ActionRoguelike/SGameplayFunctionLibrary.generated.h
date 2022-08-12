// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef ACTIONROGUELIKE_SGameplayFunctionLibrary_generated_h
#error "SGameplayFunctionLibrary.generated.h already included, missing '#pragma once' in SGameplayFunctionLibrary.h"
#endif
#define ACTIONROGUELIKE_SGameplayFunctionLibrary_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyMana); \
	DECLARE_FUNCTION(execApplyDirectionalDamage); \
	DECLARE_FUNCTION(execApplyDamage);


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyMana); \
	DECLARE_FUNCTION(execApplyDirectionalDamage); \
	DECLARE_FUNCTION(execApplyDamage);


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGameplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_USGameplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USGameplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USGameplayFunctionLibrary)


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSGameplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_USGameplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USGameplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USGameplayFunctionLibrary)


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameplayFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameplayFunctionLibrary(USGameplayFunctionLibrary&&); \
	NO_API USGameplayFunctionLibrary(const USGameplayFunctionLibrary&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameplayFunctionLibrary(USGameplayFunctionLibrary&&); \
	NO_API USGameplayFunctionLibrary(const USGameplayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameplayFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayFunctionLibrary)


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_12_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USGameplayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SGameplayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
