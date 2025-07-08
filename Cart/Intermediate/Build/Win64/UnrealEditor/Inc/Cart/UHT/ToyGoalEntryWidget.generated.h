// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToyGoalEntryWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FToyGoal;
#ifdef CART_ToyGoalEntryWidget_generated_h
#error "ToyGoalEntryWidget.generated.h already included, missing '#pragma once' in ToyGoalEntryWidget.h"
#endif
#define CART_ToyGoalEntryWidget_generated_h

#define FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetup);


#define FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToyGoalEntryWidget(); \
	friend struct Z_Construct_UClass_UToyGoalEntryWidget_Statics; \
public: \
	DECLARE_CLASS(UToyGoalEntryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(UToyGoalEntryWidget)


#define FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToyGoalEntryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToyGoalEntryWidget(UToyGoalEntryWidget&&); \
	UToyGoalEntryWidget(const UToyGoalEntryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToyGoalEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToyGoalEntryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToyGoalEntryWidget) \
	NO_API virtual ~UToyGoalEntryWidget();


#define FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_13_PROLOG
#define FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class UToyGoalEntryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_2cart_Cart_Source_Cart_Public_ToyGoalEntryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
