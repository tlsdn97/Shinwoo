// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PLevelTP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePLevelTP() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APLevelTP();
A2025_05_12_API UClass* Z_Construct_UClass_APLevelTP_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APLevelTP
void APLevelTP::StaticRegisterNativesAPLevelTP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APLevelTP);
UClass* Z_Construct_UClass_APLevelTP_NoRegister()
{
	return APLevelTP::StaticClass();
}
struct Z_Construct_UClass_APLevelTP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PLevelTP.h" },
		{ "ModuleRelativePath", "Public/PLevelTP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APLevelTP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APLevelTP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APLevelTP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APLevelTP_Statics::ClassParams = {
	&APLevelTP::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APLevelTP_Statics::Class_MetaDataParams), Z_Construct_UClass_APLevelTP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APLevelTP()
{
	if (!Z_Registration_Info_UClass_APLevelTP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APLevelTP.OuterSingleton, Z_Construct_UClass_APLevelTP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APLevelTP.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APLevelTP>()
{
	return APLevelTP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APLevelTP);
APLevelTP::~APLevelTP() {}
// End Class APLevelTP

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLevelTP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APLevelTP, APLevelTP::StaticClass, TEXT("APLevelTP"), &Z_Registration_Info_UClass_APLevelTP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APLevelTP), 414884345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLevelTP_h_3871787089(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLevelTP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLevelTP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
