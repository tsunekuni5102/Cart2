// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTimeWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CART_MyTimeWidget_generated_h
#error "MyTimeWidget.generated.h already included, missing '#pragma once' in MyTimeWidget.h"
#endif
#define CART_MyTimeWidget_generated_h

#define FID_Cart2_Cart_Source_Cart_Public_MyTimeWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyTimeWidget(); \
	friend struct Z_Construct_UClass_UMyTimeWidget_Statics; \
public: \
	DECLARE_CLASS(UMyTimeWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(UMyTimeWidget)


#define FID_Cart2_Cart_Source_Cart_Public_MyTimeWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyTimeWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyTimeWidget(UMyTimeWidget&&); \
	UMyTimeWidget(const UMyTimeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyTimeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyTimeWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyTimeWidget) \
	NO_API virtual ~UMyTimeWidget();


#define FID_Cart2_Cart_Source_Cart_Public_MyTimeWidget_h_17_PROLOG
#define FID_Cart2_Cart_Source_Cart_Public_MyTimeWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cart2_Cart_Source_Cart_Public_MyTimeWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_Cart2_Cart_Source_Cart_Public_MyTimeWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class UMyTimeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cart2_Cart_Source_Cart_Public_MyTimeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
