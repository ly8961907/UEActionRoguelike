// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/AI/SBTService_CheckHealth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBTService_CheckHealth() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USBTService_CheckHealth_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USBTService_CheckHealth();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBTService_CheckHealth::StaticRegisterNativesUSBTService_CheckHealth()
	{
	}
	UClass* Z_Construct_UClass_USBTService_CheckHealth_NoRegister()
	{
		return USBTService_CheckHealth::StaticClass();
	}
	struct Z_Construct_UClass_USBTService_CheckHealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowHealthFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowHealthFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowHealthkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowHealthkey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBTService_CheckHealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTService_CheckHealth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/SBTService_CheckHealth.h" },
		{ "ModuleRelativePath", "Public/AI/SBTService_CheckHealth.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthFraction_MetaData[] = {
		{ "Category", "AI" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/AI/SBTService_CheckHealth.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthFraction = { "LowHealthFraction", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBTService_CheckHealth, LowHealthFraction), METADATA_PARAMS(Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthkey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SBTService_CheckHealth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthkey = { "LowHealthkey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBTService_CheckHealth, LowHealthkey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthkey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBTService_CheckHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTService_CheckHealth_Statics::NewProp_LowHealthkey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBTService_CheckHealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBTService_CheckHealth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBTService_CheckHealth_Statics::ClassParams = {
		&USBTService_CheckHealth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBTService_CheckHealth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBTService_CheckHealth_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBTService_CheckHealth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBTService_CheckHealth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBTService_CheckHealth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBTService_CheckHealth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBTService_CheckHealth, 1890171492);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USBTService_CheckHealth>()
	{
		return USBTService_CheckHealth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBTService_CheckHealth(Z_Construct_UClass_USBTService_CheckHealth, &USBTService_CheckHealth::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USBTService_CheckHealth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBTService_CheckHealth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
