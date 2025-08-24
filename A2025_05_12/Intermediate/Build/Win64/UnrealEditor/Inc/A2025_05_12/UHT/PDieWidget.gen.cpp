// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PDieWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDieWidget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPDieWidget();
A2025_05_12_API UClass* Z_Construct_UClass_UPDieWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPDieWidget
void UPDieWidget::StaticRegisterNativesUPDieWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDieWidget);
UClass* Z_Construct_UClass_UPDieWidget_NoRegister()
{
	return UPDieWidget::StaticClass();
}
struct Z_Construct_UClass_UPDieWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PDieWidget.h" },
		{ "ModuleRelativePath", "Public/PDieWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDieWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPDieWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPDieWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDieWidget_Statics::ClassParams = {
	&UPDieWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPDieWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPDieWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPDieWidget()
{
	if (!Z_Registration_Info_UClass_UPDieWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDieWidget.OuterSingleton, Z_Construct_UClass_UPDieWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPDieWidget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPDieWidget>()
{
	return UPDieWidget::StaticClass();
}
UPDieWidget::UPDieWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPDieWidget);
UPDieWidget::~UPDieWidget() {}
// End Class UPDieWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPDieWidget, UPDieWidget::StaticClass, TEXT("UPDieWidget"), &Z_Registration_Info_UClass_UPDieWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDieWidget), 3760136410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieWidget_h_1281054284(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
