// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PBTTask_FindRandomLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBTTask_FindRandomLocation() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPBTTask_FindRandomLocation();
A2025_05_12_API UClass* Z_Construct_UClass_UPBTTask_FindRandomLocation_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPBTTask_FindRandomLocation
void UPBTTask_FindRandomLocation::StaticRegisterNativesUPBTTask_FindRandomLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPBTTask_FindRandomLocation);
UClass* Z_Construct_UClass_UPBTTask_FindRandomLocation_NoRegister()
{
	return UPBTTask_FindRandomLocation::StaticClass();
}
struct Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PBTTask_FindRandomLocation.h" },
		{ "ModuleRelativePath", "Public/PBTTask_FindRandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/PBTTask_FindRandomLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPBTTask_FindRandomLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPBTTask_FindRandomLocation, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::NewProp_SearchRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::ClassParams = {
	&UPBTTask_FindRandomLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPBTTask_FindRandomLocation()
{
	if (!Z_Registration_Info_UClass_UPBTTask_FindRandomLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPBTTask_FindRandomLocation.OuterSingleton, Z_Construct_UClass_UPBTTask_FindRandomLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPBTTask_FindRandomLocation.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPBTTask_FindRandomLocation>()
{
	return UPBTTask_FindRandomLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPBTTask_FindRandomLocation);
UPBTTask_FindRandomLocation::~UPBTTask_FindRandomLocation() {}
// End Class UPBTTask_FindRandomLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTask_FindRandomLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPBTTask_FindRandomLocation, UPBTTask_FindRandomLocation::StaticClass, TEXT("UPBTTask_FindRandomLocation"), &Z_Registration_Info_UClass_UPBTTask_FindRandomLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPBTTask_FindRandomLocation), 1427093090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTask_FindRandomLocation_h_2506870594(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTask_FindRandomLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTask_FindRandomLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
