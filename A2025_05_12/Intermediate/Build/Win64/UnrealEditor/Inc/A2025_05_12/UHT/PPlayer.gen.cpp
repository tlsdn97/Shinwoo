// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPlayer() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APPlayer();
A2025_05_12_API UClass* Z_Construct_UClass_APPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APPlayer Function ToggleShoulderLight
struct Z_Construct_UFunction_APPlayer_ToggleShoulderLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPlayer_ToggleShoulderLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPlayer, nullptr, "ToggleShoulderLight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APPlayer_ToggleShoulderLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_APPlayer_ToggleShoulderLight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APPlayer_ToggleShoulderLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPlayer_ToggleShoulderLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APPlayer::execToggleShoulderLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleShoulderLight();
	P_NATIVE_END;
}
// End Class APPlayer Function ToggleShoulderLight

// Begin Class APPlayer
void APPlayer::StaticRegisterNativesAPPlayer()
{
	UClass* Class = APPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleShoulderLight", &APPlayer::execToggleShoulderLight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPlayer);
UClass* Z_Construct_UClass_APPlayer_NoRegister()
{
	return APPlayer::StaticClass();
}
struct Z_Construct_UClass_APPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PPlayer.h" },
		{ "ModuleRelativePath", "Public/PPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flashlight_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightRoot_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flashlight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APPlayer_ToggleShoulderLight, "ToggleShoulderLight" }, // 2968208180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPlayer_Statics::NewProp_FirstPersonCamera = { "FirstPersonCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPlayer, FirstPersonCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCamera_MetaData), NewProp_FirstPersonCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPlayer_Statics::NewProp_Flashlight = { "Flashlight", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPlayer, Flashlight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flashlight_MetaData), NewProp_Flashlight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPlayer_Statics::NewProp_FlashlightRoot = { "FlashlightRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPlayer, FlashlightRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashlightRoot_MetaData), NewProp_FlashlightRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APPlayer_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPlayer, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APPlayer_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPlayer, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlayer_Statics::NewProp_FirstPersonCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlayer_Statics::NewProp_Flashlight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlayer_Statics::NewProp_FlashlightRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlayer_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlayer_Statics::NewProp_RunSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPlayer_Statics::ClassParams = {
	&APPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_APPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPlayer()
{
	if (!Z_Registration_Info_UClass_APPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPlayer.OuterSingleton, Z_Construct_UClass_APPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPlayer.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APPlayer>()
{
	return APPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPlayer);
APPlayer::~APPlayer() {}
// End Class APPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPlayer, APPlayer::StaticClass, TEXT("APPlayer"), &Z_Registration_Info_UClass_APPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPlayer), 4055633681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_3957327247(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
