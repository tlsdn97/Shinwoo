// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PEndingUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePEndingUI() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPEndingUI();
A2025_05_12_API UClass* Z_Construct_UClass_UPEndingUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPEndingUI Function OnEndClicked
struct Z_Construct_UFunction_UPEndingUI_OnEndClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PEndingUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEndingUI_OnEndClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEndingUI, nullptr, "OnEndClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEndingUI_OnEndClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEndingUI_OnEndClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPEndingUI_OnEndClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEndingUI_OnEndClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEndingUI::execOnEndClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndClicked();
	P_NATIVE_END;
}
// End Class UPEndingUI Function OnEndClicked

// Begin Class UPEndingUI
void UPEndingUI::StaticRegisterNativesUPEndingUI()
{
	UClass* Class = UPEndingUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEndClicked", &UPEndingUI::execOnEndClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPEndingUI);
UClass* Z_Construct_UClass_UPEndingUI_NoRegister()
{
	return UPEndingUI::StaticClass();
}
struct Z_Construct_UClass_UPEndingUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PEndingUI.h" },
		{ "ModuleRelativePath", "Public/PEndingUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PEndingUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPEndingUI_OnEndClicked, "OnEndClicked" }, // 1617134460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPEndingUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPEndingUI_Statics::NewProp_EndButton = { "EndButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPEndingUI, EndButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndButton_MetaData), NewProp_EndButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPEndingUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEndingUI_Statics::NewProp_EndButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEndingUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPEndingUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEndingUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPEndingUI_Statics::ClassParams = {
	&UPEndingUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPEndingUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPEndingUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPEndingUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPEndingUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPEndingUI()
{
	if (!Z_Registration_Info_UClass_UPEndingUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPEndingUI.OuterSingleton, Z_Construct_UClass_UPEndingUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPEndingUI.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPEndingUI>()
{
	return UPEndingUI::StaticClass();
}
UPEndingUI::UPEndingUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPEndingUI);
UPEndingUI::~UPEndingUI() {}
// End Class UPEndingUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPEndingUI, UPEndingUI::StaticClass, TEXT("UPEndingUI"), &Z_Registration_Info_UClass_UPEndingUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPEndingUI), 1978020146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingUI_h_1347774815(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
