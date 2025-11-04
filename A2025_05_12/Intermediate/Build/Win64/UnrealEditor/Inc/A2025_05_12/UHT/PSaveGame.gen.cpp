// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSaveGame() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPSaveGame();
A2025_05_12_API UClass* Z_Construct_UClass_UPSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPSaveGame
void UPSaveGame::StaticRegisterNativesUPSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPSaveGame);
UClass* Z_Construct_UClass_UPSaveGame_NoRegister()
{
	return UPSaveGame::StaticClass();
}
struct Z_Construct_UClass_UPSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PSaveGame.h" },
		{ "ModuleRelativePath", "Public/PSaveGame.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPSaveGame_Statics::ClassParams = {
	&UPSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UPSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPSaveGame()
{
	if (!Z_Registration_Info_UClass_UPSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPSaveGame.OuterSingleton, Z_Construct_UClass_UPSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPSaveGame.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPSaveGame>()
{
	return UPSaveGame::StaticClass();
}
UPSaveGame::UPSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPSaveGame);
UPSaveGame::~UPSaveGame() {}
// End Class UPSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPSaveGame, UPSaveGame::StaticClass, TEXT("UPSaveGame"), &Z_Registration_Info_UClass_UPSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPSaveGame), 3036884447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSaveGame_h_203462983(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
