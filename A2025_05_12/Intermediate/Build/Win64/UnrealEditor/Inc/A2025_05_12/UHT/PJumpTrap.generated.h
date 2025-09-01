// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PJumpTrap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef A2025_05_12_PJumpTrap_generated_h
#error "PJumpTrap.generated.h already included, missing '#pragma once' in PJumpTrap.h"
#endif
#define A2025_05_12_PJumpTrap_generated_h

#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPJumpTrap(); \
	friend struct Z_Construct_UClass_APJumpTrap_Statics; \
public: \
	DECLARE_CLASS(APJumpTrap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A2025_05_12"), NO_API) \
	DECLARE_SERIALIZER(APJumpTrap)


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APJumpTrap(APJumpTrap&&); \
	APJumpTrap(const APJumpTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APJumpTrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APJumpTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APJumpTrap) \
	NO_API virtual ~APJumpTrap();


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h_9_PROLOG
#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h_12_INCLASS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A2025_05_12_API UClass* StaticClass<class APJumpTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PJumpTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
