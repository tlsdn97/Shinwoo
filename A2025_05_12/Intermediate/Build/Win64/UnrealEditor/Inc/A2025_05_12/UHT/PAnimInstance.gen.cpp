// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAnimInstance() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPAnimInstance();
A2025_05_12_API UClass* Z_Construct_UClass_UPAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPAnimInstance
void UPAnimInstance::StaticRegisterNativesUPAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPAnimInstance);
UClass* Z_Construct_UClass_UPAnimInstance_NoRegister()
{
	return UPAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PAnimInstance.h" },
		{ "ModuleRelativePath", "Public/PAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/PAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPAnimInstance_Statics::NewProp_ForwardSpeed = { "ForwardSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPAnimInstance, ForwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSpeed_MetaData), NewProp_ForwardSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPAnimInstance_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPAnimInstance, RightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSpeed_MetaData), NewProp_RightSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPAnimInstance_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPAnimInstance, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPawn_MetaData), NewProp_OwningPawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPAnimInstance_Statics::NewProp_ForwardSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPAnimInstance_Statics::NewProp_RightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPAnimInstance_Statics::NewProp_OwningPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPAnimInstance_Statics::ClassParams = {
	&UPAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPAnimInstance.OuterSingleton, Z_Construct_UClass_UPAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPAnimInstance.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPAnimInstance>()
{
	return UPAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPAnimInstance);
UPAnimInstance::~UPAnimInstance() {}
// End Class UPAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPAnimInstance, UPAnimInstance::StaticClass, TEXT("UPAnimInstance"), &Z_Registration_Info_UClass_UPAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPAnimInstance), 2074427807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAnimInstance_h_574420919(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
