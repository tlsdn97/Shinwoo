// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PNcpCharacter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePNcpCharacter() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APNcpCharacter();
A2025_05_12_API UClass* Z_Construct_UClass_APNcpCharacter_NoRegister();
A2025_05_12_API UClass* Z_Construct_UClass_APPlayer_NoRegister();
A2025_05_12_API UClass* Z_Construct_UClass_UPDialogueWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APNcpCharacter Function EndConversation
struct Z_Construct_UFunction_APNcpCharacter_EndConversation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APNcpCharacter_EndConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APNcpCharacter, nullptr, "EndConversation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_EndConversation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APNcpCharacter_EndConversation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APNcpCharacter_EndConversation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APNcpCharacter_EndConversation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APNcpCharacter::execEndConversation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndConversation();
	P_NATIVE_END;
}
// End Class APNcpCharacter Function EndConversation

// Begin Class APNcpCharacter Function OnPlayerEnter
struct Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics
{
	struct PNcpCharacter_eventOnPlayerEnter_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sphere Overlap\n" },
#endif
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere Overlap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PNcpCharacter_eventOnPlayerEnter_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PNcpCharacter_eventOnPlayerEnter_Parms), &Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APNcpCharacter, nullptr, "OnPlayerEnter", nullptr, nullptr, Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::PNcpCharacter_eventOnPlayerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::PNcpCharacter_eventOnPlayerEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APNcpCharacter::execOnPlayerEnter)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APNcpCharacter Function OnPlayerEnter

// Begin Class APNcpCharacter Function OnPlayerExit
struct Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics
{
	struct PNcpCharacter_eventOnPlayerExit_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerExit_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventOnPlayerExit_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APNcpCharacter, nullptr, "OnPlayerExit", nullptr, nullptr, Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::PNcpCharacter_eventOnPlayerExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::PNcpCharacter_eventOnPlayerExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APNcpCharacter_OnPlayerExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APNcpCharacter_OnPlayerExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APNcpCharacter::execOnPlayerExit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerExit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class APNcpCharacter Function OnPlayerExit

// Begin Class APNcpCharacter Function StartConversation
struct Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics
{
	struct PNcpCharacter_eventStartConversation_Parms
	{
		APPlayer* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNcpCharacter_eventStartConversation_Parms, Player), Z_Construct_UClass_APPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APNcpCharacter, nullptr, "StartConversation", nullptr, nullptr, Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::PNcpCharacter_eventStartConversation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::PNcpCharacter_eventStartConversation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APNcpCharacter_StartConversation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APNcpCharacter_StartConversation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APNcpCharacter::execStartConversation)
{
	P_GET_OBJECT(APPlayer,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartConversation(Z_Param_Player);
	P_NATIVE_END;
}
// End Class APNcpCharacter Function StartConversation

// Begin Class APNcpCharacter
void APNcpCharacter::StaticRegisterNativesAPNcpCharacter()
{
	UClass* Class = APNcpCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndConversation", &APNcpCharacter::execEndConversation },
		{ "OnPlayerEnter", &APNcpCharacter::execOnPlayerEnter },
		{ "OnPlayerExit", &APNcpCharacter::execOnPlayerExit },
		{ "StartConversation", &APNcpCharacter::execStartConversation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APNcpCharacter);
UClass* Z_Construct_UClass_APNcpCharacter_NoRegister()
{
	return APNcpCharacter::StaticClass();
}
struct Z_Construct_UClass_APNcpCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PNcpCharacter.h" },
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLines_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TalkMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/PNcpCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueLines;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TalkMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APNcpCharacter_EndConversation, "EndConversation" }, // 3807564318
		{ &Z_Construct_UFunction_APNcpCharacter_OnPlayerEnter, "OnPlayerEnter" }, // 1755638870
		{ &Z_Construct_UFunction_APNcpCharacter_OnPlayerExit, "OnPlayerExit" }, // 2546998972
		{ &Z_Construct_UFunction_APNcpCharacter_StartConversation, "StartConversation" }, // 1392579152
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APNcpCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APNcpCharacter_Statics::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APNcpCharacter, InteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APNcpCharacter_Statics::NewProp_DialogueLines_Inner = { "DialogueLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APNcpCharacter_Statics::NewProp_DialogueLines = { "DialogueLines", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APNcpCharacter, DialogueLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLines_MetaData), NewProp_DialogueLines_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APNcpCharacter_Statics::NewProp_DialogueWidgetClass = { "DialogueWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APNcpCharacter, DialogueWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPDialogueWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidgetClass_MetaData), NewProp_DialogueWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APNcpCharacter_Statics::NewProp_DialogueWidgetInstance = { "DialogueWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APNcpCharacter, DialogueWidgetInstance), Z_Construct_UClass_UPDialogueWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidgetInstance_MetaData), NewProp_DialogueWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APNcpCharacter_Statics::NewProp_CurrentTargetPlayer = { "CurrentTargetPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APNcpCharacter, CurrentTargetPlayer), Z_Construct_UClass_APPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetPlayer_MetaData), NewProp_CurrentTargetPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APNcpCharacter_Statics::NewProp_TalkMontage = { "TalkMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APNcpCharacter, TalkMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TalkMontage_MetaData), NewProp_TalkMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APNcpCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APNcpCharacter_Statics::NewProp_InteractionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APNcpCharacter_Statics::NewProp_DialogueLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APNcpCharacter_Statics::NewProp_DialogueLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APNcpCharacter_Statics::NewProp_DialogueWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APNcpCharacter_Statics::NewProp_DialogueWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APNcpCharacter_Statics::NewProp_CurrentTargetPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APNcpCharacter_Statics::NewProp_TalkMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APNcpCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APNcpCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APNcpCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APNcpCharacter_Statics::ClassParams = {
	&APNcpCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APNcpCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APNcpCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APNcpCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APNcpCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APNcpCharacter()
{
	if (!Z_Registration_Info_UClass_APNcpCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APNcpCharacter.OuterSingleton, Z_Construct_UClass_APNcpCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APNcpCharacter.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APNcpCharacter>()
{
	return APNcpCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APNcpCharacter);
APNcpCharacter::~APNcpCharacter() {}
// End Class APNcpCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNcpCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APNcpCharacter, APNcpCharacter::StaticClass, TEXT("APNcpCharacter"), &Z_Registration_Info_UClass_APNcpCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APNcpCharacter), 2000863065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNcpCharacter_h_2837153086(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNcpCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNcpCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
