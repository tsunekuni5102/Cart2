// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToyGoalListWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AToyGoalManager;
#ifdef CART_ToyGoalListWidget_generated_h
#error "ToyGoalListWidget.generated.h already included, missing '#pragma once' in ToyGoalListWidget.h"
#endif
#define CART_ToyGoalListWidget_generated_h

#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshDisplay); \
	DECLARE_FUNCTION(execInitializeFromManager);


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToyGoalListWidget(); \
	friend struct Z_Construct_UClass_UToyGoalListWidget_Statics; \
public: \
	DECLARE_CLASS(UToyGoalListWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(UToyGoalListWidget)


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToyGoalListWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToyGoalListWidget(UToyGoalListWidget&&); \
	UToyGoalListWidget(const UToyGoalListWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToyGoalListWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToyGoalListWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToyGoalListWidget) \
	NO_API virtual ~UToyGoalListWidget();


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h_14_PROLOG
#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class UToyGoalListWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalListWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
