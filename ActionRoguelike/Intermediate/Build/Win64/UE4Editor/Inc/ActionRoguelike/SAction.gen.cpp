// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAction() {}
// Cross Module References
	ACTIONROGUELIKE_API UScriptStruct* Z_Construct_UScriptStruct_FActionRepData();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FActionRepData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONROGUELIKE_API uint32 Get_Z_Construct_UScriptStruct_FActionRepData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionRepData, Z_Construct_UPackage__Script_ActionRoguelike(), TEXT("ActionRepData"), sizeof(FActionRepData), Get_Z_Construct_UScriptStruct_FActionRepData_Hash());
	}
	return Singleton;
}
template<> ACTIONROGUELIKE_API UScriptStruct* StaticStruct<FActionRepData>()
{
	return FActionRepData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActionRepData(FActionRepData::StaticStruct, TEXT("/Script/ActionRoguelike"), TEXT("ActionRepData"), false, nullptr, nullptr);
static struct FScriptStruct_ActionRoguelike_StaticRegisterNativesFActionRepData
{
	FScriptStruct_ActionRoguelike_StaticRegisterNativesFActionRepData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActionRepData")),new UScriptStruct::TCppStructOps<FActionRepData>);
	}
} ScriptStruct_ActionRoguelike_StaticRegisterNativesFActionRepData;
	struct Z_Construct_UScriptStruct_FActionRepData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[];
