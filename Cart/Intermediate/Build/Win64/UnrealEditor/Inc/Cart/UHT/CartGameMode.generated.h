// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CartGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_CartGameMode_generated_h
#error "CartGameMode.generated.h already included, missing '#pragma once' in CartGameMode.h"
#endif
#define CART_CartGameMode_generated_h

#define FID_Cart2_Cart_Source_Cart_CartGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACartGameMode(); \
	friend struct Z_Construct_UClass_ACartGameMode_Statics; \
public: \
	DECLARE_CLASS(ACartGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), CART_API) \
	DECLARE_SERIALIZER(ACartGameMode)


#define FID_Cart2_Cart_Source_Cart_CartGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACartGameMode(ACartGameMode&&); \
	ACartGameMode(const ACartGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CART_API, ACartGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACartGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACartGameMode) \
	CART_API virtual ~ACartGameMode();


#define FID_Cart2_Cart_Source_Cart_CartGameMode_h_9_PROLOG
#define FID_Cart2_Cart_Source_Cart_CartGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cart2_Cart_Source_Cart_CartGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Cart2_Cart_Source_Cart_CartGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class ACartGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cart2_Cart_Source_Cart_CartGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
