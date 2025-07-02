// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Toy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_Toy_generated_h
#error "Toy.generated.h already included, missing '#pragma once' in Toy.h"
#endif
#define CART_Toy_generated_h

#define FID_Cart2_Cart_Source_Cart_Public_Toy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetWeight);


#define FID_Cart2_Cart_Source_Cart_Public_Toy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToy(); \
	friend struct Z_Construct_UClass_AToy_Statics; \
public: \
	DECLARE_CLASS(AToy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(AToy)


#define FID_Cart2_Cart_Source_Cart_Public_Toy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AToy(AToy&&); \
	AToy(const AToy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AToy) \
	NO_API virtual ~AToy();


#define FID_Cart2_Cart_Source_Cart_Public_Toy_h_9_PROLOG
#define FID_Cart2_Cart_Source_Cart_Public_Toy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cart2_Cart_Source_Cart_Public_Toy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cart2_Cart_Source_Cart_Public_Toy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Cart2_Cart_Source_Cart_Public_Toy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class AToy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cart2_Cart_Source_Cart_Public_Toy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
