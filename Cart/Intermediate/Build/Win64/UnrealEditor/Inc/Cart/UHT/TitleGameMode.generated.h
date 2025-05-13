// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TitleGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_TitleGameMode_generated_h
#error "TitleGameMode.generated.h already included, missing '#pragma once' in TitleGameMode.h"
#endif
#define CART_TitleGameMode_generated_h

#define FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitleGameMode(); \
	friend struct Z_Construct_UClass_ATitleGameMode_Statics; \
public: \
	DECLARE_CLASS(ATitleGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(ATitleGameMode)


#define FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATitleGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATitleGameMode(ATitleGameMode&&); \
	ATitleGameMode(const ATitleGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitleGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitleGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATitleGameMode) \
	NO_API virtual ~ATitleGameMode();


#define FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleGameMode_h_12_PROLOG
#define FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class ATitleGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
