// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SItemChest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSItemChest() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASItemChest_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASItemChest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USGamePlayInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASItemChest::execOnRep_LidOpened)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LidOpened();
		P_NATIVE_END;
	}
	void ASItemChest::StaticRegisterNativesASItemChest()
	{
		UClass* Class = ASItemChest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_LidOpened", &ASItemChest::execOnRep_LidOpened },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASItemChest_OnRep_LidOpened_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemChest_OnRep_LidOpened_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//???????\xc7\xb2?\xc8\xbbUnreal?\xcd\xb2?\xd6\xaa??\xc8\xa5?????\xd2\xb5???????????\n" },
		{ "ModuleRelativePath", "Public/SItemChest.h" },
		{ "ToolTip", "???????\xc7\xb2?\xc8\xbbUnreal?\xcd\xb2?\xd6\xaa??\xc8\xa5?????\xd2\xb5???????????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASItemChest_OnRep_LidOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASItemChest, nullptr, "OnRep_LidOpened", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASItemChest_OnRep_LidOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemChest_OnRep_LidOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASItemChest_OnRep_LidOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASItemChest_OnRep_LidOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASItemChest_NoRegister()
	{
		return ASItemChest::StaticClass();
	}
	struct Z_Construct_UClass_ASItemChest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LidMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LidMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLidOpened_MetaData[];
#endif
		static void NewProp_bLidOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLidOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASItemChest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASItemChest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASItemChest_OnRep_LidOpened, "OnRep_LidOpened" }, // 3910505567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemChest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SItemChest.h" },
		{ "ModuleRelativePath", "Public/SItemChest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemChest_Statics::NewProp_LidMesh_MetaData[] = {
		{ "Category", "SItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SItemChest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASItemChest_Statics::NewProp_LidMesh = { "LidMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASItemChest, LidMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASItemChest_Statics::NewProp_LidMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemChest_Statics::NewProp_LidMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemChest_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "SItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SItemChest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASItemChest_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASItemChest, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASItemChest_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemChest_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemChest_Statics::NewProp_bLidOpened_MetaData[] = {
		{ "Category", "SItemChest" },
		{ "Comment", "//???\xc3\xa3?\xc3\xbf???????????\xe4\xbb\xaf?????\xc7\xbf?????unreal\xc8\xa5????\xd2\xbb?????????\xc2\xbe??\xc7\xb5????? ORLO??????????\xcd\xac\xca\xb1 ??????????????UFUNCTION????\n//RepNotify\n" },
		{ "ModuleRelativePath", "Public/SItemChest.h" },
		{ "ToolTip", "???\xc3\xa3?\xc3\xbf???????????\xe4\xbb\xaf?????\xc7\xbf?????unreal\xc8\xa5????\xd2\xbb?????????\xc2\xbe??\xc7\xb5????? ORLO??????????\xcd\xac\xca\xb1 ??????????????UFUNCTION????\nRepNotify" },
	};
#endif
	void Z_Construct_UClass_ASItemChest_Statics::NewProp_bLidOpened_SetBit(void* Obj)
	{
		((ASItemChest*)Obj)->bLidOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASItemChest_Statics::NewProp_bLidOpened = { "bLidOpened", "OnRep_LidOpened", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASItemChest), &Z_Construct_UClass_ASItemChest_Statics::NewProp_bLidOpened_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASItemChest_Statics::NewProp_bLidOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemChest_Statics::NewProp_bLidOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemChest_Statics::NewProp_TargetPitch_MetaData[] = {
		{ "Category", "SItemChest" },
		{ "ModuleRelativePath", "Public/SItemChest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASItemChest_Statics::NewProp_TargetPitch = { "TargetPitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASItemChest, TargetPitch), METADATA_PARAMS(Z_Construct_UClass_ASItemChest_Statics::NewProp_TargetPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemChest_Statics::NewProp_TargetPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASItemChest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemChest_Statics::NewProp_LidMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemChest_Statics::NewProp_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemChest_Statics::NewProp_bLidOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemChest_Statics::NewProp_TargetPitch,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASItemChest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USGamePlayInterface_NoRegister, (int32)VTABLE_OFFSET(ASItemChest, ISGamePlayInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASItemChest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASItemChest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASItemChest_Statics::ClassParams = {
		&ASItemChest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASItemChest_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASItemChest_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASItemChest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemChest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASItemChest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASItemChest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASItemChest, 1178715434);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASItemChest>()
	{
		return ASItemChest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASItemChest(Z_Construct_UClass_ASItemChest, &ASItemChest::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("ASItemChest"), false, nullptr, nullptr, nullptr);

	void ASItemChest::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bLidOpened(TEXT("bLidOpened"));

		const bool bIsValid = true
			&& Name_bLidOpened == ClassReps[(int32)ENetFields_Private::bLidOpened].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASItemChest"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASItemChest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
