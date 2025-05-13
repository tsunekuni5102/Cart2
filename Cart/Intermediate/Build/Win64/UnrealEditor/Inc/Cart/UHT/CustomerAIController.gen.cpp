// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/CustomerAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomerAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
CART_API UClass* Z_Construct_UClass_ACustomerAIController();
CART_API UClass* Z_Construct_UClass_ACustomerAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class ACustomerAIController
void ACustomerAIController::StaticRegisterNativesACustomerAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomerAIController);
UClass* Z_Construct_UClass_ACustomerAIController_NoRegister()
{
	return ACustomerAIController::StaticClass();
}
struct Z_Construct_UClass_ACustomerAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CustomerAIController.h" },
		{ "ModuleRelativePath", "Public/CustomerAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomerAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACustomerAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomerAIController_Statics::ClassParams = {
	&ACustomerAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomerAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomerAIController()
{
	if (!Z_Registration_Info_UClass_ACustomerAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomerAIController.OuterSingleton, Z_Construct_UClass_ACustomerAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomerAIController.OuterSingleton;
}
template<> CART_API UClass* StaticClass<ACustomerAIController>()
{
	return ACustomerAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomerAIController);
ACustomerAIController::~ACustomerAIController() {}
// End Class ACustomerAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_CustomerAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomerAIController, ACustomerAIController::StaticClass, TEXT("ACustomerAIController"), &Z_Registration_Info_UClass_ACustomerAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomerAIController), 1237484421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_CustomerAIController_h_2802388540(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_CustomerAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_CustomerAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
