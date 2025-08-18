// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PAIGhost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAIGhost() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APAIGhost();
A2025_05_12_API UClass* Z_Construct_UClass_APAIGhost_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APAIGhost
void APAIGhost::StaticRegisterNativesAPAIGhost()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APAIGhost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_APAIGhost, APAIGhost::StaticClass, TEXT("APAIGhost"), &Z_Registration_Info_UClass_APAIGhost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APAIGhost), 3118017562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost_h_780496912(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
