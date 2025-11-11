// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PLevelTP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePLevelTP() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APLevelTP();
A2025_05_12_API UClass* Z_Construct_UClass_APLevelTP_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APLevelTP
void APLevelTP::StaticRegisterNativesAPLevelTP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APLevelTP);
UClass* Z_Construct_UClass_APLevelTP_NoRegister()
{
	return APLevelTP::StaticClass();
}
struct Z_Construct_UClass_APLevelTP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PLevelTP.h" },
		{ "ModuleRelativePath", "Public/PLevelTP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPLelvelName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PLevelTP" },
		{ "ModuleRelativePath", "Public/PLevelTP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPLevelVolume_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PLevelTP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TPLelvelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TPLevelVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APLevelTP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APLevelTP_Statics::NewProp_TPLelvelName = { "TPLelvelName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APLevelTP, TPLelvelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPLelvelName_MetaData), NewProp_TPLelvelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APLevelTP_Statics::NewProp_TPLevelVolume = { "TPLevelVolume", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APLevelTP, TPLevelVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPLevelVolume_MetaData), NewProp_TPLevelVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APLevelTP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APLevelTP_Statics::NewProp_TPLelvelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APLevelTP_Statics::NewProp_TPLevelVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APLevelTP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APLevelTP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APLevelTP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APLevelTP_Statics::ClassParams = {
	&APLevelTP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APLevelTP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APLevelTP_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APLevelTP_Statics::Class_MetaDataParams), Z_Construct_UClass_APLevelTP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APLevelTP()
{
	if (!Z_Registration_Info_UClass_APLevelTP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APLevelTP.OuterSingleton, Z_Construct_UClass_APLevelTP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APLevelTP.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APLevelTP>()
{
	return APLevelTP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APLevelTP);
APLevelTP::~APLevelTP() {}
// End Class APLevelTP

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLevelTP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APLevelTP, APLevelTP::StaticClass, TEXT("APLevelTP"), &Z_Registration_Info_UClass_APLevelTP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APLevelTP), 938240980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLevelTP_h_1452542318(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLevelTP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLevelTP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
