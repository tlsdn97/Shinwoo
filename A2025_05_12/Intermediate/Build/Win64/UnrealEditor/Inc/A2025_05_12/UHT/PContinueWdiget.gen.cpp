// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PContinueWdiget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePContinueWdiget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPContinueWdiget();
A2025_05_12_API UClass* Z_Construct_UClass_UPContinueWdiget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPContinueWdiget Function OnAndClicked
struct Z_Construct_UFunction_UPContinueWdiget_OnAndClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PContinueWdiget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPContinueWdiget_OnAndClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPContinueWdiget, nullptr, "OnAndClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPContinueWdiget_OnAndClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPContinueWdiget_OnAndClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPContinueWdiget_OnAndClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPContinueWdiget_OnAndClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPContinueWdiget::execOnAndClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAndClicked();
	P_NATIVE_END;
}
// End Class UPContinueWdiget Function OnAndClicked

// Begin Class UPContinueWdiget
void UPContinueWdiget::StaticRegisterNativesUPContinueWdiget()
{
	UClass* Class = UPContinueWdiget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAndClicked", &UPContinueWdiget::execOnAndClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPContinueWdiget);
UClass* Z_Construct_UClass_UPContinueWdiget_NoRegister()
{
	return UPContinueWdiget::StaticClass();
}
struct Z_Construct_UClass_UPContinueWdiget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PContinueWdiget.h" },
		{ "ModuleRelativePath", "Public/PContinueWdiget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinueMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PContinueWdiget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AndButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PContinueWdiget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AndButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPContinueWdiget_OnAndClicked, "OnAndClicked" }, // 3009526372
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPContinueWdiget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPContinueWdiget_Statics::NewProp_ContinueMessage = { "ContinueMessage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPContinueWdiget, ContinueMessage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinueMessage_MetaData), NewProp_ContinueMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPContinueWdiget_Statics::NewProp_AndButton = { "AndButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPContinueWdiget, AndButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AndButton_MetaData), NewProp_AndButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPContinueWdiget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPContinueWdiget_Statics::NewProp_ContinueMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPContinueWdiget_Statics::NewProp_AndButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPContinueWdiget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPContinueWdiget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPContinueWdiget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPContinueWdiget_Statics::ClassParams = {
	&UPContinueWdiget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPContinueWdiget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPContinueWdiget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPContinueWdiget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPContinueWdiget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPContinueWdiget()
{
	if (!Z_Registration_Info_UClass_UPContinueWdiget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPContinueWdiget.OuterSingleton, Z_Construct_UClass_UPContinueWdiget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPContinueWdiget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPContinueWdiget>()
{
	return UPContinueWdiget::StaticClass();
}
UPContinueWdiget::UPContinueWdiget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPContinueWdiget);
UPContinueWdiget::~UPContinueWdiget() {}
// End Class UPContinueWdiget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PContinueWdiget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPContinueWdiget, UPContinueWdiget::StaticClass, TEXT("UPContinueWdiget"), &Z_Registration_Info_UClass_UPContinueWdiget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPContinueWdiget), 290391842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PContinueWdiget_h_115489711(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PContinueWdiget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PContinueWdiget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
