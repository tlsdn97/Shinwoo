// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PDialogueData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDialogueData() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_UPDialogueData();
A2025_05_12_API UClass* Z_Construct_UClass_UPDialogueData_NoRegister();
A2025_05_12_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueData();
ENGINE_API UClass* Z_Construct_UClass_UDataTable();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin ScriptStruct FDialogueData
static_assert(std::is_polymorphic<FDialogueData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueData;
class UScriptStruct* FDialogueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueData, (UObject*)Z_Construct_UPackage__Script_A2025_05_12(), TEXT("DialogueData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton;
}
template<> A2025_05_12_API UScriptStruct* StaticStruct<FDialogueData>()
{
	return FDialogueData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PDialogueData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lines_MetaData[] = {
		{ "Category", "DialogueData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NPC \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/PDialogueData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NPC \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Lines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Lines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lines_MetaData), NewProp_Lines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Lines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Lines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogueData",
	Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers),
	sizeof(FDialogueData),
	alignof(FDialogueData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton;
}
// End ScriptStruct FDialogueData

// Begin Class UPDialogueData
void UPDialogueData::StaticRegisterNativesUPDialogueData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDialogueData);
UClass* Z_Construct_UClass_UPDialogueData_NoRegister()
{
	return UPDialogueData::StaticClass();
}
struct Z_Construct_UClass_UPDialogueData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "IncludePath", "PDialogueData.h" },
		{ "ModuleRelativePath", "Public/PDialogueData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDialogueData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPDialogueData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataTable,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPDialogueData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDialogueData_Statics::ClassParams = {
	&UPDialogueData::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPDialogueData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPDialogueData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPDialogueData()
{
	if (!Z_Registration_Info_UClass_UPDialogueData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDialogueData.OuterSingleton, Z_Construct_UClass_UPDialogueData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPDialogueData.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<UPDialogueData>()
{
	return UPDialogueData::StaticClass();
}
UPDialogueData::UPDialogueData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPDialogueData);
UPDialogueData::~UPDialogueData() {}
// End Class UPDialogueData

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueData::StaticStruct, Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps, TEXT("DialogueData"), &Z_Registration_Info_UScriptStruct_DialogueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueData), 2145148916U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPDialogueData, UPDialogueData::StaticClass, TEXT("UPDialogueData"), &Z_Registration_Info_UClass_UPDialogueData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDialogueData), 3033357975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueData_h_390492827(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
