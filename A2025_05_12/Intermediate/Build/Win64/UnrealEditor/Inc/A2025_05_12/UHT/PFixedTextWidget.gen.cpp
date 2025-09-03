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
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PFixedTextWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPFixedTextWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPFixedTextWidget_Statics::NewProp_InfoText = { "InfoText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPFixedTextWidget, InfoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoText_MetaData), NewProp_InfoText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPFixedTextWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFixedTextWidget_Statics::NewProp_InfoText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPFixedTextWidget_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UPFixedTextWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPFixedTextWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPFixedTextWidget, UPFixedTextWidget::StaticClass, TEXT("UPFixedTextWidget"), &Z_Registration_Info_UClass_UPFixedTextWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPFixedTextWidget), 117065595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PFixedTextWidget_h_3550251585(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PFixedTextWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PFixedTextWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
