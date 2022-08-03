// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SWorldUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWorldUserWidget() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USWorldUserWidget_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USWorldUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
// End Cross Module References
	void USWorldUserWidget::StaticRegisterNativesUSWorldUserWidget()
	{
	}
	UClass* Z_Construct_UClass_USWorldUserWidget_NoRegister()
	{
		return USWorldUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_USWorldUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedAtctor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedAtctor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentSizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentSizeBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USWorldUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SWorldUserWidget.h" },
		{ "ModuleRelativePath", "Public/SWorldUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedAtctor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/SWorldUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedAtctor = { "AttachedAtctor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USWorldUserWidget, AttachedAtctor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedAtctor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedAtctor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/SWorldUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USWorldUserWidget, WorldOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SWorldUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox = { "ParentSizeBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USWorldUserWidget, ParentSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USWorldUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedAtctor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USWorldUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USWorldUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USWorldUserWidget_Statics::ClassParams = {
		&USWorldUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USWorldUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USWorldUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USWorldUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USWorldUserWidget, 2071405514);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USWorldUserWidget>()
	{
		return USWorldUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USWorldUserWidget(Z_Construct_UClass_USWorldUserWidget, &USWorldUserWidget::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USWorldUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USWorldUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
