// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomerAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_CustomerAIController_generated_h
#error "CustomerAIController.generated.h already included, missing '#pragma once' in CustomerAIController.h"
#endif
#define CART_CustomerAIController_generated_h

#define FID_2cart_Cart_Source_Cart_Public_CustomerAIController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomerAIController(); \
	friend struct Z_Construct_UClass_ACustomerAIController_Statics; \
public: \
	DECLARE_CLASS(ACustomerAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(ACustomerAIController)


#define FID_2cart_Cart_Source_Cart_Public_CustomerAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACustomerAIController(ACustomerAIController&&); \
	ACustomerAIController(const ACustomerAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomerAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomerAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomerAIController) \
	NO_API virtual ~ACustomerAIController();


#define FID_2cart_Cart_Source_Cart_Public_CustomerAIController_h_9_PROLOG
#define FID_2cart_Cart_Source_Cart_Public_CustomerAIController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_2cart_Cart_Source_Cart_Public_CustomerAIController_h_12_INCLASS_NO_PURE_DECLS \
	FID_2cart_Cart_Source_Cart_Public_CustomerAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class ACustomerAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_2cart_Cart_Source_Cart_Public_CustomerAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
