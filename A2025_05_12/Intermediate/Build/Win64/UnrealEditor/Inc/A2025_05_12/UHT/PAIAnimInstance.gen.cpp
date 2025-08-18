// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PAIAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAIAnimInstance() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPAIAnimInstance();
A2025_05_12_API UClass* Z_Construct_UClass_UPAIAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPAIAnimInstance
void UPAIAnimInstance::StaticRegisterNativesUPAIAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPAIAnimInstance);
UClass* Z_Construct_UClass_UPAIAnimInstance_NoRegister()
{
	return UPAIAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPAIAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PAIAnimInstance.h" },
		{ "ModuleRelativePath", "Public/PAIAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PAIAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PAIAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PAIAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPAIAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPAIAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPAIAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UPAIAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
{
	((UPAIAnimInstance*)Obj)->bIsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPAIAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPAIAnimInstance), &Z_Construct_UClass_UPAIAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInAir_MetaData), NewProp_bIsInAir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPAIAnimInstance_Statics::NewProp_YawRate = { "YawRate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPAIAnimInstance, YawRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRate_MetaData), NewProp_YawRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPAIAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPAIAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPAIAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPAIAnimInstance_Statics::NewProp_YawRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPAIAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPAIAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPAIAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPAIAnimInstance_Statics::ClassParams = {
	&UPAIAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPAIAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPAIAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPAIAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPAIAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPAIAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPAIAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPAIAnimInstance.OuterSingleton, Z_Construct_UClass_UPAIAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPAIAnimInstance.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPAIAnimInstance>()
{
	return UPAIAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPAIAnimInstance);
UPAIAnimInstance::~UPAIAnimInstance() {}
// End Class UPAIAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPAIAnimInstance, UPAIAnimInstance::StaticClass, TEXT("UPAIAnimInstance"), &Z_Registration_Info_UClass_UPAIAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPAIAnimInstance), 1096047751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIAnimInstance_h_4090688629(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
