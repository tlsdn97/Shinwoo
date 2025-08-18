// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PLightActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePLightActor() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APLightActor();
A2025_05_12_API UClass* Z_Construct_UClass_APLightActor_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APLightActor
void APLightActor::StaticRegisterNativesAPLightActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APLightActor);
UClass* Z_Construct_UClass_APLightActor_NoRegister()
{
	return APLightActor::StaticClass();
}
struct Z_Construct_UClass_APLightActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PLightActor.h" },
		{ "ModuleRelativePath", "Public/PLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RectLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightOffset_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/PLightActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RectLight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APLightActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APLightActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APLightActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APLightActor_Statics::NewProp_LightMesh = { "LightMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APLightActor, LightMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMesh_MetaData), NewProp_LightMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APLightActor_Statics::NewProp_RectLight = { "RectLight", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APLightActor, RectLight), Z_Construct_UClass_URectLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RectLight_MetaData), NewProp_RectLight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APLightActor_Statics::NewProp_LightOffset = { "LightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APLightActor, LightOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightOffset_MetaData), NewProp_LightOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APLightActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APLightActor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APLightActor_Statics::NewProp_LightMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APLightActor_Statics::NewProp_RectLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APLightActor_Statics::NewProp_LightOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APLightActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APLightActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APLightActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APLightActor_Statics::ClassParams = {
	&APLightActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APLightActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APLightActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APLightActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APLightActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APLightActor()
{
	if (!Z_Registration_Info_UClass_APLightActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APLightActor.OuterSingleton, Z_Construct_UClass_APLightActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APLightActor.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APLightActor>()
{
	return APLightActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APLightActor);
APLightActor::~APLightActor() {}
// End Class APLightActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLightActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APLightActor, APLightActor::StaticClass, TEXT("APLightActor"), &Z_Registration_Info_UClass_APLightActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APLightActor), 1529457258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLightActor_h_1632280684(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLightActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PLightActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
