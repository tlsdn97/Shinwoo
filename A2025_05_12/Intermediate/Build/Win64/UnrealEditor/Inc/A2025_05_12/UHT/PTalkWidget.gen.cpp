// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PTalkWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTalkWidget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPTalkWidget();
A2025_05_12_API UClass* Z_Construct_UClass_UPTalkWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPTalkWidget
void UPTalkWidget::StaticRegisterNativesUPTalkWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTalkWidget);
UClass* Z_Construct_UClass_UPTalkWidget_NoRegister()
{
	return UPTalkWidget::StaticClass();
}
struct Z_Construct_UClass_UPTalkWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PTalkWidget.h" },
		{ "ModuleRelativePath", "Public/PTalkWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTalkWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTalkWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTalkWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTalkWidget_Statics::ClassParams = {
	&UPTalkWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTalkWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTalkWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTalkWidget()
{
	if (!Z_Registration_Info_UClass_UPTalkWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTalkWidget.OuterSingleton, Z_Construct_UClass_UPTalkWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTalkWidget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPTalkWidget>()
{
	return UPTalkWidget::StaticClass();
}
UPTalkWidget::UPTalkWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTalkWidget);
UPTalkWidget::~UPTalkWidget() {}
// End Class UPTalkWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PTalkWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTalkWidget, UPTalkWidget::StaticClass, TEXT("UPTalkWidget"), &Z_Registration_Info_UClass_UPTalkWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTalkWidget), 3893160600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PTalkWidget_h_3254264379(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PTalkWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PTalkWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
