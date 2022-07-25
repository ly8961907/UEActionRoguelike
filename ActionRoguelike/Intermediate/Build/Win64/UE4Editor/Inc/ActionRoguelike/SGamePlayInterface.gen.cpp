// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SGamePlayInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGamePlayInterface() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USGamePlayInterface_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USGamePlayInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISGamePlayInterface::execInteract)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
		P_NATIVE_END;
	}
	void ISGamePlayInterface::Interact(APawn* InstigatorPawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void USGamePlayInterface::StaticRegisterNativesUSGamePlayInterface()
	{
		UClass* Class = USGamePlayInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &ISGamePlayInterface::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USGamePlayInterface_Interact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGamePlayInterface_eventInteract_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGamePlayInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGamePlayInterface, nullptr, "Interact", nullptr, nullptr, sizeof(SGamePlayInterface_eventInteract_Parms), Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGamePlayInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGamePlayInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USGamePlayInterface_NoRegister()
	{
		return USGamePlayInterface::StaticClass();
	}
	struct Z_Construct_UClass_USGamePlayInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGamePlayInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USGamePlayInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USGamePlayInterface_Interact, "Interact" }, // 1436859658
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGamePlayInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGamePlayInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGamePlayInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISGamePlayInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USGamePlayInterface_Statics::ClassParams = {
		&USGamePlayInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USGamePlayInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGamePlayInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGamePlayInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USGamePlayInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USGamePlayInterface, 3214149552);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USGamePlayInterface>()
	{
		return USGamePlayInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USGamePlayInterface(Z_Construct_UClass_USGamePlayInterface, &USGamePlayInterface::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USGamePlayInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGamePlayInterface);
	static FName NAME_USGamePlayInterface_Interact = FName(TEXT("Interact"));
	void ISGamePlayInterface::Execute_Interact(UObject* O, APawn* InstigatorPawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USGamePlayInterface::StaticClass()));
		SGamePlayInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USGamePlayInterface_Interact);
		if (Func)
		{
			Parms.InstigatorPawn=InstigatorPawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISGamePlayInterface*)(O->GetNativeInterfaceAddress(USGamePlayInterface::StaticClass())))
		{
			I->Interact_Implementation(InstigatorPawn);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
