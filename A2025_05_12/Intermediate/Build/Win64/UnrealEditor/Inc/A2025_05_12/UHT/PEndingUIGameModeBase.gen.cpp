// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PEndingUIGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePEndingUIGameModeBase() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APEndingUIGameModeBase();
A2025_05_12_API UClass* Z_Construct_UClass_APEndingUIGameModeBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APEndingUIGameModeBase
void APEndingUIGameModeBase::StaticRegisterNativesAPEndingUIGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APEndingUIGameModeBase);
UClass* Z_Construct_UClass_APEndingUIGameModeBase_NoRegister()
{
	return APEndingUIGameModeBase::StaticClass();
}
struct Z_Construct_UClass_APEndingUIGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PEndingUIGameModeBase.h" },
		{ "ModuleRelativePath", "Public/PEndingUIGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndingMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/PEndingUIGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EndingMenuWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APEndingUIGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APEndingUIGameModeBase_Statics::NewProp_EndingMenuWidgetClass = { "EndingMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APEndingUIGameModeBase, EndingMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndingMenuWidgetClass_MetaData), NewProp_EndingMenuWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APEndingUIGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APEndingUIGameModeBase_Statics::NewProp_EndingMenuWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APEndingUIGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APEndingUIGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APEndingUIGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APEndingUIGameModeBase_Statics::ClassParams = {
	&APEndingUIGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APEndingUIGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APEndingUIGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APEndingUIGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APEndingUIGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APEndingUIGameModeBase()
{
	if (!Z_Registration_Info_UClass_APEndingUIGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APEndingUIGameModeBase.OuterSingleton, Z_Construct_UClass_APEndingUIGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APEndingUIGameModeBase.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APEndingUIGameModeBase>()
{
	return APEndingUIGameModeBase::StaticClass();
}
APEndingUIGameModeBase::APEndingUIGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APEndingUIGameModeBase);
APEndingUIGameModeBase::~APEndingUIGameModeBase() {}
// End Class APEndingUIGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingUIGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APEndingUIGameModeBase, APEndingUIGameModeBase::StaticClass, TEXT("APEndingUIGameModeBase"), &Z_Registration_Info_UClass_APEndingUIGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APEndingUIGameModeBase), 4195761544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingUIGameModeBase_h_1703085794(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingUIGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PEndingUIGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
