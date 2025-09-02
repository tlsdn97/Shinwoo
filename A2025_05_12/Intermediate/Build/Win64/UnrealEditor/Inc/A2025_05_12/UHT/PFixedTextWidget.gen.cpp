// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PFixedTextWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFixedTextWidget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPFixedTextWidget();
A2025_05_12_API UClass* Z_Construct_UClass_UPFixedTextWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPFixedTextWidget
void UPFixedTextWidget::StaticRegisterNativesUPFixedTextWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPFixedTextWidget);
UClass* Z_Construct_UClass_UPFixedTextWidget_NoRegister()
{
	return UPFixedTextWidget::StaticClass();
}
struct Z_Construct_UClass_UPFixedTextWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PFixedTextWidget.h" },
		{ "ModuleRelativePath", "Public/PFixedTextWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPFixedTextWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPFixedTextWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPFixedTextWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPFixedTextWidget_Statics::ClassParams = {
	&UPFixedTextWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPFixedTextWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPFixedTextWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPFixedTextWidget()
{
	if (!Z_Registration_Info_UClass_UPFixedTextWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPFixedTextWidget.OuterSingleton, Z_Construct_UClass_UPFixedTextWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPFixedTextWidget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPFixedTextWidget>()
{
	return UPFixedTextWidget::StaticClass();
}
UPFixedTextWidget::UPFixedTextWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPFixedTextWidget);
UPFixedTextWidget::~UPFixedTextWidget() {}
// End Class UPFixedTextWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PFixedTextWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPFixedTextWidget, UPFixedTextWidget::StaticClass, TEXT("UPFixedTextWidget"), &Z_Registration_Info_UClass_UPFixedTextWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPFixedTextWidget), 1862620495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PFixedTextWidget_h_2760459349(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PFixedTextWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PFixedTextWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
