// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A2025_05_12/Public/PDoor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDoor() {}

// Begin Cross Module References
A2025_05_12_API UClass* Z_Construct_UClass_APDoor();
A2025_05_12_API UClass* Z_Construct_UClass_APDoor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_A2025_05_12();
// End Cross Module References

// Begin Class APDoor Function HandleTimelineProgress
struct Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics
{
	struct PDoor_eventHandleTimelineProgress_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDoor_eventHandleTimelineProgress_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APDoor, nullptr, "HandleTimelineProgress", nullptr, nullptr, Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::PDoor_eventHandleTimelineProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::PDoor_eventHandleTimelineProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APDoor_HandleTimelineProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APDoor_HandleTimelineProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APDoor::execHandleTimelineProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTimelineProgress(Z_Param_Value);
	P_NATIVE_END;
}
// End Class APDoor Function HandleTimelineProgress

// Begin Class APDoor Function OnTriggerBoxOverlapBegin
struct Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics
{
	struct PDoor_eventOnTriggerBoxOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDoor_eventOnTriggerBoxOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDoor_eventOnTriggerBoxOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDoor_eventOnTriggerBoxOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDoor_eventOnTriggerBoxOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PDoor_eventOnTriggerBoxOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PDoor_eventOnTriggerBoxOverlapBegin_Parms), &Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDoor_eventOnTriggerBoxOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APDoor, nullptr, "OnTriggerBoxOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::PDoor_eventOnTriggerBoxOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::PDoor_eventOnTriggerBoxOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APDoor::execOnTriggerBoxOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerBoxOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APDoor Function OnTriggerBoxOverlapBegin

// Begin Class APDoor
void APDoor::StaticRegisterNativesAPDoor()
{
	UClass* Class = APDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleTimelineProgress", &APDoor::execHandleTimelineProgress },
		{ "OnTriggerBoxOverlapBegin", &APDoor::execOnTriggerBoxOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APDoor);
UClass* Z_Construct_UClass_APDoor_NoRegister()
{
	return APDoor::StaticClass();
}
struct Z_Construct_UClass_APDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PDoor.h" },
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[] = {
		{ "Category", "PDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[] = {
		{ "Category", "PDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "PDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenCurve_MetaData[] = {
		{ "Category", "PDoor" },
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseDelay_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/PDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloseDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APDoor_HandleTimelineProgress, "HandleTimelineProgress" }, // 2615172965
		{ &Z_Construct_UFunction_APDoor_OnTriggerBoxOverlapBegin, "OnTriggerBoxOverlapBegin" }, // 621044290
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APDoor_Statics::NewProp_DoorFrame = { "DoorFrame", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APDoor, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorFrame_MetaData), NewProp_DoorFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APDoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APDoor, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Door_MetaData), NewProp_Door_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APDoor_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APDoor, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APDoor_Statics::NewProp_OpenCurve = { "OpenCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APDoor, OpenCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenCurve_MetaData), NewProp_OpenCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APDoor_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APDoor, OpenAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAngle_MetaData), NewProp_OpenAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APDoor_Statics::NewProp_CloseDelay = { "CloseDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APDoor, CloseDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseDelay_MetaData), NewProp_CloseDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDoor_Statics::NewProp_DoorFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDoor_Statics::NewProp_Door,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDoor_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDoor_Statics::NewProp_OpenCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDoor_Statics::NewProp_OpenAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDoor_Statics::NewProp_CloseDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_A2025_05_12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APDoor_Statics::ClassParams = {
	&APDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APDoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APDoor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_APDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APDoor()
{
	if (!Z_Registration_Info_UClass_APDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APDoor.OuterSingleton, Z_Construct_UClass_APDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APDoor.OuterSingleton;
}
template<> A2025_05_12_API UClass* StaticClass<APDoor>()
{
	return APDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APDoor);
APDoor::~APDoor() {}
// End Class APDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDoor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APDoor, APDoor::StaticClass, TEXT("APDoor"), &Z_Registration_Info_UClass_APDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APDoor), 3763398772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDoor_h_1579192816(TEXT("/Script/A2025_05_12"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
