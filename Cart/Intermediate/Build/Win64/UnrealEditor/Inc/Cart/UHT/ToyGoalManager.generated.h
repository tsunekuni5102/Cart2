// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToyGoalManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_ToyGoalManager_generated_h
#error "ToyGoalManager.generated.h already included, missing '#pragma once' in ToyGoalManager.h"
#endif
#define CART_ToyGoalManager_generated_h

#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_10_DELEGATE \
CART_API void FOnGoalsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnGoalsUpdated);


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAllGoalsCleared); \
	DECLARE_FUNCTION(execAddToy);


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToyGoalManager(); \
	friend struct Z_Construct_UClass_AToyGoalManager_Statics; \
public: \
	DECLARE_CLASS(AToyGoalManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(AToyGoalManager)


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AToyGoalManager(AToyGoalManager&&); \
	AToyGoalManager(const AToyGoalManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToyGoalManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToyGoalManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AToyGoalManager) \
	NO_API virtual ~AToyGoalManager();


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_12_PROLOG
#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class AToyGoalManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
