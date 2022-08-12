// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SGameplayFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameplayFunctionLibrary() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USGameplayFunctionLibrary_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USGameplayFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(USGameplayFunctionLibrary::execApplyMana)
	{
		P_GET_OBJECT(AActor,Z_Param_ManaCauser);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ManaAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USGameplayFunctionLibrary::ApplyMana(Z_Param_ManaCauser,Z_Param_TargetActor,Z_Param_ManaAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USGameplayFunctionLibrary::execApplyDirectionalDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USGameplayFunctionLibrary::ApplyDirectionalDamage(Z_Param_DamageCauser,Z_Param_TargetActor,Z_Param_DamageAmount,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USGameplayFunctionLibrary::execApplyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USGameplayFunctionLibrary::ApplyDamage(Z_Param_DamageCauser,Z_Param_TargetActor,Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	void USGameplayFunctionLibrary::StaticRegisterNativesUSGameplayFunctionLibrary()
	{
		UClass* Class = USGameplayFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &USGameplayFunctionLibrary::execApplyDamage },
			{ "ApplyDirectionalDamage", &USGameplayFunctionLibrary::execApplyDirectionalDamage },
			{ "ApplyMana", &USGameplayFunctionLibrary::execApplyMana },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics
	{
		struct SGameplayFunctionLibrary_eventApplyDamage_Parms
		{
			AActor* DamageCauser;
			AActor* TargetActor;
			float DamageAmount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SGameplayFunctionLibrary_eventApplyDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameplayFunctionLibrary_eventApplyDamage_Parms), &Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/SGameplayFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(SGameplayFunctionLibrary_eventApplyDamage_Parms), Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics
	{
		struct SGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms
		{
			AActor* DamageCauser;
			AActor* TargetActor;
			float DamageAmount;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms), &Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/SGameplayFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "ApplyDirectionalDamage", nullptr, nullptr, sizeof(SGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms), Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics
	{
		struct SGameplayFunctionLibrary_eventApplyMana_Parms
		{
			AActor* ManaCauser;
			AActor* TargetActor;
			float ManaAmount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManaAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SGameplayFunctionLibrary_eventApplyMana_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameplayFunctionLibrary_eventApplyMana_Parms), &Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_ManaAmount = { "ManaAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyMana_Parms, ManaAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyMana_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_ManaCauser = { "ManaCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayFunctionLibrary_eventApplyMana_Parms, ManaCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_ManaAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::NewProp_ManaCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/SGameplayFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "ApplyMana", nullptr, nullptr, sizeof(SGameplayFunctionLibrary_eventApplyMana_Parms), Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USGameplayFunctionLibrary_NoRegister()
	{
		return USGameplayFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USGameplayFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameplayFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USGameplayFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDamage, "ApplyDamage" }, // 3455631137
		{ &Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyDirectionalDamage, "ApplyDirectionalDamage" }, // 854743915
		{ &Z_Construct_UFunction_USGameplayFunctionLibrary_ApplyMana, "ApplyMana" }, // 1910529047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SGameplayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SGameplayFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameplayFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGameplayFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USGameplayFunctionLibrary_Statics::ClassParams = {
		&USGameplayFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USGameplayFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGameplayFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USGameplayFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USGameplayFunctionLibrary, 2367789583);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USGameplayFunctionLibrary>()
	{
		return USGameplayFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USGameplayFunctionLibrary(Z_Construct_UClass_USGameplayFunctionLibrary, &USGameplayFunctionLibrary::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USGameplayFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGameplayFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
