// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CartCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_CartCharacter_generated_h
#error "CartCharacter.generated.h already included, missing '#pragma once' in CartCharacter.h"
#endif
#define CART_CartCharacter_generated_h

#define FID_Cart2_Cart_Source_Cart_CartCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACartCharacter(); \
	friend struct Z_Construct_UClass_ACartCharacter_Statics; \
public: \
	DECLARE_CLASS(ACartCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(ACartCharacter)


#define FID_Cart2_Cart_Source_Cart_CartCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACartCharacter(ACartCharacter&&); \
	ACartCharacter(const ACartCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACartCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACartCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACartCharacter) \
	NO_API virtual ~ACartCharacter();


#define FID_Cart2_Cart_Source_Cart_CartCharacter_h_19_PROLOG
#define FID_Cart2_Cart_Source_Cart_CartCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cart2_Cart_Source_Cart_CartCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Cart2_Cart_Source_Cart_CartCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class ACartCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cart2_Cart_Source_Cart_CartCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
