// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/Mother.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMother() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_AMother();
CART_API UClass* Z_Construct_UClass_AMother_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class AMother
void AMother::StaticRegisterNativesAMother()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMother);
UClass* Z_Construct_UClass_AMother_NoRegister()
{
	return AMother::StaticClass();
}
struct Z_Construct_UClass_AMother_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Mother.h" },
		{ "ModuleRelativePath", "Public/Mother.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMother>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMother_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMother_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMother_Statics::ClassParams = {
	&AMother::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMother_Statics::Class_MetaDataParams), Z_Construct_UClass_AMother_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMother()
{
	if (!Z_Registration_Info_UClass_AMother.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMother.OuterSingleton, Z_Construct_UClass_AMother_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMother.OuterSingleton;
}
template<> CART_API UClass* StaticClass<AMother>()
{
	return AMother::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMother);
AMother::~AMother() {}
// End Class AMother

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_Mother_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMother, AMother::StaticClass, TEXT("AMother"), &Z_Registration_Info_UClass_AMother, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMother), 2994770626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_Mother_h_1701677498(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_Mother_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_Mother_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
