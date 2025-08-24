// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PDieActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDieActor() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APDieActor();
A2025_05_12_API UClass* Z_Construct_UClass_APDieActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APDieActor
void APDieActor::StaticRegisterNativesAPDieActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APDieActor);
UClass* Z_Construct_UClass_APDieActor_NoRegister()
{
	return APDieActor::StaticClass();
}
struct Z_Construct_UClass_APDieActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PDieActor.h" },
		{ "ModuleRelativePath", "Public/PDieActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APDieActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APDieActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APDieActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APDieActor_Statics::ClassParams = {
	&APDieActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APDieActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APDieActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APDieActor()
{
	if (!Z_Registration_Info_UClass_APDieActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APDieActor.OuterSingleton, Z_Construct_UClass_APDieActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APDieActor.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APDieActor>()
{
	return APDieActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APDieActor);
APDieActor::~APDieActor() {}
// End Class APDieActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APDieActor, APDieActor::StaticClass, TEXT("APDieActor"), &Z_Registration_Info_UClass_APDieActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APDieActor), 1011455811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieActor_h_605399134(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
