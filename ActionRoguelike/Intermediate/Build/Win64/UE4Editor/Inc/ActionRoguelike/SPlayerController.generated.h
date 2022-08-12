// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef ACTIONROGUELIKE_SPlayerController_generated_h
#error "SPlayerController.generated.h already included, missing '#pragma once' in SPlayerController.h"
#endif
#define ACTIONROGUELIKE_SPlayerController_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_12_DELEGATE \
struct _Script_ActionRoguelike_eventOnPawnChanged_Parms \
{ \
	APawn* NewPawn; \
}; \
static inline void FOnPawnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPawnChanged, APawn* NewPawn) \
{ \
	_Script_ActionRoguelike_eventOnPawnChanged_Parms Parms; \
	Parms.NewPawn=NewPawn; \
	OnPawnChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_RPC_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerController(); \
	friend struct Z_Construct_UClass_ASPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerController)


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASPlayerController(); \
	friend struct Z_Construct_UClass_ASPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerController)


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerController(ASPlayerController&&); \
	NO_API ASPlayerController(const ASPlayerController&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerController(ASPlayerController&&); \
	NO_API ASPlayerController(const ASPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerController)


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnPawnChanged() { return STRUCT_OFFSET(ASPlayerController, OnPawnChanged); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_14_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
