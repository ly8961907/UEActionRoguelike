// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/AI/SBTTask_RangedAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBTTask_RangedAttack() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USBTTask_RangedAttack_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USBTTask_RangedAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USBTTask_RangedAttack::StaticRegisterNativesUSBTTask_RangedAttack()
	{
	}
	UClass* Z_Construct_UClass_USBTTask_RangedAttack_NoRegister()
	{
		return USBTTask_RangedAttack::StaticClass();
	}
	struct Z_Construct_UClass_USBTTask_RangedAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBTTask_RangedAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTTask_RangedAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/SBTTask_RangedAttack.h" },
		{ "ModuleRelativePath", "Public/AI/SBTTask_RangedAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTTask_RangedAttack_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SBTTask_RangedAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBTTask_RangedAttack_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBTTask_RangedAttack, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBTTask_RangedAttack_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTTask_RangedAttack_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBTTask_RangedAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTTask_RangedAttack_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBTTask_RangedAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBTTask_RangedAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBTTask_RangedAttack_Statics::ClassParams = {
		&USBTTask_RangedAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBTTask_RangedAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBTTask_RangedAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBTTask_RangedAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBTTask_RangedAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBTTask_RangedAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBTTask_RangedAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBTTask_RangedAttack, 3521361513);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USBTTask_RangedAttack>()
	{
		return USBTTask_RangedAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBTTask_RangedAttack(Z_Construct_UClass_USBTTask_RangedAttack, &USBTTask_RangedAttack::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USBTTask_RangedAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBTTask_RangedAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
