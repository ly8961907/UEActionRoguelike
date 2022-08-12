// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerController() {}
// Cross Module References
	ACTIONROGUELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPlayerController_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics
	{
		struct _Script_ActionRoguelike_eventOnPawnChanged_Parms
		{
			APawn* NewPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRoguelike_eventOnPawnChanged_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::NewProp_NewPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRoguelike, nullptr, "OnPawnChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionRoguelike_eventOnPawnChanged_Parms), Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ASPlayerController::StaticRegisterNativesASPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASPlayerController_NoRegister()
	{
		return ASPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPawnChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPawnChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SPlayerController.h" },
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnPawnChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnPawnChanged = { "OnPawnChanged", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPlayerController, OnPawnChanged), Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnPawnChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnPawnChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnPawnChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerController_Statics::ClassParams = {
		&ASPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerController, 3052321390);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASPlayerController>()
	{
		return ASPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerController(Z_Construct_UClass_ASPlayerController, &ASPlayerController::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("ASPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
