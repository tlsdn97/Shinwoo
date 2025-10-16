// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/WAIControllerLook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAIControllerLook() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_AWAIControllerLook();
A2025_05_12_API UClass* Z_Construct_UClass_AWAIControllerLook_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class AWAIControllerLook
void AWAIControllerLook::StaticRegisterNativesAWAIControllerLook()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWAIControllerLook);
UClass* Z_Construct_UClass_AWAIControllerLook_NoRegister()
{
	return AWAIControllerLook::StaticClass();
}
struct Z_Construct_UClass_AWAIControllerLook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WAIControllerLook.h" },
		{ "ModuleRelativePath", "Public/WAIControllerLook.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWAIControllerLook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWAIControllerLook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWAIControllerLook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWAIControllerLook_Statics::ClassParams = {
	&AWAIControllerLook::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWAIControllerLook_Statics::Class_MetaDataParams), Z_Construct_UClass_AWAIControllerLook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWAIControllerLook()
{
	if (!Z_Registration_Info_UClass_AWAIControllerLook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWAIControllerLook.OuterSingleton, Z_Construct_UClass_AWAIControllerLook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWAIControllerLook.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<AWAIControllerLook>()
{
	return AWAIControllerLook::StaticClass();
}
AWAIControllerLook::AWAIControllerLook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWAIControllerLook);
AWAIControllerLook::~AWAIControllerLook() {}
// End Class AWAIControllerLook

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_WAIControllerLook_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWAIControllerLook, AWAIControllerLook::StaticClass, TEXT("AWAIControllerLook"), &Z_Registration_Info_UClass_AWAIControllerLook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWAIControllerLook), 2421995428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_WAIControllerLook_h_2076548515(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_WAIControllerLook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_WAIControllerLook_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
