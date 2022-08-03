// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SActionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSActionComponent() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionComponent_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(USActionComponent::execStopActionByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopActionByName(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USActionComponent::execStartActionByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartActionByName(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USActionComponent::execRemoveAction)
	{
		P_GET_OBJECT(USAction,Z_Param_ActionToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAction(Z_Param_ActionToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USActionComponent::execAddAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAction(Z_Param_Instigator,Z_Param_ActionClass);
		P_NATIVE_END;
	}
	void USActionComponent::StaticRegisterNativesUSActionComponent()
	{
		UClass* Class = USActionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAction", &USActionComponent::execAddAction },
			{ "RemoveAction", &USActionComponent::execRemoveAction },
			{ "StartActionByName", &USActionComponent::execStartActionByName },
			{ "StopActionByName", &USActionComponent::execStopActionByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USActionComponent_AddAction_Statics
	{
		struct SActionComponent_eventAddAction_Parms
		{
			AActor* Instigator;
			TSubclassOf<USAction>  ActionClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USActionComponent_AddAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionComponent_eventAddAction_Parms, ActionClass), Z_Construct_UClass_USAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USActionComponent_AddAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionComponent_eventAddAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USActionComponent_AddAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_AddAction_Statics::NewProp_ActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_AddAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USActionComponent_AddAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "Comment", "//??\xce\xaa???\xc7\xb6????\xc4\xb2???\xd2\xbb??\xd6\xb8?\xeb\xa3\xac????????\xd2\xaa\xd2\xbb??????\xcd\xb7?\xc4\xbc?\n" },
		{ "ModuleRelativePath", "Public/SActionComponent.h" },
		{ "ToolTip", "??\xce\xaa???\xc7\xb6????\xc4\xb2???\xd2\xbb??\xd6\xb8?\xeb\xa3\xac????????\xd2\xaa\xd2\xbb??????\xcd\xb7?\xc4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USActionComponent_AddAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USActionComponent, nullptr, "AddAction", nullptr, nullptr, sizeof(SActionComponent_eventAddAction_Parms), Z_Construct_UFunction_USActionComponent_AddAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionComponent_AddAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USActionComponent_AddAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionComponent_AddAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USActionComponent_AddAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USActionComponent_AddAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USActionComponent_RemoveAction_Statics
	{
		struct SActionComponent_eventRemoveAction_Parms
		{
			USAction* ActionToRemove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::NewProp_ActionToRemove = { "ActionToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionComponent_eventRemoveAction_Parms, ActionToRemove), Z_Construct_UClass_USAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::NewProp_ActionToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USActionComponent, nullptr, "RemoveAction", nullptr, nullptr, sizeof(SActionComponent_eventRemoveAction_Parms), Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USActionComponent_RemoveAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USActionComponent_RemoveAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USActionComponent_StartActionByName_Statics
	{
		struct SActionComponent_eventStartActionByName_Parms
		{
			AActor* Instigator;
			FName ActionName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SActionComponent_eventStartActionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SActionComponent_eventStartActionByName_Parms), &Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionComponent_eventStartActionByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionComponent_eventStartActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USActionComponent, nullptr, "StartActionByName", nullptr, nullptr, sizeof(SActionComponent_eventStartActionByName_Parms), Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USActionComponent_StartActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USActionComponent_StartActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USActionComponent_StopActionByName_Statics
	{
		struct SActionComponent_eventStopActionByName_Parms
		{
			AActor* Instigator;
			FName ActionName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SActionComponent_eventStopActionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SActionComponent_eventStopActionByName_Parms), &Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionComponent_eventStopActionByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SActionComponent_eventStopActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USActionComponent, nullptr, "StopActionByName", nullptr, nullptr, sizeof(SActionComponent_eventStopActionByName_Parms), Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USActionComponent_StopActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USActionComponent_StopActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USActionComponent_NoRegister()
	{
		return USActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultActions;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveGameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveGameplayTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USActionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USActionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USActionComponent_AddAction, "AddAction" }, // 2501547961
		{ &Z_Construct_UFunction_USActionComponent_RemoveAction, "RemoveAction" }, // 2642186221
		{ &Z_Construct_UFunction_USActionComponent_StartActionByName, "StartActionByName" }, // 442911286
		{ &Z_Construct_UFunction_USActionComponent_StopActionByName, "StopActionByName" }, // 4150119106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SActionComponent.h" },
		{ "ModuleRelativePath", "Public/SActionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionComponent_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/SActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USActionComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USActionComponent, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USActionComponent_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USActionComponent_Statics::NewProp_Actions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USActionComponent_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionComponent_Statics::NewProp_DefaultActions_MetaData[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/SActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USActionComponent_Statics::NewProp_DefaultActions = { "DefaultActions", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USActionComponent, DefaultActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USActionComponent_Statics::NewProp_DefaultActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USActionComponent_Statics::NewProp_DefaultActions_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USActionComponent_Statics::NewProp_DefaultActions_Inner = { "DefaultActions", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/SActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USActionComponent_Statics::NewProp_ActiveGameplayTags = { "ActiveGameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USActionComponent, ActiveGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USActionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USActionComponent_Statics::NewProp_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USActionComponent_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USActionComponent_Statics::NewProp_DefaultActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USActionComponent_Statics::NewProp_DefaultActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USActionComponent_Statics::NewProp_ActiveGameplayTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USActionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USActionComponent_Statics::ClassParams = {
		&USActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USActionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USActionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USActionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USActionComponent, 2195156578);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USActionComponent>()
	{
		return USActionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USActionComponent(Z_Construct_UClass_USActionComponent, &USActionComponent::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USActionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USActionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
