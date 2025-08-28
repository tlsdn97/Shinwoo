// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A2025_05_12_PPlayerController_generated_h
#error "PPlayerController.generated.h already included, missing '#pragma once' in PPlayerController.h"
#endif
#define A2025_05_12_PPlayerController_generated_h

#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExitClicked); \
	DECLARE_FUNCTION(execOnRePlaytClicked); \
	DECLARE_FUNCTION(execShowDieUI);


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPPlayerController(); \
	friend struct Z_Construct_UClass_APPlayerController_Statics; \
public: \
	DECLARE_CLASS(APPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A2025_05_12"), NO_API) \
	DECLARE_SERIALIZER(APPlayerController)


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPlayerController(APPlayerController&&); \
	APPlayerController(const APPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APPlayerController) \
	NO_API virtual ~APPlayerController();


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_12_PROLOG
#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A2025_05_12_API UClass* StaticClass<class APPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
