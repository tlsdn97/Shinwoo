// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PSaveWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSaveWidget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPSaveWidget();
A2025_05_12_API UClass* Z_Construct_UClass_UPSaveWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPSaveWidget
void UPSaveWidget::StaticRegisterNativesUPSaveWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPSaveWidget);
UClass* Z_Construct_UClass_UPSaveWidget_NoRegister()
{
	return UPSaveWidget::StaticClass();
}
struct Z_Construct_UClass_UPSaveWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PSaveWidget.h" },
		{ "ModuleRelativePath", "Public/PSaveWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPSaveWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPSaveWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPSaveWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPSaveWidget_Statics::ClassParams = {
	&UPSaveWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPSaveWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPSaveWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPSaveWidget()
{
	if (!Z_Registration_Info_UClass_UPSaveWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPSaveWidget.OuterSingleton, Z_Construct_UClass_UPSaveWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPSaveWidget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPSaveWidget>()
{
	return UPSaveWidget::StaticClass();
}
UPSaveWidget::UPSaveWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPSaveWidget);
UPSaveWidget::~UPSaveWidget() {}
// End Class UPSaveWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSaveWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPSaveWidget, UPSaveWidget::StaticClass, TEXT("UPSaveWidget"), &Z_Registration_Info_UClass_UPSaveWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPSaveWidget), 2037177053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSaveWidget_h_179170291(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSaveWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSaveWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
