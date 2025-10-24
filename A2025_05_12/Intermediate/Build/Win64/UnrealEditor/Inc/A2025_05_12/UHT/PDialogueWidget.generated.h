// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PDialogueWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APNcpCharacter;
#ifdef A2025_05_12_PDialogueWidget_generated_h
#error "PDialogueWidget.generated.h already included, missing '#pragma once' in PDialogueWidget.h"
#endif
#define A2025_05_12_PDialogueWidget_generated_h

#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndButtonClicked); \
	DECLARE_FUNCTION(execNextDialogue); \
	DECLARE_FUNCTION(execInitDialogue);


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPDialogueWidget(); \
	friend struct Z_Construct_UClass_UPDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UPDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/A2025_05_12"), NO_API) \
	DECLARE_SERIALIZER(UPDialogueWidget)


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPDialogueWidget(UPDialogueWidget&&); \
	UPDialogueWidget(const UPDialogueWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDialogueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDialogueWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDialogueWidget) \
	NO_API virtual ~UPDialogueWidget();


#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_12_PROLOG
#define FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A2025_05_12_API UClass* StaticClass<class UPDialogueWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PP_Shinwoo_Shinwoo_A2025_05_12_Source_A2025_05_12_Public_PDialogueWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
