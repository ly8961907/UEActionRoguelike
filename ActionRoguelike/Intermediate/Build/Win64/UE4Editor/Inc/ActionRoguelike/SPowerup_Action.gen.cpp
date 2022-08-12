// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SPowerup_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerup_Action() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPowerup_Action_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPowerup_Action();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPowerupActor();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction_NoRegister();
// End Cross Module References
	void ASPowerup_Action::StaticRegisterNativesASPowerup_Action()
	{
	}
	UClass* Z_Construct_UClass_ASPowerup_Action_NoRegister()
	{
		return ASPowerup_Action::StaticClass();
	}
	struct Z_Construct_UClass_ASPowerup_Action_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionToGrant_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionToGrant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPowerup_Action_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASPowerupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerup_Action_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SPowerup_Action.h" },
		{ "ModuleRelativePath", "Public/SPowerup_Action.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerup_Action_Statics::NewProp_ActionToGrant_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Public/SPowerup_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPowerup_Action_Statics::NewProp_ActionToGrant = { "ActionToGrant", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerup_Action, ActionToGrant), Z_Construct_UClass_USAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASPowerup_Action_Statics::NewProp_ActionToGrant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerup_Action_Statics::NewProp_ActionToGrant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPowerup_Action_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerup_Action_Statics::NewProp_ActionToGrant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPowerup_Action_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPowerup_Action>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPowerup_Action_Statics::ClassParams = {
		&ASPowerup_Action::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASPowerup_Action_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerup_Action_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPowerup_Action_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerup_Action_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPowerup_Action()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPowerup_Action_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerup_Action, 103899935);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASPowerup_Action>()
	{
		return ASPowerup_Action::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerup_Action(Z_Construct_UClass_ASPowerup_Action, &ASPowerup_Action::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("ASPowerup_Action"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerup_Action);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
