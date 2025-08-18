// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PStartWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePStartWidget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPStartWidget();
A2025_05_12_API UClass* Z_Construct_UClass_UPStartWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPStartWidget Function OnQuitClicked
struct Z_Construct_UFunction_UPStartWidget_OnQuitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PStartWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPStartWidget_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPStartWidget, nullptr, "OnQuitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPStartWidget_OnQuitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPStartWidget_OnQuitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPStartWidget_OnQuitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPStartWidget_OnQuitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPStartWidget::execOnQuitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuitClicked();
	P_NATIVE_END;
}
// End Class UPStartWidget Function OnQuitClicked

// Begin Class UPStartWidget Function OnStartClicked
struct Z_Construct_UFunction_UPStartWidget_OnStartClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PStartWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPStartWidget_OnStartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPStartWidget, nullptr, "OnStartClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPStartWidget_OnStartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPStartWidget_OnStartClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPStartWidget_OnStartClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPStartWidget_OnStartClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPStartWidget::execOnStartClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartClicked();
	P_NATIVE_END;
}
// End Class UPStartWidget Function OnStartClicked

// Begin Class UPStartWidget
void UPStartWidget::StaticRegisterNativesUPStartWidget()
{
	UClass* Class = UPStartWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnQuitClicked", &UPStartWidget::execOnQuitClicked },
		{ "OnStartClicked", &UPStartWidget::execOnStartClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPStartWidget);
UClass* Z_Construct_UClass_UPStartWidget_NoRegister()
{
	return UPStartWidget::StaticClass();
}
struct Z_Construct_UClass_UPStartWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PStartWidget.h" },
		{ "ModuleRelativePath", "Public/PStartWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PStartWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PStartWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPStartWidget_OnQuitClicked, "OnQuitClicked" }, // 1022707631
		{ &Z_Construct_UFunction_UPStartWidget_OnStartClicked, "OnStartClicked" }, // 210219373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPStartWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPStartWidget_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPStartWidget, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartButton_MetaData), NewProp_StartButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPStartWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPStartWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButton_MetaData), NewProp_QuitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPStartWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPStartWidget_Statics::NewProp_StartButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPStartWidget_Statics::NewProp_QuitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPStartWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPStartWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPStartWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPStartWidget_Statics::ClassParams = {
	&UPStartWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPStartWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPStartWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPStartWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPStartWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPStartWidget()
{
	if (!Z_Registration_Info_UClass_UPStartWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPStartWidget.OuterSingleton, Z_Construct_UClass_UPStartWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPStartWidget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPStartWidget>()
{
	return UPStartWidget::StaticClass();
}
UPStartWidget::UPStartWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPStartWidget);
UPStartWidget::~UPStartWidget() {}
// End Class UPStartWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PStartWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPStartWidget, UPStartWidget::StaticClass, TEXT("UPStartWidget"), &Z_Registration_Info_UClass_UPStartWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPStartWidget), 3961399581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PStartWidget_h_3509625438(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PStartWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PStartWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
