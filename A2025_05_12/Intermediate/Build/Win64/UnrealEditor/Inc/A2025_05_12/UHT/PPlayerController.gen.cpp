// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPlayerController() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APPlayerController();
A2025_05_12_API UClass* Z_Construct_UClass_APPlayerController_NoRegister();
A2025_05_12_API UClass* Z_Construct_UClass_UPDeathUIWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APPlayerController Function OnExitClicked
struct Z_Construct_UFunction_APPlayerController_OnExitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPlayerController_OnExitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPlayerController, nullptr, "OnExitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APPlayerController_OnExitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_APPlayerController_OnExitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APPlayerController_OnExitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPlayerController_OnExitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APPlayerController::execOnExitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitClicked();
	P_NATIVE_END;
}
// End Class APPlayerController Function OnExitClicked

// Begin Class APPlayerController Function OnRePlaytClicked
struct Z_Construct_UFunction_APPlayerController_OnRePlaytClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPlayerController_OnRePlaytClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPlayerController, nullptr, "OnRePlaytClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APPlayerController_OnRePlaytClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_APPlayerController_OnRePlaytClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APPlayerController_OnRePlaytClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPlayerController_OnRePlaytClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APPlayerController::execOnRePlaytClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRePlaytClicked();
	P_NATIVE_END;
}
// End Class APPlayerController Function OnRePlaytClicked

// Begin Class APPlayerController
void APPlayerController::StaticRegisterNativesAPPlayerController()
{
	UClass* Class = APPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitClicked", &APPlayerController::execOnExitClicked },
		{ "OnRePlaytClicked", &APPlayerController::execOnRePlaytClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPlayerController);
UClass* Z_Construct_UClass_APPlayerController_NoRegister()
{
	return APPlayerController::StaticClass();
}
struct Z_Construct_UClass_APPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PPlayerController.h" },
		{ "ModuleRelativePath", "Public/PPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/PPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APPlayerController_OnExitClicked, "OnExitClicked" }, // 2238598536
		{ &Z_Construct_UFunction_APPlayerController_OnRePlaytClicked, "OnRePlaytClicked" }, // 1959114763
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APPlayerController_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPlayerController, GameOverWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPDeathUIWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidgetClass_MetaData), NewProp_GameOverWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlayerController_Statics::NewProp_GameOverWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPlayerController_Statics::ClassParams = {
	&APPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPlayerController()
{
	if (!Z_Registration_Info_UClass_APPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPlayerController.OuterSingleton, Z_Construct_UClass_APPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPlayerController.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APPlayerController>()
{
	return APPlayerController::StaticClass();
}
APPlayerController::APPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPlayerController);
APPlayerController::~APPlayerController() {}
// End Class APPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPlayerController, APPlayerController::StaticClass, TEXT("APPlayerController"), &Z_Registration_Info_UClass_APPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPlayerController), 3740142457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_2683707281(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
