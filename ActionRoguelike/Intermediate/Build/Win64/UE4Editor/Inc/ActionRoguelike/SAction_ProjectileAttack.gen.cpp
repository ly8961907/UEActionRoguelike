// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SAction_ProjectileAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAction_ProjectileAttack() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction_ProjectileAttack_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction_ProjectileAttack();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USAction_ProjectileAttack::execAttackDelay_Elapsed)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InstigatorCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackDelay_Elapsed(Z_Param_InstigatorCharacter);
		P_NATIVE_END;
	}
	void USAction_ProjectileAttack::StaticRegisterNativesUSAction_ProjectileAttack()
	{
		UClass* Class = USAction_ProjectileAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackDelay_Elapsed", &USAction_ProjectileAttack::execAttackDelay_Elapsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics
	{
		struct SAction_ProjectileAttack_eventAttackDelay_Elapsed_Parms
		{
			ACharacter* InstigatorCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAction_ProjectileAttack_eventAttackDelay_Elapsed_Parms, InstigatorCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::NewProp_InstigatorCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAction_ProjectileAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAction_ProjectileAttack, nullptr, "AttackDelay_Elapsed", nullptr, nullptr, sizeof(SAction_ProjectileAttack_eventAttackDelay_Elapsed_Parms), Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAction_ProjectileAttack_NoRegister()
	{
		return USAction_ProjectileAttack::StaticClass();
	}
	struct Z_Construct_UClass_USAction_ProjectileAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnimDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackAnimDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CastingEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectileclass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectileclass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAction_ProjectileAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAction_ProjectileAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAction_ProjectileAttack_AttackDelay_Elapsed, "AttackDelay_Elapsed" }, // 4165976110
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_ProjectileAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SAction_ProjectileAttack.h" },
		{ "ModuleRelativePath", "Public/SAction_ProjectileAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnimDelay_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/SAction_ProjectileAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnimDelay = { "AttackAnimDelay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction_ProjectileAttack, AttackAnimDelay), METADATA_PARAMS(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnimDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnimDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_CastingEffect_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "/* Particle System played during attack animation */" },
		{ "ModuleRelativePath", "Public/SAction_ProjectileAttack.h" },
		{ "ToolTip", "Particle System played during attack animation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_CastingEffect = { "CastingEffect", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction_ProjectileAttack, CastingEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_CastingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_CastingEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_HandSocketName_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/SAction_ProjectileAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_HandSocketName = { "HandSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction_ProjectileAttack, HandSocketName), METADATA_PARAMS(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_HandSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_HandSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnim_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/SAction_ProjectileAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction_ProjectileAttack, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_Projectileclass_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/SAction_ProjectileAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_Projectileclass = { "Projectileclass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction_ProjectileAttack, Projectileclass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_Projectileclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_Projectileclass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAction_ProjectileAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnimDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_CastingEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_HandSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_AttackAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_ProjectileAttack_Statics::NewProp_Projectileclass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAction_ProjectileAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAction_ProjectileAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAction_ProjectileAttack_Statics::ClassParams = {
		&USAction_ProjectileAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAction_ProjectileAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAction_ProjectileAttack_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAction_ProjectileAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_ProjectileAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAction_ProjectileAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAction_ProjectileAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAction_ProjectileAttack, 2732303334);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USAction_ProjectileAttack>()
	{
		return USAction_ProjectileAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAction_ProjectileAttack(Z_Construct_UClass_USAction_ProjectileAttack, &USAction_ProjectileAttack::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USAction_ProjectileAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAction_ProjectileAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
