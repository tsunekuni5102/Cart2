// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/MovableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovableObject() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_AMovableObject();
CART_API UClass* Z_Construct_UClass_AMovableObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class AMovableObject
void AMovableObject::StaticRegisterNativesAMovableObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovableObject);
UClass* Z_Construct_UClass_AMovableObject_NoRegister()
{
	return AMovableObject::StaticClass();
}
struct Z_Construct_UClass_AMovableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovableObject.h" },
		{ "ModuleRelativePath", "Public/MovableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""b\xef\xbf\xbdV\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdR\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd|\xef\xbf\xbd[\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""b\xef\xbf\xbdV\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdR\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd|\xef\xbf\xbd[\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovableObject_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovableObject, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableObject_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovableObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovableObject_Statics::ClassParams = {
	&AMovableObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovableObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovableObject_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovableObject()
{
	if (!Z_Registration_Info_UClass_AMovableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovableObject.OuterSingleton, Z_Construct_UClass_AMovableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovableObject.OuterSingleton;
}
template<> CART_API UClass* StaticClass<AMovableObject>()
{
	return AMovableObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovableObject);
AMovableObject::~AMovableObject() {}
// End Class AMovableObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cart_Cart_Source_Cart_Public_MovableObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovableObject, AMovableObject::StaticClass, TEXT("AMovableObject"), &Z_Registration_Info_UClass_AMovableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovableObject), 2566733158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cart_Cart_Source_Cart_Public_MovableObject_h_2379288043(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Cart_Cart_Source_Cart_Public_MovableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cart_Cart_Source_Cart_Public_MovableObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
