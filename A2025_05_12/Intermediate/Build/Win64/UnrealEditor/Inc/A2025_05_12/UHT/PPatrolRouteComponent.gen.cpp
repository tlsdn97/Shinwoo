// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PPatrolRouteComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPatrolRouteComponent() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPPatrolRouteComponent();
A2025_05_12_API UClass* Z_Construct_UClass_UPPatrolRouteComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class UPPatrolRouteComponent
void UPPatrolRouteComponent::StaticRegisterNativesUPPatrolRouteComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPPatrolRouteComponent);
UClass* Z_Construct_UClass_UPPatrolRouteComponent_NoRegister()
{
	return UPPatrolRouteComponent::StaticClass();
}
struct Z_Construct_UClass_UPPatrolRouteComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PPatrolRouteComponent.h" },
		{ "ModuleRelativePath", "Public/PPatrolRouteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartolPoints_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/PPatrolRouteComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartolPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartolPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPPatrolRouteComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPPatrolRouteComponent_Statics::NewProp_PartolPoints_Inner = { "PartolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPPatrolRouteComponent_Statics::NewProp_PartolPoints = { "PartolPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPPatrolRouteComponent, PartolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartolPoints_MetaData), NewProp_PartolPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPPatrolRouteComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPatrolRouteComponent_Statics::NewProp_PartolPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPatrolRouteComponent_Statics::NewProp_PartolPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPPatrolRouteComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPPatrolRouteComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPPatrolRouteComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPPatrolRouteComponent_Statics::ClassParams = {
	&UPPatrolRouteComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPPatrolRouteComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPPatrolRouteComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPPatrolRouteComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPPatrolRouteComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPPatrolRouteComponent()
{
	if (!Z_Registration_Info_UClass_UPPatrolRouteComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPPatrolRouteComponent.OuterSingleton, Z_Construct_UClass_UPPatrolRouteComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPPatrolRouteComponent.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPPatrolRouteComponent>()
{
	return UPPatrolRouteComponent::StaticClass();
}
UPPatrolRouteComponent::UPPatrolRouteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPPatrolRouteComponent);
UPPatrolRouteComponent::~UPPatrolRouteComponent() {}
// End Class UPPatrolRouteComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPatrolRouteComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPPatrolRouteComponent, UPPatrolRouteComponent::StaticClass, TEXT("UPPatrolRouteComponent"), &Z_Registration_Info_UClass_UPPatrolRouteComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPPatrolRouteComponent), 615079649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPatrolRouteComponent_h_1585751224(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPatrolRouteComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPatrolRouteComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
