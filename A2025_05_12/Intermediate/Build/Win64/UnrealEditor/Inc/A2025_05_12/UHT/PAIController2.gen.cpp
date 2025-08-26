// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PAIController2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAIController2() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APAIController2();
A2025_05_12_API UClass* Z_Construct_UClass_APAIController2_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APAIController2
void APAIController2::StaticRegisterNativesAPAIController2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APAIController2);
UClass* Z_Construct_UClass_APAIController2_NoRegister()
{
	return APAIController2::StaticClass();
}
struct Z_Construct_UClass_APAIController2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PAIController2.h" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRange_MetaData[] = {
		{ "Category", "AI|Sight" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightHalfAngleDeg_MetaData[] = {
		{ "Category", "AI|Sight" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseDuration_MetaData[] = {
		{ "Category", "AI|Chase" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_TargetActor_MetaData[] = {
		{ "Category", "AI|BBKeys" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_TargetLocation_MetaData[] = {
		{ "Category", "AI|BBKeys" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_IsChasing_MetaData[] = {
		{ "Category", "AI|BBKeys" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_ChaseTimeLeft_MetaData[] = {
		{ "Category", "AI|BBKeys" },
		{ "ModuleRelativePath", "Public/PAIController2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightHalfAngleDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseDuration;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_TargetLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_IsChasing;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_ChaseTimeLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APAIController2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APAIController2_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIController2, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeAsset_MetaData), NewProp_BehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APAIController2_Statics::NewProp_SightRange = { "SightRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIController2, SightRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRange_MetaData), NewProp_SightRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APAIController2_Statics::NewProp_SightHalfAngleDeg = { "SightHalfAngleDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIController2, SightHalfAngleDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightHalfAngleDeg_MetaData), NewProp_SightHalfAngleDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APAIController2_Statics::NewProp_ChaseDuration = { "ChaseDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIController2, ChaseDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseDuration_MetaData), NewProp_ChaseDuration_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APAIController2_Statics::NewProp_Key_TargetActor = { "Key_TargetActor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIController2, Key_TargetActor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_TargetActor_MetaData), NewProp_Key_TargetActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APAIController2_Statics::NewProp_Key_TargetLocation = { "Key_TargetLocation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIController2, Key_TargetLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_TargetLocation_MetaData), NewProp_Key_TargetLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APAIController2_Statics::NewProp_Key_IsChasing = { "Key_IsChasing", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIController2, Key_IsChasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_IsChasing_MetaData), NewProp_Key_IsChasing_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APAIController2_Statics::NewProp_Key_ChaseTimeLeft = { "Key_ChaseTimeLeft", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APAIController2, Key_ChaseTimeLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_ChaseTimeLeft_MetaData), NewProp_Key_ChaseTimeLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APAIController2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIController2_Statics::NewProp_BehaviorTreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIController2_Statics::NewProp_SightRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIController2_Statics::NewProp_SightHalfAngleDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIController2_Statics::NewProp_ChaseDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIController2_Statics::NewProp_Key_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIController2_Statics::NewProp_Key_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIController2_Statics::NewProp_Key_IsChasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APAIController2_Statics::NewProp_Key_ChaseTimeLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APAIController2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APAIController2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APAIController2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APAIController2_Statics::ClassParams = {
	&APAIController2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APAIController2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APAIController2_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APAIController2_Statics::Class_MetaDataParams), Z_Construct_UClass_APAIController2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APAIController2()
{
	if (!Z_Registration_Info_UClass_APAIController2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APAIController2.OuterSingleton, Z_Construct_UClass_APAIController2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APAIController2.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APAIController2>()
{
	return APAIController2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APAIController2);
APAIController2::~APAIController2() {}
// End Class APAIController2

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIController2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APAIController2, APAIController2::StaticClass, TEXT("APAIController2"), &Z_Registration_Info_UClass_APAIController2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APAIController2), 896114669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIController2_h_4032777518(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIController2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIController2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
