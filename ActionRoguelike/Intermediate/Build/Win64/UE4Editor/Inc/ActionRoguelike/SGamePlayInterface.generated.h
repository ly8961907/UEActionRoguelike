// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef ACTIONROGUELIKE_SGamePlayInterface_generated_h
#error "SGamePlayInterface.generated.h already included, missing '#pragma once' in SGamePlayInterface.h"
#endif
#define ACTIONROGUELIKE_SGamePlayInterface_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_RPC_WRAPPERS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_EVENT_PARMS \
	struct SGamePlayInterface_eventInteract_Parms \
	{ \
		APawn* InstigatorPawn; \
	};


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_CALLBACK_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONROGUELIKE_API USGamePlayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGamePlayInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONROGUELIKE_API, USGamePlayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGamePlayInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONROGUELIKE_API USGamePlayInterface(USGamePlayInterface&&); \
	ACTIONROGUELIKE_API USGamePlayInterface(const USGamePlayInterface&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONROGUELIKE_API USGamePlayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONROGUELIKE_API USGamePlayInterface(USGamePlayInterface&&); \
	ACTIONROGUELIKE_API USGamePlayInterface(const USGamePlayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONROGUELIKE_API, USGamePlayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGamePlayInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGamePlayInterface)


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSGamePlayInterface(); \
	friend struct Z_Construct_UClass_USGamePlayInterface_Statics; \
public: \
	DECLARE_CLASS(USGamePlayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), ACTIONROGUELIKE_API) \
	DECLARE_SERIALIZER(USGamePlayInterface)


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISGamePlayInterface() {} \
public: \
	typedef USGamePlayInterface UClassType; \
	typedef ISGamePlayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISGamePlayInterface() {} \
public: \
	typedef USGamePlayInterface UClassType; \
	typedef ISGamePlayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_10_PROLOG \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_EVENT_PARMS


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USGamePlayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SGamePlayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
