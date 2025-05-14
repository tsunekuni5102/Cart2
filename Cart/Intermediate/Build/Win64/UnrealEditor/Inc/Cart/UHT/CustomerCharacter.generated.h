// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_CustomerCharacter_generated_h
#error "CustomerCharacter.generated.h already included, missing '#pragma once' in CustomerCharacter.h"
#endif
#define CART_CustomerCharacter_generated_h

#define FID_Cart_Cart_Source_Cart_Public_CustomerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomerCharacter(); \
	friend struct Z_Construct_UClass_ACustomerCharacter_Statics; \
public: \
	DECLARE_CLASS(ACustomerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(ACustomerCharacter)


#define FID_Cart_Cart_Source_Cart_Public_CustomerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACustomerCharacter(ACustomerCharacter&&); \
	ACustomerCharacter(const ACustomerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomerCharacter) \
	NO_API virtual ~ACustomerCharacter();


#define FID_Cart_Cart_Source_Cart_Public_CustomerCharacter_h_9_PROLOG
#define FID_Cart_Cart_Source_Cart_Public_CustomerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cart_Cart_Source_Cart_Public_CustomerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Cart_Cart_Source_Cart_Public_CustomerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class ACustomerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cart_Cart_Source_Cart_Public_CustomerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
