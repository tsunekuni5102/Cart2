// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/MySceneCapture2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySceneCapture2D() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_AMySceneCapture2D();
CART_API UClass* Z_Construct_UClass_AMySceneCapture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class AMySceneCapture2D
void AMySceneCapture2D::StaticRegisterNativesAMySceneCapture2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMySceneCapture2D);
UClass* Z_Construct_UClass_AMySceneCapture2D_NoRegister()
{
	return AMySceneCapture2D::StaticClass();
}
struct Z_Construct_UClass_AMySceneCapture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "MySceneCapture2D.h" },
		{ "ModuleRelativePath", "MySceneCapture2D.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySceneCapture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMySceneCapture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASceneCapture2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySceneCapture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMySceneCapture2D_Statics::ClassParams = {
	&AMySceneCapture2D::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMySceneCapture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_AMySceneCapture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMySceneCapture2D()
{
	if (!Z_Registration_Info_UClass_AMySceneCapture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMySceneCapture2D.OuterSingleton, Z_Construct_UClass_AMySceneCapture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMySceneCapture2D.OuterSingleton;
}
template<> CART_API UClass* StaticClass<AMySceneCapture2D>()
{
	return AMySceneCapture2D::StaticClass();
}
AMySceneCapture2D::AMySceneCapture2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMySceneCapture2D);
AMySceneCapture2D::~AMySceneCapture2D() {}
// End Class AMySceneCapture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_MySceneCapture2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMySceneCapture2D, AMySceneCapture2D::StaticClass, TEXT("AMySceneCapture2D"), &Z_Registration_Info_UClass_AMySceneCapture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMySceneCapture2D), 3327088302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_MySceneCapture2D_h_2798321819(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_MySceneCapture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_MySceneCapture2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
