// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PBTService_CheckPlayerLost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBTService_CheckPlayerLost() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPBTService_CheckPlayerLost();
A2025_05_12_API UClass* Z_Construct_UClass_UPBTService_CheckPlayerLost_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPBTService_CheckPlayerLost
void UPBTService_CheckPlayerLost::StaticRegisterNativesUPBTService_CheckPlayerLost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPBTService_CheckPlayerLost);
UClass* Z_Construct_UClass_UPBTService_CheckPlayerLost_NoRegister()
{
	return UPBTService_CheckPlayerLost::StaticClass();
}
struct Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PBTService_CheckPlayerLost.h" },
		{ "ModuleRelativePath", "Public/PBTService_CheckPlayerLost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseDistance_MetaData[] = {
		{ "Category", "PBTService_CheckPlayerLost" },
		{ "ModuleRelativePath", "Public/PBTService_CheckPlayerLost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPBTService_CheckPlayerLost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::NewProp_LoseDistance = { "LoseDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPBTService_CheckPlayerLost, LoseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseDistance_MetaData), NewProp_LoseDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::NewProp_LoseDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::ClassParams = {
	&UPBTService_CheckPlayerLost::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::Class_MetaDataParams), Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPBTService_CheckPlayerLost()
{
	if (!Z_Registration_Info_UClass_UPBTService_CheckPlayerLost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPBTService_CheckPlayerLost.OuterSingleton, Z_Construct_UClass_UPBTService_CheckPlayerLost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPBTService_CheckPlayerLost.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPBTService_CheckPlayerLost>()
{
	return UPBTService_CheckPlayerLost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPBTService_CheckPlayerLost);
UPBTService_CheckPlayerLost::~UPBTService_CheckPlayerLost() {}
// End Class UPBTService_CheckPlayerLost

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTService_CheckPlayerLost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPBTService_CheckPlayerLost, UPBTService_CheckPlayerLost::StaticClass, TEXT("UPBTService_CheckPlayerLost"), &Z_Registration_Info_UClass_UPBTService_CheckPlayerLost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPBTService_CheckPlayerLost), 4005917439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTService_CheckPlayerLost_h_420960357(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTService_CheckPlayerLost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTService_CheckPlayerLost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
