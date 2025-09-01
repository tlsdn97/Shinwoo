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
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPDieWidget Function OnRetryClicked
struct Z_Construct_UFunction_UPDieWidget_OnRetryClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDieWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDieWidget_OnRetryClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDieWidget, nullptr, "OnRetryClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDieWidget_OnRetryClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDieWidget_OnRetryClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPDieWidget_OnRetryClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDieWidget_OnRetryClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDieWidget::execOnRetryClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRetryClicked();
	P_NATIVE_END;
}
// End Class UPDieWidget Function OnRetryClicked

// Begin Class UPDieWidget
void UPDieWidget::StaticRegisterNativesUPDieWidget()
{
	UClass* Class = UPDieWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRetryClicked", &UPDieWidget::execOnRetryClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDieWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetryButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDieWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RetryButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDieWidget_OnRetryClicked, "OnRetryClicked" }, // 1169061613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDieWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDieWidget_Statics::NewProp_DeathMessage = { "DeathMessage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDieWidget, DeathMessage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMessage_MetaData), NewProp_DeathMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDieWidget_Statics::NewProp_RetryButton = { "RetryButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDieWidget, RetryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetryButton_MetaData), NewProp_RetryButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDieWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDieWidget_Statics::NewProp_DeathMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDieWidget_Statics::NewProp_RetryButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPDieWidget_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UPDieWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPDieWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPDieWidget, UPDieWidget::StaticClass, TEXT("UPDieWidget"), &Z_Registration_Info_UClass_UPDieWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDieWidget), 2943539511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieWidget_h_1513114539(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDieWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
