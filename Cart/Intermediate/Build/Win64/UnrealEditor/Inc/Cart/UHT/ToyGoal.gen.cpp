// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/ToyGoal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToyGoal() {}

// Begin Cross Module References
CART_API UScriptStruct* Z_Construct_UScriptStruct_FToyGoal();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin ScriptStruct FToyGoal
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToyGoal;
class UScriptStruct* FToyGoal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToyGoal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToyGoal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToyGoal, (UObject*)Z_Construct_UPackage__Script_Cart(), TEXT("ToyGoal"));
	}
	return Z_Registration_Info_UScriptStruct_ToyGoal.OuterSingleton;
}
template<> CART_API UScriptStruct* StaticStruct<FToyGoal>()
{
	return FToyGoal::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToyGoal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToyGoal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToyImage_MetaData[] = {
		{ "Category", "ToyGoal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x89\xe6\x91\x9c\xef\xbf\xbdiUI\xef\xbf\xbd\xc9\x95\\\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdj\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x89\xe6\x91\x9c\xef\xbf\xbdiUI\xef\xbf\xbd\xc9\x95\\\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdj" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToyID_MetaData[] = {
		{ "Category", "ToyGoal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe1\x8e\xaf\xef\xbf\xbd\xef\xbf\xbdID\xef\xbf\xbdi\xef\xbf\xbd""E\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\x82\xef\xbf\xbd\xef\xbf\xbd\xc9\x8f\xc6\x8d\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdj\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe1\x8e\xaf\xef\xbf\xbd\xef\xbf\xbdID\xef\xbf\xbdi\xef\xbf\xbd""E\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\x82\xef\xbf\xbd\xef\xbf\xbd\xc9\x8f\xc6\x8d\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdj" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredCount_MetaData[] = {
		{ "Category", "ToyGoal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdK\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdK\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCount_MetaData[] = {
		{ "Category", "ToyGoal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\x82\xcc\x8e\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""0\xef\xbf\xbdj\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\x82\xcc\x8e\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""0\xef\xbf\xbdj" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToyImage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ToyID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToyGoal>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToyGoal_Statics::NewProp_ToyImage = { "ToyImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToyGoal, ToyImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToyImage_MetaData), NewProp_ToyImage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToyGoal_Statics::NewProp_ToyID = { "ToyID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToyGoal, ToyID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToyID_MetaData), NewProp_ToyID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FToyGoal_Statics::NewProp_RequiredCount = { "RequiredCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToyGoal, RequiredCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredCount_MetaData), NewProp_RequiredCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FToyGoal_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToyGoal, CurrentCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCount_MetaData), NewProp_CurrentCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToyGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyGoal_Statics::NewProp_ToyImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyGoal_Statics::NewProp_ToyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyGoal_Statics::NewProp_RequiredCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyGoal_Statics::NewProp_CurrentCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToyGoal_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
	nullptr,
	&NewStructOps,
	"ToyGoal",
	Z_Construct_UScriptStruct_FToyGoal_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyGoal_Statics::PropPointers),
	sizeof(FToyGoal),
	alignof(FToyGoal),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyGoal_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToyGoal_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToyGoal()
{
	if (!Z_Registration_Info_UScriptStruct_ToyGoal.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToyGoal.InnerSingleton, Z_Construct_UScriptStruct_FToyGoal_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToyGoal.InnerSingleton;
}
// End ScriptStruct FToyGoal

// Begin Registration
struct Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_Public_ToyGoal_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToyGoal::StaticStruct, Z_Construct_UScriptStruct_FToyGoal_Statics::NewStructOps, TEXT("ToyGoal"), &Z_Registration_Info_UScriptStruct_ToyGoal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToyGoal), 2187104738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_Public_ToyGoal_h_2720214611(TEXT("/Script/Cart"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_Public_ToyGoal_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_Public_ToyGoal_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
