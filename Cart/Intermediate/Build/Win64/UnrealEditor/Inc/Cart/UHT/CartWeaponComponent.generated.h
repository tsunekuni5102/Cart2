// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CartWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACartCharacter;
#ifdef CART_CartWeaponComponent_generated_h
#error "CartWeaponComponent.generated.h already included, missing '#pragma once' in CartWeaponComponent.h"
#endif
#define CART_CartWeaponComponent_generated_h

#define FID_Cart_Cart_Source_Cart_CartWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Cart_Cart_Source_Cart_CartWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCartWeaponComponent(); \
	friend struct Z_Construct_UClass_UCartWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UCartWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(UCartWeaponComponent)


#define FID_Cart_Cart_Source_Cart_CartWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCartWeaponComponent(UCartWeaponComponent&&); \
	UCartWeaponComponent(const UCartWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCartWeaponComponent) \
	NO_API virtual ~UCartWeaponComponent();


#define FID_Cart_Cart_Source_Cart_CartWeaponComponent_h_11_PROLOG
#define FID_Cart_Cart_Source_Cart_CartWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cart_Cart_Source_Cart_CartWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cart_Cart_Source_Cart_CartWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Cart_Cart_Source_Cart_CartWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class UCartWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cart_Cart_Source_Cart_CartWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
