// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PDialogueWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDialogueWidget() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APNcpCharacter_NoRegister();
A2025_05_12_API UClass* Z_Construct_UClass_UPDialogueWidget();
A2025_05_12_API UClass* Z_Construct_UClass_UPDialogueWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPDialogueWidget Function InitDialogue
struct Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics
{
	struct PDialogueWidget_eventInitDialogue_Parms
	{
		TArray<FString> Lines;
		APNcpCharacter* OwnerNPC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lines_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Lines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Lines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerNPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDialogueWidget_eventInitDialogue_Parms, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lines_MetaData), NewProp_Lines_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::NewProp_OwnerNPC = { "OwnerNPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDialogueWidget_eventInitDialogue_Parms, OwnerNPC), Z_Construct_UClass_APNcpCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::NewProp_Lines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::NewProp_Lines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::NewProp_OwnerNPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDialogueWidget, nullptr, "InitDialogue", nullptr, nullptr, Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::PDialogueWidget_eventInitDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::PDialogueWidget_eventInitDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPDialogueWidget_InitDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDialogueWidget_InitDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDialogueWidget::execInitDialogue)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Lines);
	P_GET_OBJECT(APNcpCharacter,Z_Param_OwnerNPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitDialogue(Z_Param_Out_Lines,Z_Param_OwnerNPC);
	P_NATIVE_END;
}
// End Class UPDialogueWidget Function InitDialogue

// Begin Class UPDialogueWidget Function NextDialogue
struct Z_Construct_UFunction_UPDialogueWidget_NextDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDialogueWidget_NextDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDialogueWidget, nullptr, "NextDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDialogueWidget_NextDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDialogueWidget_NextDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPDialogueWidget_NextDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDialogueWidget_NextDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDialogueWidget::execNextDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextDialogue();
	P_NATIVE_END;
}
// End Class UPDialogueWidget Function NextDialogue

// Begin Class UPDialogueWidget Function OnEndButtonClicked
struct Z_Construct_UFunction_UPDialogueWidget_OnEndButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDialogueWidget_OnEndButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDialogueWidget, nullptr, "OnEndButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDialogueWidget_OnEndButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDialogueWidget_OnEndButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPDialogueWidget_OnEndButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDialogueWidget_OnEndButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDialogueWidget::execOnEndButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndButtonClicked();
	P_NATIVE_END;
}
// End Class UPDialogueWidget Function OnEndButtonClicked

// Begin Class UPDialogueWidget
void UPDialogueWidget::StaticRegisterNativesUPDialogueWidget()
{
	UClass* Class = UPDialogueWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitDialogue", &UPDialogueWidget::execInitDialogue },
		{ "NextDialogue", &UPDialogueWidget::execNextDialogue },
		{ "OnEndButtonClicked", &UPDialogueWidget::execOnEndButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDialogueWidget);
UClass* Z_Construct_UClass_UPDialogueWidget_NoRegister()
{
	return UPDialogueWidget::StaticClass();
}
struct Z_Construct_UClass_UPDialogueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PDialogueWidget.h" },
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueLines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDialogueWidget_InitDialogue, "InitDialogue" }, // 1479533488
		{ &Z_Construct_UFunction_UPDialogueWidget_NextDialogue, "NextDialogue" }, // 1488176268
		{ &Z_Construct_UFunction_UPDialogueWidget_OnEndButtonClicked, "OnEndButtonClicked" }, // 2035445420
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDialogueWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDialogueWidget, NPC), Z_Construct_UClass_APNcpCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPC_MetaData), NewProp_NPC_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_DialogueLines_Inner = { "DialogueLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_DialogueLines = { "DialogueLines", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDialogueWidget, DialogueLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLines_MetaData), NewProp_DialogueLines_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDialogueWidget, DialogueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueText_MetaData), NewProp_DialogueText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDialogueWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextButton_MetaData), NewProp_NextButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_EndButton = { "EndButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPDialogueWidget, EndButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndButton_MetaData), NewProp_EndButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_DialogueLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_DialogueLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_DialogueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_NextButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDialogueWidget_Statics::NewProp_EndButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPDialogueWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPDialogueWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPDialogueWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDialogueWidget_Statics::ClassParams = {
	&UPDialogueWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPDialogueWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPDialogueWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPDialogueWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPDialogueWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPDialogueWidget()
{
	if (!Z_Registration_Info_UClass_UPDialogueWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDialogueWidget.OuterSingleton, Z_Construct_UClass_UPDialogueWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPDialogueWidget.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPDialogueWidget>()
{
	return UPDialogueWidget::StaticClass();
}
UPDialogueWidget::UPDialogueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPDialogueWidget);
UPDialogueWidget::~UPDialogueWidget() {}
// End Class UPDialogueWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPDialogueWidget, UPDialogueWidget::StaticClass, TEXT("UPDialogueWidget"), &Z_Registration_Info_UClass_UPDialogueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDialogueWidget), 3245976519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_2171606897(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
