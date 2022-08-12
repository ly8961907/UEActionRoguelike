// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SActionEffect_Thorns.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSActionEffect_Thorns() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionEffect_Thorns_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionEffect_Thorns();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionEffect();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAttributeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USActionEffect_Thorns::execOnHealthChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_GET_OBJECT(USAttributeComponent,Z_Param_OwningComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged(Z_Param_InstigatorActor,Z_Param_OwningComp,Z_Param_NewHealth,Z_Param_Delta);
		P_NATIVE_END;
	}
	void USActionEffect_Thorns::StaticRegisterNativesUSActionEffect_Thorns()
	{
		UClass* Class = USActionEffect_Thorns::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChanged", &USActionEffect_Thorns::execOnHealthChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics
	{
		struct SActionEffect_Thorns_eventOnHealthChanged_Parms
		{
			AActor* InstigatorActor;
			USAttributeComponent* OwningComp;
			float NewHealth;
			float Delta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionEffect_Thorns_eventOnHealthChanged_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionEffect_Thorns_eventOnHealthChanged_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionEffect_Thorns_eventOnHealthChanged_Parms, OwningComp), Z_Construct_UClass_USAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_OwningComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionEffect_Thorns_eventOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_NewHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_OwningComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SActionEffect_Thorns.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USActionEffect_Thorns, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(SActionEffect_Thorns_eventOnHealthChanged_Parms), Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USActionEffect_Thorns_NoRegister()
	{
		return USActionEffect_Thorns::StaticClass();
	}
	struct Z_Construct_UClass_USActionEffect_Thorns_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectFraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USActionEffect_Thorns_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USActionEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USActionEffect_Thorns_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USActionEffect_Thorns_OnHealthChanged, "OnHealthChanged" }, // 3099573285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionEffect_Thorns_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SActionEffect_Thorns.h" },
		{ "ModuleRelativePath", "Public/SActionEffect_Thorns.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionEffect_Thorns_Statics::NewProp_ReflectFraction_MetaData[] = {
		{ "Category", "Thorns" },
		{ "ModuleRelativePath", "Public/SActionEffect_Thorns.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USActionEffect_Thorns_Statics::NewProp_ReflectFraction = { "ReflectFraction", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USActionEffect_Thorns, ReflectFraction), METADATA_PARAMS(Z_Construct_UClass_USActionEffect_Thorns_Statics::NewProp_ReflectFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USActionEffect_Thorns_Statics::NewProp_ReflectFraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USActionEffect_Thorns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USActionEffect_Thorns_Statics::NewProp_ReflectFraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USActionEffect_Thorns_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USActionEffect_Thorns>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USActionEffect_Thorns_Statics::ClassParams = {
		&USActionEffect_Thorns::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USActionEffect_Thorns_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USActionEffect_Thorns_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USActionEffect_Thorns_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USActionEffect_Thorns_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USActionEffect_Thorns()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USActionEffect_Thorns_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USActionEffect_Thorns, 1763624379);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USActionEffect_Thorns>()
	{
		return USActionEffect_Thorns::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USActionEffect_Thorns(Z_Construct_UClass_USActionEffect_Thorns, &USActionEffect_Thorns::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USActionEffect_Thorns"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USActionEffect_Thorns);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
