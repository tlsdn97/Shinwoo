// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A2025_05_12_PPlayer_generated_h
#error "PPlayer.generated.h already included, missing '#pragma once' in PPlayer.h"
#endif
#define A2025_05_12_PPlayer_generated_h

#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleShoulderLight);


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPPlayer(); \
	friend struct Z_Construct_UClass_APPlayer_Statics; \
public: \
	DECLARE_CLASS(APPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A2025_05_12"), NO_API) \
	DECLARE_SERIALIZER(APPlayer)


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPlayer(APPlayer&&); \
	APPlayer(const APPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APPlayer) \
	NO_API virtual ~APPlayer();


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_10_PROLOG
#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_13_INCLASS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A2025_05_12_API UClass* StaticClass<class APPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
