// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONROGUELIKE_SPowerupActor_generated_h
#error "SPowerupActor.generated.h already included, missing '#pragma once' in SPowerupActor.h"
#endif
#define ACTIONROGUELIKE_SPowerupActor_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowPowerup);


#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowPowerup);


#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend struct Z_Construct_UClass_ASPowerupActor_Statics; \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASPowerupActor*>(this); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend struct Z_Construct_UClass_ASPowerupActor_Statics; \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASPowerupActor*>(this); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerupActor)


#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASPowerupActor, SphereComp); } \
	FORCEINLINE static uint32 __PPO__RespawnTime() { return STRUCT_OFFSET(ASPowerupActor, RespawnTime); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_11_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASPowerupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SPowerupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
