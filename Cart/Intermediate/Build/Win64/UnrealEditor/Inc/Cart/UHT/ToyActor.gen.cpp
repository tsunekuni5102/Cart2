// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/ToyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToyActor() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_AToyActor();
CART_API UClass* Z_Construct_UClass_AToyActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class AToyActor Function GetScore
struct Z_Construct_UFunction_AToyActor_GetScore_Statics
{
	struct ToyActor_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Toy Prioerties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\x93\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\x93\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AToyActor_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToyActor_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToyActor_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToyActor_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AToyActor_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToyActor_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToyActor, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AToyActor_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToyActor_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AToyActor_GetScore_Statics::ToyActor_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToyActor_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToyActor_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AToyActor_GetScore_Statics::ToyActor_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AToyActor_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToyActor_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AToyActor::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class AToyActor Function GetScore

// Begin Class AToyActor Function GetWeight
struct Z_Construct_UFunction_AToyActor_GetWeight_Statics
{
	struct ToyActor_eventGetWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Toy Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd""d\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\x93\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""d\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\x93\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AToyActor_GetWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToyActor_eventGetWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToyActor_GetWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToyActor_GetWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AToyActor_GetWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToyActor_GetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToyActor, nullptr, "GetWeight", nullptr, nullptr, Z_Construct_UFunction_AToyActor_GetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToyActor_GetWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AToyActor_GetWeight_Statics::ToyActor_eventGetWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToyActor_GetWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToyActor_GetWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AToyActor_GetWeight_Statics::ToyActor_eventGetWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AToyActor_GetWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToyActor_GetWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AToyActor::execGetWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeight();
	P_NATIVE_END;
}
// End Class AToyActor Function GetWeight

// Begin Class AToyActor
void AToyActor::StaticRegisterNativesAToyActor()
{
	UClass* Class = AToyActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScore", &AToyActor::execGetScore },
		{ "GetWeight", &AToyActor::execGetWeight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToyActor);
UClass* Z_Construct_UClass_AToyActor_NoRegister()
{
	return AToyActor::StaticClass();
}
struct Z_Construct_UClass_AToyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToyActor.h" },
		{ "ModuleRelativePath", "Public/ToyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Toy Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x8f""d\xef\xbf\xbd\xef\xbf\xbd(kg\xef\xbf\xbd\xc8\x82\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x8f""d\xef\xbf\xbd\xef\xbf\xbd(kg\xef\xbf\xbd\xc8\x82\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Toy Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x83X\xef\xbf\xbdR\xef\xbf\xbd""A(\xef\xbf\xbdQ\xef\xbf\xbd[\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x93\xef\xbf\xbd\xef\xbf\xbd_)\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x83X\xef\xbf\xbdR\xef\xbf\xbd""A(\xef\xbf\xbdQ\xef\xbf\xbd[\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x93\xef\xbf\xbd\xef\xbf\xbd_)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AToyActor_GetScore, "GetScore" }, // 3057656703
		{ &Z_Construct_UFunction_AToyActor_GetWeight, "GetWeight" }, // 4137727656
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AToyActor_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToyActor, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AToyActor_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToyActor, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToyActor_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToyActor_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AToyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToyActor_Statics::ClassParams = {
	&AToyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AToyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AToyActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AToyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AToyActor()
{
	if (!Z_Registration_Info_UClass_AToyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToyActor.OuterSingleton, Z_Construct_UClass_AToyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToyActor.OuterSingleton;
}
template<> CART_API UClass* StaticClass<AToyActor>()
{
	return AToyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AToyActor);
AToyActor::~AToyActor() {}
// End Class AToyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_ToyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToyActor, AToyActor::StaticClass, TEXT("AToyActor"), &Z_Registration_Info_UClass_AToyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToyActor), 310862242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_ToyActor_h_2125004385(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_ToyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_ToyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
