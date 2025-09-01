// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PAIGhost2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAIGhost2() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APAIGhost2();
A2025_05_12_API UClass* Z_Construct_UClass_APAIGhost2_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APAIGhost2
void APAIGhost2::StaticRegisterNativesAPAIGhost2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APAIGhost2);
UClass* Z_Construct_UClass_APAIGhost2_NoRegister()
{
	return APAIGhost2::StaticClass();
}
struct Z_Construct_UClass_APAIGhost2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PAIGhost2.h" },
		{ "ModuleRelativePath", "Public/PAIGhost2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/PAIGhost2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APAIGhost2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APAIGhost2_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIGhost2, Tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tree_MetaData), NewProp_Tree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APAIGhost2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIGhost2_Statics::NewProp_Tree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APAIGhost2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APAIGhost2_Statics::ClassParams = {
	&APAIGhost2::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APAIGhost2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost2_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APAIGhost2_Statics::Class_MetaDataParams), Z_Construct_UClass_APAIGhost2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APAIGhost2()
{
	if (!Z_Registration_Info_UClass_APAIGhost2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APAIGhost2.OuterSingleton, Z_Construct_UClass_APAIGhost2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APAIGhost2.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APAIGhost2>()
{
	return APAIGhost2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APAIGhost2);
APAIGhost2::~APAIGhost2() {}
// End Class APAIGhost2

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APAIGhost2, APAIGhost2::StaticClass, TEXT("APAIGhost2"), &Z_Registration_Info_UClass_APAIGhost2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APAIGhost2), 3343770503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_3562724613(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
