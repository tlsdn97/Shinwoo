// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PSkyTrap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSkyTrap() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APSkyTrap();
A2025_05_12_API UClass* Z_Construct_UClass_APSkyTrap_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APSkyTrap
void APSkyTrap::StaticRegisterNativesAPSkyTrap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APSkyTrap);
UClass* Z_Construct_UClass_APSkyTrap_NoRegister()
{
	return APSkyTrap::StaticClass();
}
struct Z_Construct_UClass_APSkyTrap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PSkyTrap.h" },
		{ "ModuleRelativePath", "Public/PSkyTrap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APSkyTrap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APSkyTrap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APSkyTrap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APSkyTrap_Statics::ClassParams = {
	&APSkyTrap::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APSkyTrap_Statics::Class_MetaDataParams), Z_Construct_UClass_APSkyTrap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APSkyTrap()
{
	if (!Z_Registration_Info_UClass_APSkyTrap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APSkyTrap.OuterSingleton, Z_Construct_UClass_APSkyTrap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APSkyTrap.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APSkyTrap>()
{
	return APSkyTrap::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APSkyTrap);
APSkyTrap::~APSkyTrap() {}
// End Class APSkyTrap

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSkyTrap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APSkyTrap, APSkyTrap::StaticClass, TEXT("APSkyTrap"), &Z_Registration_Info_UClass_APSkyTrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APSkyTrap), 2507511058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSkyTrap_h_3386107600(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSkyTrap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSkyTrap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
