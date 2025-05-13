// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CartProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CART_CartProjectile_generated_h
#error "CartProjectile.generated.h already included, missing '#pragma once' in CartProjectile.h"
#endif
#define CART_CartProjectile_generated_h

#define FID_Cart_Cart_Source_Cart_CartProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Cart_Cart_Source_Cart_CartProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACartProjectile(); \
	friend struct Z_Construct_UClass_ACartProjectile_Statics; \
public: \
	DECLARE_CLASS(ACartProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cart"), NO_API) \
	DECLARE_SERIALIZER(ACartProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Cart_Cart_Source_Cart_CartProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACartProjectile(ACartProjectile&&); \
	ACartProjectile(const ACartProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACartProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACartProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACartProjectile) \
	NO_API virtual ~ACartProjectile();


#define FID_Cart_Cart_Source_Cart_CartProjectile_h_12_PROLOG
#define FID_Cart_Cart_Source_Cart_CartProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cart_Cart_Source_Cart_CartProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cart_Cart_Source_Cart_CartProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Cart_Cart_Source_Cart_CartProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CART_API UClass* StaticClass<class ACartProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cart_Cart_Source_Cart_CartProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
