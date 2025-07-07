// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovableObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_MovableObject_generated_h
#error "MovableObject.generated.h already included, missing '#pragma once' in MovableObject.h"
#endif
#define CART_MovableObject_generated_h

#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_MovableObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovableObject(); \
	friend struct Z_Construct_UClass_AMovableObject_Statics; \
public: \
	DECLARE_CLASS(AMovableObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(AMovableObject)


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_MovableObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovableObject(AMovableObject&&); \
	AMovableObject(const AMovableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovableObject) \
	NO_API virtual ~AMovableObject();


#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_MovableObject_h_9_PROLOG
#define FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_MovableObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_MovableObject_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_MovableObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class AMovableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_Public_MovableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
