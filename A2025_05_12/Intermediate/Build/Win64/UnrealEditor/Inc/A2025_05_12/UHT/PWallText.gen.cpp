// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PWallText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePWallText() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APWallText();
A2025_05_12_API UClass* Z_Construct_UClass_APWallText_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APWallText
void APWallText::StaticRegisterNativesAPWallText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APWallText);
UClass* Z_Construct_UClass_APWallText_NoRegister()
{
	return APWallText::StaticClass();
}
struct Z_Construct_UClass_APWallText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PWallText.h" },
		{ "ModuleRelativePath", "Public/PWallText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextComponent_MetaData[] = {
		{ "Category", "PWallText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PWallText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[] = {
		{ "Category", "WallText" },
		{ "ModuleRelativePath", "Public/PWallText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "WallText" },
		{ "ModuleRelativePath", "Public/PWallText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APWallText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APWallText_Statics::NewProp_TextComponent = { "TextComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWallText, TextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextComponent_MetaData), NewProp_TextComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APWallText_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWallText, DisplayText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayText_MetaData), NewProp_DisplayText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APWallText_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWallText, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APWallText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWallText_Statics::NewProp_TextComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWallText_Statics::NewProp_DisplayText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWallText_Statics::NewProp_TextColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APWallText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APWallText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APWallText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APWallText_Statics::ClassParams = {
	&APWallText::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APWallText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APWallText_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APWallText_Statics::Class_MetaDataParams), Z_Construct_UClass_APWallText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APWallText()
{
	if (!Z_Registration_Info_UClass_APWallText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APWallText.OuterSingleton, Z_Construct_UClass_APWallText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APWallText.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APWallText>()
{
	return APWallText::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APWallText);
APWallText::~APWallText() {}
// End Class APWallText

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PWallText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APWallText, APWallText::StaticClass, TEXT("APWallText"), &Z_Registration_Info_UClass_APWallText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APWallText), 2212439642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PWallText_h_2636484091(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PWallText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PWallText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