#endif
		static void NewProp_bIsRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionRepData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//??\xd6\xa4????\xcd\xac\xca\xb1????\n" },
		{ "ModuleRelativePath", "Public/SAction.h" },
		{ "ToolTip", "??\xd6\xa4????\xcd\xac\xca\xb1????" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionRepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionRepData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionRepData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_MetaData[] = {
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_SetBit(void* Obj)
	{
		((FActionRepData*)Obj)->bIsRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActionRepData), &Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionRepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
		nullptr,
		&NewStructOps,
		"ActionRepData",
		sizeof(FActionRepData),
		alignof(FActionRepData),
		Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActionRepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionRepData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActionRepData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionRoguelike();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActionRepData"), sizeof(FActionRepData), Get_Z_Construct_UScriptStruct_FActionRepData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActionRepData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActionRepData_Hash() { return 3506015927U; }
	DEFINE_FUNCTION(USAction::execStopAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAction_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAction::execStartAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAction_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAction::execCanStart)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStart_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAction::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAction::execOnRep_RepData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RepData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAction::execGetOwningComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USActionComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
		P_NATIVE_END;
	}
	static FName NAME_USAction_CanStart = FName(TEXT("CanStart"));
	bool USAction::CanStart(AActor* Instigator)
	{
		SAction_eventCanStart_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_USAction_CanStart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USAction_StartAction = FName(TEXT("StartAction"));
	void USAction::StartAction(AActor* Instigator)
	{
		SAction_eventStartAction_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_USAction_StartAction),&Parms);
	}
	static FName NAME_USAction_StopAction = FName(TEXT("StopAction"));
	void USAction::StopAction(AActor* Instigator)
	{
		SAction_eventStopAction_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_USAction_StopAction),&Parms);
	}
	void USAction::StaticRegisterNativesUSAction()
	{
		UClass* Class = USAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStart", &USAction::execCanStart },
			{ "GetOwningComponent", &USAction::execGetOwningComponent },
			{ "IsRunning", &USAction::execIsRunning },
			{ "OnRep_RepData", &USAction::execOnRep_RepData },
			{ "StartAction", &USAction::execStartAction },
			{ "StopAction", &USAction::execStopAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAction_CanStart_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USAction_CanStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAction_eventCanStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAction_CanStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAction_eventCanStart_Parms), &Z_Construct_UFunction_USAction_CanStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAction_CanStart_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAction_eventCanStart_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAction_CanStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAction_CanStart_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAction_CanStart_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAction_CanStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAction_CanStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAction, nullptr, "CanStart", nullptr, nullptr, sizeof(SAction_eventCanStart_Parms), Z_Construct_UFunction_USAction_CanStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_CanStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAction_CanStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_CanStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAction_CanStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAction_CanStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAction_GetOwningComponent_Statics
	{
		struct SAction_eventGetOwningComponent_Parms
		{
			USActionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAction_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAction_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAction_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_USActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAction_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAction_GetOwningComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAction_GetOwningComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAction_GetOwningComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAction_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAction, nullptr, "GetOwningComponent", nullptr, nullptr, sizeof(SAction_eventGetOwningComponent_Parms), Z_Construct_UFunction_USAction_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_GetOwningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAction_GetOwningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_GetOwningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAction_GetOwningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAction_GetOwningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAction_IsRunning_Statics
	{
		struct SAction_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USAction_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAction_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAction_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAction_eventIsRunning_Parms), &Z_Construct_UFunction_USAction_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAction_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAction_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAction_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAction_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAction, nullptr, "IsRunning", nullptr, nullptr, sizeof(SAction_eventIsRunning_Parms), Z_Construct_UFunction_USAction_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAction_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAction_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAction_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAction_OnRep_RepData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAction_OnRep_RepData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAction_OnRep_RepData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAction, nullptr, "OnRep_RepData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAction_OnRep_RepData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_OnRep_RepData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAction_OnRep_RepData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAction_OnRep_RepData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAction_StartAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAction_StartAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAction_eventStartAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAction_StartAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAction_StartAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAction_StartAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAction_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAction, nullptr, "StartAction", nullptr, nullptr, sizeof(SAction_eventStartAction_Parms), Z_Construct_UFunction_USAction_StartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_StartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAction_StartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_StartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAction_StartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAction_StartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAction_StopAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAction_StopAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAction_eventStopAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAction_StopAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAction_StopAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAction_StopAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAction_StopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAction, nullptr, "StopAction", nullptr, nullptr, sizeof(SAction_eventStopAction_Parms), Z_Construct_UFunction_USAction_StopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_StopAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAction_StopAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAction_StopAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAction_StopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAction_StopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAction_NoRegister()
	{
		return USAction::StaticClass();
	}
	struct Z_Construct_UClass_USAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAuntoStart_MetaData[];
#endif
		static void NewProp_bAuntoStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAuntoStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantsTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantsTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAction_CanStart, "CanStart" }, // 364523108
		{ &Z_Construct_UFunction_USAction_GetOwningComponent, "GetOwningComponent" }, // 3868691811
		{ &Z_Construct_UFunction_USAction_IsRunning, "IsRunning" }, // 4209980909
		{ &Z_Construct_UFunction_USAction_OnRep_RepData, "OnRep_RepData" }, // 3851535223
		{ &Z_Construct_UFunction_USAction_StartAction, "StartAction" }, // 1316576373
		{ &Z_Construct_UFunction_USAction_StopAction, "StopAction" }, // 3419132261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/* Action nickname to start/stop without a reference to the object */" },
		{ "ModuleRelativePath", "Public/SAction.h" },
		{ "ToolTip", "Action nickname to start/stop without a reference to the object" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction, ActionName), METADATA_PARAMS(Z_Construct_UClass_USAction_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_Statics::NewProp_ActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_Statics::NewProp_bAuntoStart_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	void Z_Construct_UClass_USAction_Statics::NewProp_bAuntoStart_SetBit(void* Obj)
	{
		((USAction*)Obj)->bAuntoStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAction_Statics::NewProp_bAuntoStart = { "bAuntoStart", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAction), &Z_Construct_UClass_USAction_Statics::NewProp_bAuntoStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAction_Statics::NewProp_bAuntoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_Statics::NewProp_bAuntoStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_Statics::NewProp_RepData_MetaData[] = {
		{ "Comment", "//?????????\xc7\xb7?????\xc8\xa5\xd6\xb4?? action can only start if owning actor has none of these tags applied\n//bool bIsRunning;\n" },
		{ "ModuleRelativePath", "Public/SAction.h" },
		{ "ToolTip", "?????????\xc7\xb7?????\xc8\xa5\xd6\xb4?? action can only start if owning actor has none of these tags applied\nbool bIsRunning;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAction_Statics::NewProp_RepData = { "RepData", "OnRep_RepData", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction, RepData), Z_Construct_UScriptStruct_FActionRepData, METADATA_PARAMS(Z_Construct_UClass_USAction_Statics::NewProp_RepData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_Statics::NewProp_RepData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_Statics::NewProp_BlockedTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "//tags ???? ??actor?? activated????actor stop tags???\xc6\xb3?\n" },
		{ "ModuleRelativePath", "Public/SAction.h" },
		{ "ToolTip", "tags ???? ??actor?? activated????actor stop tags???\xc6\xb3?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAction_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USAction_Statics::NewProp_BlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_Statics::NewProp_BlockedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_Statics::NewProp_GrantsTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAction_Statics::NewProp_GrantsTags = { "GrantsTags", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction, GrantsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USAction_Statics::NewProp_GrantsTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_Statics::NewProp_GrantsTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAction_Statics::NewProp_ActionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAction_Statics::NewProp_ActionComp = { "ActionComp", nullptr, (EPropertyFlags)0x0020080000080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAction, ActionComp), Z_Construct_UClass_USActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USAction_Statics::NewProp_ActionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_Statics::NewProp_ActionComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_Statics::NewProp_bAuntoStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_Statics::NewProp_RepData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_Statics::NewProp_BlockedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_Statics::NewProp_GrantsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAction_Statics::NewProp_ActionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAction_Statics::ClassParams = {
		&USAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAction, 4267836410);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USAction>()
	{
		return USAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAction(Z_Construct_UClass_USAction, &USAction::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USAction"), false, nullptr, nullptr, nullptr);

	void USAction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ActionComp(TEXT("ActionComp"));
		static const FName Name_RepData(TEXT("RepData"));

		const bool bIsValid = true
			&& Name_ActionComp == ClassReps[(int32)ENetFields_Private::ActionComp].Property->GetFName()
			&& Name_RepData == ClassReps[(int32)ENetFields_Private::RepData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USAction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
