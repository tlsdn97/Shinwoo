// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PBTTask_GetPatrolPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBTTask_GetPatrolPoint() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPBTTask_GetPatrolPoint();
A2025_05_12_API UClass* Z_Construct_UClass_UPBTTask_GetPatrolPoint_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPBTTask_GetPatrolPoint
void UPBTTask_GetPatrolPoint::StaticRegisterNativesUPBTTask_GetPatrolPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPBTTask_GetPatrolPoint);
UClass* Z_Construct_UClass_UPBTTask_GetPatrolPoint_NoRegister()
{
	return UPBTTask_GetPatrolPoint::StaticClass();
}
struct Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PBTTask_GetPatrolPoint.h" },
		{ "ModuleRelativePath", "Public/PBTTask_GetPatrolPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/PBTTask_GetPatrolPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPBTTask_GetPatrolPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPBTTask_GetPatrolPoint, PatrolRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolRadius_MetaData), NewProp_PatrolRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::NewProp_PatrolRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::ClassParams = {
	&UPBTTask_GetPatrolPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPBTTask_GetPatrolPoint()
{
	if (!Z_Registration_Info_UClass_UPBTTask_GetPatrolPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPBTTask_GetPatrolPoint.OuterSingleton, Z_Construct_UClass_UPBTTask_GetPatrolPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPBTTask_GetPatrolPoint.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPBTTask_GetPatrolPoint>()
{
	return UPBTTask_GetPatrolPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPBTTask_GetPatrolPoint);
UPBTTask_GetPatrolPoint::~UPBTTask_GetPatrolPoint() {}
// End Class UPBTTask_GetPatrolPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTask_GetPatrolPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPBTTask_GetPatrolPoint, UPBTTask_GetPatrolPoint::StaticClass, TEXT("UPBTTask_GetPatrolPoint"), &Z_Registration_Info_UClass_UPBTTask_GetPatrolPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPBTTask_GetPatrolPoint), 1116710587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTask_GetPatrolPoint_h_2515185274(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTask_GetPatrolPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTask_GetPatrolPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
