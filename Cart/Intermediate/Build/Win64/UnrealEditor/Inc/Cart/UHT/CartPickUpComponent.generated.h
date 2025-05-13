// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CartPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACartCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CART_CartPickUpComponent_generated_h
#error "CartPickUpComponent.generated.h already included, missing '#pragma once' in CartPickUpComponent.h"
#endif
#define CART_CartPickUpComponent_generated_h

#define FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_12_DELEGATE \
CART_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ACartCharacter* PickUpCharacter);


#define FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCartPickUpComponent(); \
	friend struct Z_Construct_UClass_UCartPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UCartPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(UCartPickUpComponent)


#define FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCartPickUpComponent(UCartPickUpComponent&&); \
	UCartPickUpComponent(const UCartPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCartPickUpComponent) \
	NO_API virtual ~UCartPickUpComponent();


#define FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_14_PROLOG
#define FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Cart_Cart_Source_Cart_CartPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class UCartPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cart_Cart_Source_Cart_CartPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
