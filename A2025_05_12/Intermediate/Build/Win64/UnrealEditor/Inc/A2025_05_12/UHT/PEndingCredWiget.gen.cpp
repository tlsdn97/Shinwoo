// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PEndingCredWiget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePEndingCredWiget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPEndingCredWiget();
A2025_05_12_API UClass* Z_Construct_UClass_UPEndingCredWiget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPEndingCredWiget Function OnExitClicked
struct Z_Construct_UFunction_UPEndingCredWiget_OnExitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PEndingCredWiget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEndingCredWiget_OnExitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEndingCredWiget, nullptr, "OnExitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEndingCredWiget_OnExitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEndingCredWiget_OnExitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPEndingCredWiget_OnExitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEndingCredWiget_OnExitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEndingCredWiget::execOnExitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitClicked();
	P_NATIVE_END;
}
// End Class UPEndingCredWiget Function OnExitClicked

// Begin Class UPEndingCredWiget
void UPEndingCredWiget::StaticRegisterNativesUPEndingCredWiget()
{
	UClass* Class = UPEndingCredWiget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitClicked", &UPEndingCredWiget::execOnExitClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPEndingCredWiget);
UClass* Z_Construct_UClass_UPEndingCredWiget_NoRegister()
{
	return UPEndingCredWiget::StaticClass();
}
struct Z_Construct_UClass_UPEndingCredWiget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PEndingCredWiget.h" },
		{ "ModuleRelativePath", "Public/PEndingCredWiget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreditScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PEndingCredWiget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PEndingCredWiget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreditScrollBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPEndingCredWiget_OnExitClicked, "OnExitClicked" }, // 1924763265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPEndingCredWiget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPEndingCredWiget_Statics::NewProp_CreditScrollBox = { "CreditScrollBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPEndingCredWiget, CreditScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreditScrollBox_MetaData), NewProp_CreditScrollBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPEndingCredWiget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPEndingCredWiget, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitButton_MetaData), NewProp_ExitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPEndingCredWiget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEndingCredWiget_Statics::NewProp_CreditScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEndingCredWiget_Statics::NewProp_ExitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEndingCredWiget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPEndingCredWiget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEndingCredWiget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPEndingCredWiget_Statics::ClassParams = {
	&UPEndingCredWiget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPEndingCredWiget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPEndingCredWiget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPEndingCredWiget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPEndingCredWiget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPEndingCredWiget()
{
	if (!Z_Registration_Info_UClass_UPEndingCredWiget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPEndingCredWiget.OuterSingleton, Z_Construct_UClass_UPEndingCredWiget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPEndingCredWiget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPEndingCredWiget>()
{
	return UPEndingCredWiget::StaticClass();
}
UPEndingCredWiget::UPEndingCredWiget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPEndingCredWiget);
UPEndingCredWiget::~UPEndingCredWiget() {}
// End Class UPEndingCredWiget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingCredWiget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPEndingCredWiget, UPEndingCredWiget::StaticClass, TEXT("UPEndingCredWiget"), &Z_Registration_Info_UClass_UPEndingCredWiget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPEndingCredWiget), 2415421338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingCredWiget_h_1233055201(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingCredWiget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingCredWiget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
