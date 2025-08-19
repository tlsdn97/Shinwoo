// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PBTTaskNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBTTaskNode() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPBTTaskNode();
A2025_05_12_API UClass* Z_Construct_UClass_UPBTTaskNode_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPBTTaskNode
void UPBTTaskNode::StaticRegisterNativesUPBTTaskNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPBTTaskNode);
UClass* Z_Construct_UClass_UPBTTaskNode_NoRegister()
{
	return UPBTTaskNode::StaticClass();
}
struct Z_Construct_UClass_UPBTTaskNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PBTTaskNode.h" },
		{ "ModuleRelativePath", "Public/PBTTaskNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPBTTaskNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPBTTaskNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTaskNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPBTTaskNode_Statics::ClassParams = {
	&UPBTTaskNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPBTTaskNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPBTTaskNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPBTTaskNode()
{
	if (!Z_Registration_Info_UClass_UPBTTaskNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPBTTaskNode.OuterSingleton, Z_Construct_UClass_UPBTTaskNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPBTTaskNode.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPBTTaskNode>()
{
	return UPBTTaskNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPBTTaskNode);
UPBTTaskNode::~UPBTTaskNode() {}
// End Class UPBTTaskNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTaskNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPBTTaskNode, UPBTTaskNode::StaticClass, TEXT("UPBTTaskNode"), &Z_Registration_Info_UClass_UPBTTaskNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPBTTaskNode), 1080318797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTaskNode_h_2104442128(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTaskNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PBTTaskNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
