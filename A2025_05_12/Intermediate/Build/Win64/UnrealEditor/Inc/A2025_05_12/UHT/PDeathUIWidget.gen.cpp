// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PDeathUIWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDeathUIWidget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPDeathUIWidget();
A2025_05_12_API UClass* Z_Construct_UClass_UPDeathUIWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPDeathUIWidget Function OnRestartClicked
struct Z_Construct_UFunction_UPDeathUIWidget_OnRestartClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDeathUIWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDeathUIWidget_OnRestartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDeathUIWidget, nullptr, "OnRestartClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDeathUIWidget_OnRestartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDeathUIWidget_OnRestartClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPDeathUIWidget_OnRestartClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDeathUIWidget_OnRestartClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDeathUIWidget::execOnRestartClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestartClicked();
	P_NATIVE_END;
}
// End Class UPDeathUIWidget Function OnRestartClicked

// Begin Class UPDeathUIWidget
void UPDeathUIWidget::StaticRegisterNativesUPDeathUIWidget()
{
	UClass* Class = UPDeathUIWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRestartClicked", &UPDeathUIWidget::execOnRestartClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDeathUIWidget);
UClass* Z_Construct_UClass_UPDeathUIWidget_NoRegister()
{
	return UPDeathUIWidget::StaticClass();
}
struct Z_Construct_UClass_UPDeathUIWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PDeathUIWidget.h" },
		{ "ModuleRelativePath", "Public/PDeathUIWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDeathUIWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDeathUIWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDeathUIWidget_OnRestartClicked, "OnRestartClicked" }, // 2240517858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDeathUIWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDeathUIWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDeathUIWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartButton_MetaData), NewProp_RestartButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDeathUIWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDeathUIWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButton_MetaData), NewProp_QuitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDeathUIWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDeathUIWidget_Statics::NewProp_RestartButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDeathUIWidget_Statics::NewProp_QuitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPDeathUIWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPDeathUIWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPDeathUIWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDeathUIWidget_Statics::ClassParams = {
	&UPDeathUIWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPDeathUIWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPDeathUIWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPDeathUIWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPDeathUIWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPDeathUIWidget()
{
	if (!Z_Registration_Info_UClass_UPDeathUIWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDeathUIWidget.OuterSingleton, Z_Construct_UClass_UPDeathUIWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPDeathUIWidget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPDeathUIWidget>()
{
	return UPDeathUIWidget::StaticClass();
}
UPDeathUIWidget::UPDeathUIWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPDeathUIWidget);
UPDeathUIWidget::~UPDeathUIWidget() {}
// End Class UPDeathUIWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDeathUIWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPDeathUIWidget, UPDeathUIWidget::StaticClass, TEXT("UPDeathUIWidget"), &Z_Registration_Info_UClass_UPDeathUIWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDeathUIWidget), 3050538109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDeathUIWidget_h_3553553129(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDeathUIWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDeathUIWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
