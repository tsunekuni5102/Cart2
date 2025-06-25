// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/CartGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCartGameMode() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_ACartGameMode();
CART_API UClass* Z_Construct_UClass_ACartGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class ACartGameMode
void ACartGameMode::StaticRegisterNativesACartGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACartGameMode);
UClass* Z_Construct_UClass_ACartGameMode_NoRegister()
{
	return ACartGameMode::StaticClass();
}
struct Z_Construct_UClass_ACartGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CartGameMode.h" },
		{ "ModuleRelativePath", "CartGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACartGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACartGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACartGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACartGameMode_Statics::ClassParams = {
	&ACartGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACartGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACartGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACartGameMode()
{
	if (!Z_Registration_Info_UClass_ACartGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACartGameMode.OuterSingleton, Z_Construct_UClass_ACartGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACartGameMode.OuterSingleton;
}
template<> CART_API UClass* StaticClass<ACartGameMode>()
{
	return ACartGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACartGameMode);
ACartGameMode::~ACartGameMode() {}
// End Class ACartGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_CartGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACartGameMode, ACartGameMode::StaticClass, TEXT("ACartGameMode"), &Z_Registration_Info_UClass_ACartGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACartGameMode), 2285531352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_CartGameMode_h_1096797990(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_CartGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart2_Cart_Source_Cart_CartGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
