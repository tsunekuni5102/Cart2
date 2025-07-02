// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/CustomerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomerCharacter() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_ACustomerCharacter();
CART_API UClass* Z_Construct_UClass_ACustomerCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class ACustomerCharacter
void ACustomerCharacter::StaticRegisterNativesACustomerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomerCharacter);
UClass* Z_Construct_UClass_ACustomerCharacter_NoRegister()
{
	return ACustomerCharacter::StaticClass();
}
struct Z_Construct_UClass_ACustomerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CustomerCharacter.h" },
		{ "ModuleRelativePath", "Public/CustomerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACustomerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomerCharacter_Statics::ClassParams = {
	&ACustomerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomerCharacter()
{
	if (!Z_Registration_Info_UClass_ACustomerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomerCharacter.OuterSingleton, Z_Construct_UClass_ACustomerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomerCharacter.OuterSingleton;
}
template<> CART_API UClass* StaticClass<ACustomerCharacter>()
{
	return ACustomerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomerCharacter);
ACustomerCharacter::~ACustomerCharacter() {}
// End Class ACustomerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_CustomerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomerCharacter, ACustomerCharacter::StaticClass, TEXT("ACustomerCharacter"), &Z_Registration_Info_UClass_ACustomerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomerCharacter), 536291696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_CustomerCharacter_h_2552941516(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_CustomerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_CustomerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
