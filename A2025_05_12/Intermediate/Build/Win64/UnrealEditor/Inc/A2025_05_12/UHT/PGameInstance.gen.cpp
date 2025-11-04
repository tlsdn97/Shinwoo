// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGameInstance() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPGameInstance();
A2025_05_12_API UClass* Z_Construct_UClass_UPGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPGameInstance
void UPGameInstance::StaticRegisterNativesUPGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPGameInstance);
UClass* Z_Construct_UClass_UPGameInstance_NoRegister()
{
	return UPGameInstance::StaticClass();
}
struct Z_Construct_UClass_UPGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PGameInstance.h" },
		{ "ModuleRelativePath", "Public/PGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPGameInstance_Statics::ClassParams = {
	&UPGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPGameInstance()
{
	if (!Z_Registration_Info_UClass_UPGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPGameInstance.OuterSingleton, Z_Construct_UClass_UPGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPGameInstance.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPGameInstance>()
{
	return UPGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPGameInstance);
UPGameInstance::~UPGameInstance() {}
// End Class UPGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPGameInstance, UPGameInstance::StaticClass, TEXT("UPGameInstance"), &Z_Registration_Info_UClass_UPGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPGameInstance), 3072191085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PGameInstance_h_1760636174(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
