// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPlayer() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APPlayer();
A2025_05_12_API UClass* Z_Construct_UClass_APPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APPlayer
void APPlayer::StaticRegisterNativesAPPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPlayer);
UClass* Z_Construct_UClass_APPlayer_NoRegister()
{
	return APPlayer::StaticClass();
}
struct Z_Construct_UClass_APPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PPlayer.h" },
		{ "ModuleRelativePath", "Public/PPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPlayer_Statics::ClassParams = {
	&APPlayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_APPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPlayer()
{
	if (!Z_Registration_Info_UClass_APPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPlayer.OuterSingleton, Z_Construct_UClass_APPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPlayer.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APPlayer>()
{
	return APPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPlayer);
APPlayer::~APPlayer() {}
// End Class APPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPlayer, APPlayer::StaticClass, TEXT("APPlayer"), &Z_Registration_Info_UClass_APPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPlayer), 1863809756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_2056031126(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
