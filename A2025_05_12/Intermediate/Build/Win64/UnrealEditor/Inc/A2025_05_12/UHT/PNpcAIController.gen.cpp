// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PNpcAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePNpcAIController() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APNpcAIController();
A2025_05_12_API UClass* Z_Construct_UClass_APNpcAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APNpcAIController
void APNpcAIController::StaticRegisterNativesAPNpcAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APNpcAIController);
UClass* Z_Construct_UClass_APNpcAIController_NoRegister()
{
	return APNpcAIController::StaticClass();
}
struct Z_Construct_UClass_APNpcAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PNpcAIController.h" },
		{ "ModuleRelativePath", "Public/PNpcAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[] = {
		{ "Category", "AI Movement" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "-1000" },
		{ "ModuleRelativePath", "Public/PNpcAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APNpcAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APNpcAIController_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APNpcAIController, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffset_MetaData), NewProp_TargetOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APNpcAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APNpcAIController_Statics::NewProp_TargetOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APNpcAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APNpcAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APNpcAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APNpcAIController_Statics::ClassParams = {
	&APNpcAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APNpcAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APNpcAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APNpcAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APNpcAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APNpcAIController()
{
	if (!Z_Registration_Info_UClass_APNpcAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APNpcAIController.OuterSingleton, Z_Construct_UClass_APNpcAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APNpcAIController.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APNpcAIController>()
{
	return APNpcAIController::StaticClass();
}
APNpcAIController::APNpcAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APNpcAIController);
APNpcAIController::~APNpcAIController() {}
// End Class APNpcAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNpcAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APNpcAIController, APNpcAIController::StaticClass, TEXT("APNpcAIController"), &Z_Registration_Info_UClass_APNpcAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APNpcAIController), 88828194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNpcAIController_h_3917136670(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNpcAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PNpcAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
