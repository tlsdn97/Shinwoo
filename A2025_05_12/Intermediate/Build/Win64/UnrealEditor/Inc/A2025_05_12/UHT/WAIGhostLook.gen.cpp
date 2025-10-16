// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/WAIGhostLook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAIGhostLook() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_AWAIGhostLook();
A2025_05_12_API UClass* Z_Construct_UClass_AWAIGhostLook_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class AWAIGhostLook
void AWAIGhostLook::StaticRegisterNativesAWAIGhostLook()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWAIGhostLook);
UClass* Z_Construct_UClass_AWAIGhostLook_NoRegister()
{
	return AWAIGhostLook::StaticClass();
}
struct Z_Construct_UClass_AWAIGhostLook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WAIGhostLook.h" },
		{ "ModuleRelativePath", "Public/WAIGhostLook.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWAIGhostLook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWAIGhostLook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWAIGhostLook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWAIGhostLook_Statics::ClassParams = {
	&AWAIGhostLook::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWAIGhostLook_Statics::Class_MetaDataParams), Z_Construct_UClass_AWAIGhostLook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWAIGhostLook()
{
	if (!Z_Registration_Info_UClass_AWAIGhostLook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWAIGhostLook.OuterSingleton, Z_Construct_UClass_AWAIGhostLook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWAIGhostLook.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<AWAIGhostLook>()
{
	return AWAIGhostLook::StaticClass();
}
AWAIGhostLook::AWAIGhostLook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWAIGhostLook);
AWAIGhostLook::~AWAIGhostLook() {}
// End Class AWAIGhostLook

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_WAIGhostLook_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWAIGhostLook, AWAIGhostLook::StaticClass, TEXT("AWAIGhostLook"), &Z_Registration_Info_UClass_AWAIGhostLook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWAIGhostLook), 1724661557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_WAIGhostLook_h_2622282746(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_WAIGhostLook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_WAIGhostLook_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
