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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnLocation_MetaData[] = {
		{ "Category", "PGameInstance" },
		{ "ModuleRelativePath", "Public/PGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPGameInstance_Statics::NewProp_RespawnLocation = { "RespawnLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPGameInstance, RespawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnLocation_MetaData), NewProp_RespawnLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGameInstance_Statics::NewProp_RespawnLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UPGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::PropPointers),
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
UPGameInstance::UPGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPGameInstance);
UPGameInstance::~UPGameInstance() {}
// End Class UPGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPGameInstance, UPGameInstance::StaticClass, TEXT("UPGameInstance"), &Z_Registration_Info_UClass_UPGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPGameInstance), 4221735333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PGameInstance_h_3619970461(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
