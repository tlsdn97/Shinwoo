// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PAIGhost2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef A2025_05_12_PAIGhost2_generated_h
#error "PAIGhost2.generated.h already included, missing '#pragma once' in PAIGhost2.h"
#endif
#define A2025_05_12_PAIGhost2_generated_h

#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSeePawn2);


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPAIGhost2(); \
	friend struct Z_Construct_UClass_APAIGhost2_Statics; \
public: \
	DECLARE_CLASS(APAIGhost2, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A2025_05_12"), NO_API) \
	DECLARE_SERIALIZER(APAIGhost2)


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APAIGhost2(APAIGhost2&&); \
	APAIGhost2(const APAIGhost2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APAIGhost2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APAIGhost2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APAIGhost2) \
	NO_API virtual ~APAIGhost2();


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_9_PROLOG
#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_12_INCLASS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A2025_05_12_API UClass* StaticClass<class APAIGhost2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PAIGhost2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
