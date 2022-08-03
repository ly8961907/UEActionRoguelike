// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SActionEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSActionEffect() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionEffect_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionEffect();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USActionEffect::execExecutePeriodicEffect)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecutePeriodicEffect_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	static FName NAME_USActionEffect_ExecutePeriodicEffect = FName(TEXT("ExecutePeriodicEffect"));
	void USActionEffect::ExecutePeriodicEffect(AActor* Instigator)
	{
		SActionEffect_eventExecutePeriodicEffect_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_USActionEffect_ExecutePeriodicEffect),&Parms);
	}
	void USActionEffect::StaticRegisterNativesUSActionEffect()
	{
		UClass* Class = USActionEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecutePeriodicEffect", &USActionEffect::execExecutePeriodicEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionEffect_eventExecutePeriodicEffect_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/SActionEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USActionEffect, nullptr, "ExecutePeriodicEffect", nullptr, nullptr, sizeof(SActionEffect_eventExecutePeriodicEffect_Parms), Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USActionEffect_NoRegister()
	{
		return USActionEffect::StaticClass();
	}
	struct Z_Construct_UClass_USActionEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USActionEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USActionEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USActionEffect_ExecutePeriodicEffect, "ExecutePeriodicEffect" }, // 2645079313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SActionEffect.h" },
		{ "ModuleRelativePath", "Public/SActionEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionEffect_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/SActionEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USActionEffect_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USActionEffect, Period), METADATA_PARAMS(Z_Construct_UClass_USActionEffect_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USActionEffect_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/SActionEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USActionEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USActionEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_USActionEffect_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USActionEffect_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USActionEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USActionEffect_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USActionEffect_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USActionEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USActionEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USActionEffect_Statics::ClassParams = {
		&USActionEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USActionEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USActionEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USActionEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USActionEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USActionEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USActionEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USActionEffect, 1934243634);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USActionEffect>()
	{
		return USActionEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USActionEffect(Z_Construct_UClass_USActionEffect, &USActionEffect::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USActionEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USActionEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
