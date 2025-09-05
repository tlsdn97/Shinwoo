// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PAIGhost.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAIGhost() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APAIGhost();
A2025_05_12_API UClass* Z_Construct_UClass_APAIGhost_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APAIGhost Function OnOverlapBegin
struct Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics
{
	struct PAIGhost_eventOnOverlapBegin_Parms
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
		{ "ModuleRelativePath", "Public/PAIGhost.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PAIGhost_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PAIGhost_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PAIGhost_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PAIGhost_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PAIGhost_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PAIGhost_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PAIGhost_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APAIGhost, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::PAIGhost_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::PAIGhost_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APAIGhost_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APAIGhost_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APAIGhost::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APAIGhost Function OnOverlapBegin

// Begin Class APAIGhost Function OnSeePawn
struct Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics
{
	struct PAIGhost_eventOnSeePawn_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PAIGhost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PAIGhost_eventOnSeePawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APAIGhost, nullptr, "OnSeePawn", nullptr, nullptr, Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::PAIGhost_eventOnSeePawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::PAIGhost_eventOnSeePawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APAIGhost_OnSeePawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APAIGhost_OnSeePawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APAIGhost::execOnSeePawn)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeePawn(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class APAIGhost Function OnSeePawn

// Begin Class APAIGhost
void APAIGhost::StaticRegisterNativesAPAIGhost()
{
	UClass* Class = APAIGhost::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &APAIGhost::execOnOverlapBegin },
		{ "OnSeePawn", &APAIGhost::execOnSeePawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APAIGhost);
UClass* Z_Construct_UClass_APAIGhost_NoRegister()
{
	return APAIGhost::StaticClass();
}
struct Z_Construct_UClass_APAIGhost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PAIGhost.h" },
		{ "ModuleRelativePath", "Public/PAIGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeeds_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PAIGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionSphere_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PAIGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensing_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PAIGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseDuration_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/PAIGhost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeeds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APAIGhost_OnOverlapBegin, "OnOverlapBegin" }, // 2522414421
		{ &Z_Construct_UFunction_APAIGhost_OnSeePawn, "OnSeePawn" }, // 77886465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APAIGhost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APAIGhost_Statics::NewProp_WalkSpeeds = { "WalkSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIGhost, WalkSpeeds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeeds_MetaData), NewProp_WalkSpeeds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APAIGhost_Statics::NewProp_DetectionSphere = { "DetectionSphere", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIGhost, DetectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionSphere_MetaData), NewProp_DetectionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APAIGhost_Statics::NewProp_PawnSensing = { "PawnSensing", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIGhost, PawnSensing), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensing_MetaData), NewProp_PawnSensing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APAIGhost_Statics::NewProp_ChaseDuration = { "ChaseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIGhost, ChaseDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseDuration_MetaData), NewProp_ChaseDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APAIGhost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIGhost_Statics::NewProp_WalkSpeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIGhost_Statics::NewProp_DetectionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIGhost_Statics::NewProp_PawnSensing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIGhost_Statics::NewProp_ChaseDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APAIGhost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APAIGhost_Statics::ClassParams = {
	&APAIGhost::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APAIGhost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost_Statics::Class_MetaDataParams), Z_Construct_UClass_APAIGhost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APAIGhost()
{
	if (!Z_Registration_Info_UClass_APAIGhost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APAIGhost.OuterSingleton, Z_Construct_UClass_APAIGhost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APAIGhost.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APAIGhost>()
{
	return APAIGhost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APAIGhost);
APAIGhost::~APAIGhost() {}
// End Class APAIGhost

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APAIGhost, APAIGhost::StaticClass, TEXT("APAIGhost"), &Z_Registration_Info_UClass_APAIGhost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APAIGhost), 1982578273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost_h_1824455119(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
