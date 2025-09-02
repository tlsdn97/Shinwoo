// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PUIPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePUIPlayerController() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APUIPlayerController();
A2025_05_12_API UClass* Z_Construct_UClass_APUIPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APUIPlayerController
void APUIPlayerController::StaticRegisterNativesAPUIPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APUIPlayerController);
UClass* Z_Construct_UClass_APUIPlayerController_NoRegister()
{
	return APUIPlayerController::StaticClass();
}
struct Z_Construct_UClass_APUIPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PUIPlayerController.h" },
		{ "ModuleRelativePath", "Public/PUIPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APUIPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APUIPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APUIPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APUIPlayerController_Statics::ClassParams = {
	&APUIPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APUIPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APUIPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APUIPlayerController()
{
	if (!Z_Registration_Info_UClass_APUIPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APUIPlayerController.OuterSingleton, Z_Construct_UClass_APUIPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APUIPlayerController.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APUIPlayerController>()
{
	return APUIPlayerController::StaticClass();
}
APUIPlayerController::APUIPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APUIPlayerController);
APUIPlayerController::~APUIPlayerController() {}
// End Class APUIPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PUIPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APUIPlayerController, APUIPlayerController::StaticClass, TEXT("APUIPlayerController"), &Z_Registration_Info_UClass_APUIPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APUIPlayerController), 1547222869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PUIPlayerController_h_1050803294(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PUIPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PUIPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
