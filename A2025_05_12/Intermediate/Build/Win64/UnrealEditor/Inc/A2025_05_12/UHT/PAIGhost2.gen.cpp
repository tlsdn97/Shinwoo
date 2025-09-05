// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PAIGhost2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAIGhost2() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APAIGhost2();
A2025_05_12_API UClass* Z_Construct_UClass_APAIGhost2_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APAIGhost2 Function OnSeePawn2
struct Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics
{
	struct PAIGhost2_eventOnSeePawn2_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PAIGhost2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PAIGhost2_eventOnSeePawn2_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APAIGhost2, nullptr, "OnSeePawn2", nullptr, nullptr, Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::PropPointers), sizeof(Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::PAIGhost2_eventOnSeePawn2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::Function_MetaDataParams), Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::PAIGhost2_eventOnSeePawn2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APAIGhost2_OnSeePawn2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APAIGhost2_OnSeePawn2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APAIGhost2::execOnSeePawn2)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeePawn2(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class APAIGhost2 Function OnSeePawn2

// Begin Class APAIGhost2
void APAIGhost2::StaticRegisterNativesAPAIGhost2()
{
	UClass* Class = APAIGhost2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSeePawn2", &APAIGhost2::execOnSeePawn2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APAIGhost2);
UClass* Z_Construct_UClass_APAIGhost2_NoRegister()
{
	return APAIGhost2::StaticClass();
}
struct Z_Construct_UClass_APAIGhost2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PAIGhost2.h" },
		{ "ModuleRelativePath", "Public/PAIGhost2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PAIGhost2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeeds_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PAIGhost2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeeds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APAIGhost2_OnSeePawn2, "OnSeePawn2" }, // 3868858939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APAIGhost2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APAIGhost2_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIGhost2, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComp_MetaData), NewProp_PawnSensingComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APAIGhost2_Statics::NewProp_WalkSpeeds = { "WalkSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIGhost2, WalkSpeeds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeeds_MetaData), NewProp_WalkSpeeds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APAIGhost2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIGhost2_Statics::NewProp_PawnSensingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIGhost2_Statics::NewProp_WalkSpeeds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APAIGhost2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APAIGhost2_Statics::ClassParams = {
	&APAIGhost2::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APAIGhost2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost2_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost2_Statics::Class_MetaDataParams), Z_Construct_UClass_APAIGhost2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APAIGhost2()
{
	if (!Z_Registration_Info_UClass_APAIGhost2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APAIGhost2.OuterSingleton, Z_Construct_UClass_APAIGhost2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APAIGhost2.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APAIGhost2>()
{
	return APAIGhost2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APAIGhost2);
APAIGhost2::~APAIGhost2() {}
// End Class APAIGhost2

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APAIGhost2, APAIGhost2::StaticClass, TEXT("APAIGhost2"), &Z_Registration_Info_UClass_APAIGhost2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APAIGhost2), 1757585903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_3393497563(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
