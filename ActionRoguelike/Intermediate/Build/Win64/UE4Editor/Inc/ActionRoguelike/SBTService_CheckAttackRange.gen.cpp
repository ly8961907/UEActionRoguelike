// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/AI/SBTService_CheckAttackRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBTService_CheckAttackRange() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USBTService_CheckAttackRange_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USBTService_CheckAttackRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBTService_CheckAttackRange::StaticRegisterNativesUSBTService_CheckAttackRange()
	{
	}
	UClass* Z_Construct_UClass_USBTService_CheckAttackRange_NoRegister()
	{
		return USBTService_CheckAttackRange::StaticClass();
	}
	struct Z_Construct_UClass_USBTService_CheckAttackRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRangeKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackRangeKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBTService_CheckAttackRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTService_CheckAttackRange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/SBTService_CheckAttackRange.h" },
		{ "ModuleRelativePath", "Public/AI/SBTService_CheckAttackRange.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_InSight_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SBTService_CheckAttackRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_InSight = { "InSight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBTService_CheckAttackRange, InSight), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_InSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_InSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_AttackRangeKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SBTService_CheckAttackRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_AttackRangeKey = { "AttackRangeKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBTService_CheckAttackRange, AttackRangeKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_AttackRangeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_AttackRangeKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBTService_CheckAttackRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_InSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTService_CheckAttackRange_Statics::NewProp_AttackRangeKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBTService_CheckAttackRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBTService_CheckAttackRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBTService_CheckAttackRange_Statics::ClassParams = {
		&USBTService_CheckAttackRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBTService_CheckAttackRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBTService_CheckAttackRange_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBTService_CheckAttackRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBTService_CheckAttackRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBTService_CheckAttackRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBTService_CheckAttackRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBTService_CheckAttackRange, 2746106038);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USBTService_CheckAttackRange>()
	{
		return USBTService_CheckAttackRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBTService_CheckAttackRange(Z_Construct_UClass_USBTService_CheckAttackRange, &USBTService_CheckAttackRange::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USBTService_CheckAttackRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBTService_CheckAttackRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
