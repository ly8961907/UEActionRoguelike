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
	virtual void ServerStopAction_Implementation(AActor* Instigator, FName ActionName); \
	virtual void ServerStartAction_Implementation(AActor* Instigator, FName ActionName); \
 \
	DECLARE_FUNCTION(execServerStopAction); \
	DECLARE_FUNCTION(execServerStartAction); \
	DECLARE_FUNCTION(execStopActionByName); \
	DECLARE_FUNCTION(execStartActionByName); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execAddAction);


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerStopAction_Implementation(AActor* Instigator, FName ActionName); \
	virtual void ServerStartAction_Implementation(AActor* Instigator, FName ActionName); \
 \
	DECLARE_FUNCTION(execServerStopAction); \
	DECLARE_FUNCTION(execServerStartAction); \
	DECLARE_FUNCTION(execStopActionByName); \
	DECLARE_FUNCTION(execStartActionByName); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execAddAction);


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_EVENT_PARMS \
	struct SActionComponent_eventServerStartAction_Parms \
	{ \
		AActor* Instigator; \
		FName ActionName; \
	}; \
	struct SActionComponent_eventServerStopAction_Parms \
	{ \
		AActor* Instigator; \
		FName ActionName; \
	};


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_CALLBACK_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSActionComponent(); \
	friend struct Z_Construct_UClass_USActionComponent_Statics; \
public: \
	DECLARE_CLASS(USActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USActionComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Actions=NETFIELD_REP_START, \
		NETFIELD_REP_END=Actions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSActionComponent(); \
	friend struct Z_Construct_UClass_USActionComponent_Statics; \
public: \
	DECLARE_CLASS(USActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USActionComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Actions=NETFIELD_REP_START, \
		NETFIELD_REP_END=Actions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


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


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_12_PROLOG \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_EVENT_PARMS


#define ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_CALLBACK_WRAPPERS \
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
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SActionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
