// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONROGUELIKE_SItemChest_generated_h
#error "SItemChest.generated.h already included, missing '#pragma once' in SItemChest.h"
#endif
#define ACTIONROGUELIKE_SItemChest_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_LidOpened);


#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_LidOpened);


#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASItemChest(); \
	friend struct Z_Construct_UClass_ASItemChest_Statics; \
public: \
	DECLARE_CLASS(ASItemChest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASItemChest) \
	virtual UObject* _getUObject() const override { return const_cast<ASItemChest*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bLidOpened=NETFIELD_REP_START, \
		NETFIELD_REP_END=bLidOpened	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASItemChest(); \
	friend struct Z_Construct_UClass_ASItemChest_Statics; \
public: \
	DECLARE_CLASS(ASItemChest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASItemChest) \
	virtual UObject* _getUObject() const override { return const_cast<ASItemChest*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bLidOpened=NETFIELD_REP_START, \
		NETFIELD_REP_END=bLidOpened	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASItemChest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASItemChest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASItemChest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASItemChest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASItemChest(ASItemChest&&); \
	NO_API ASItemChest(const ASItemChest&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASItemChest(ASItemChest&&); \
	NO_API ASItemChest(const ASItemChest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASItemChest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASItemChest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASItemChest)


#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bLidOpened() { return STRUCT_OFFSET(ASItemChest, bLidOpened); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ASItemChest, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__LidMesh() { return STRUCT_OFFSET(ASItemChest, LidMesh); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_15_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASItemChest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SItemChest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
