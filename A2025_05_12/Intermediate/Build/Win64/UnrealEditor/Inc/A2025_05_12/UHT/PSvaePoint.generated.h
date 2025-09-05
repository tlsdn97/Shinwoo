// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PSvaePoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef A2025_05_12_PSvaePoint_generated_h
#error "PSvaePoint.generated.h already included, missing '#pragma once' in PSvaePoint.h"
#endif
#define A2025_05_12_PSvaePoint_generated_h

#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPSvaePoint(); \
	friend struct Z_Construct_UClass_APSvaePoint_Statics; \
public: \
	DECLARE_CLASS(APSvaePoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A2025_05_12"), NO_API) \
	DECLARE_SERIALIZER(APSvaePoint)


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APSvaePoint(APSvaePoint&&); \
	APSvaePoint(const APSvaePoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APSvaePoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APSvaePoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APSvaePoint) \
	NO_API virtual ~APSvaePoint();


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h_9_PROLOG
#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h_12_INCLASS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A2025_05_12_API UClass* StaticClass<class APSvaePoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PSvaePoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
