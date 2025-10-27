// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PNpcCharacter2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePNpcCharacter2() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APNpcCharacter2();
A2025_05_12_API UClass* Z_Construct_UClass_APNpcCharacter2_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APNpcCharacter2
void APNpcCharacter2::StaticRegisterNativesAPNpcCharacter2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APNpcCharacter2);
UClass* Z_Construct_UClass_APNpcCharacter2_NoRegister()
{
	return APNpcCharacter2::StaticClass();
}
struct Z_Construct_UClass_APNpcCharacter2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PNpcCharacter2.h" },
		{ "ModuleRelativePath", "Public/PNpcCharacter2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APNpcCharacter2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APNpcCharacter2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APNpcCharacter2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APNpcCharacter2_Statics::ClassParams = {
	&APNpcCharacter2::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APNpcCharacter2_Statics::Class_MetaDataParams), Z_Construct_UClass_APNpcCharacter2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APNpcCharacter2()
{
	if (!Z_Registration_Info_UClass_APNpcCharacter2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APNpcCharacter2.OuterSingleton, Z_Construct_UClass_APNpcCharacter2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APNpcCharacter2.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APNpcCharacter2>()
{
	return APNpcCharacter2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APNpcCharacter2);
APNpcCharacter2::~APNpcCharacter2() {}
// End Class APNpcCharacter2

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNpcCharacter2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APNpcCharacter2, APNpcCharacter2::StaticClass, TEXT("APNpcCharacter2"), &Z_Registration_Info_UClass_APNpcCharacter2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APNpcCharacter2), 2267486862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNpcCharacter2_h_1991223040(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNpcCharacter2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNpcCharacter2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
