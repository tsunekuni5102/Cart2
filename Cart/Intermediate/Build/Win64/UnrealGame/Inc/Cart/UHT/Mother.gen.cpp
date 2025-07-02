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
CART_API UFunction* Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Delegate FOnScoreChanged
struct Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics
{
	struct _Script_Cart_eventOnScoreChanged_Parms
	{
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xcf\x8dX\xef\xbf\xbd""C\xef\xbf\xbdx\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xcc\x90\xe9\x8c\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Mother.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xcf\x8dX\xef\xbf\xbd""C\xef\xbf\xbdx\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xcc\x90\xe9\x8c\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Cart_eventOnScoreChanged_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Cart, nullptr, "OnScoreChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::_Script_Cart_eventOnScoreChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::_Script_Cart_eventOnScoreChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScoreChanged_DelegateWrapper(const FMulticastScriptDelegate& OnScoreChanged, int32 NewScore)
{
	struct _Script_Cart_eventOnScoreChanged_Parms
	{
		int32 NewScore;
	};
	_Script_Cart_eventOnScoreChanged_Parms Parms;
	Parms.NewScore=NewScore;
	OnScoreChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnScoreChanged

// Begin Class AMother Function AddScore
struct Z_Construct_UFunction_AMother_AddScore_Statics
{
	struct Mother_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdZ\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\x82\xd1\x8fo\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/Mother.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdZ\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\x82\xd1\x8fo\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMother_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Mother_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMother_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMother_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMother_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMother_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMother, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_AMother_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMother_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMother_AddScore_Statics::Mother_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMother_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMother_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMother_AddScore_Statics::Mother_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMother_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMother_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMother::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class AMother Function AddScore

// Begin Class AMother Function GetScore
struct Z_Construct_UFunction_AMother_GetScore_Statics
{
	struct Mother_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\x93\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\x82\xd1\x8fo\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/Mother.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\x93\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\x82\xd1\x8fo\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMother_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Mother_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMother_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMother_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMother_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMother_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMother, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AMother_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMother_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMother_GetScore_Statics::Mother_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMother_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMother_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMother_GetScore_Statics::Mother_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMother_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMother_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMother::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class AMother Function GetScore

// Begin Class AMother
void AMother::StaticRegisterNativesAMother()
{
	UClass* Class = AMother::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &AMother::execAddScore },
		{ "GetScore", &AMother::execGetScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\x82\xcc\x83X\xef\xbf\xbdR\xef\xbf\xbd""A(\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\x82\xd1\x8fo\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/Mother.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\x82\xcc\x83X\xef\xbf\xbdR\xef\xbf\xbd""A(\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\x82\xd1\x8fo\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScoreChanged_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xcf\x8dX\xef\xbf\xbd""C\xef\xbf\xbdx\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg(\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdh\xef\xbf\xbd\xc2\x94\\)\n" },
#endif
		{ "ModuleRelativePath", "Public/Mother.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdX\xef\xbf\xbdR\xef\xbf\xbd""A\xef\xbf\xbd\xcf\x8dX\xef\xbf\xbd""C\xef\xbf\xbdx\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg(\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdh\xef\xbf\xbd\xc2\x94\\)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMother_AddScore, "AddScore" }, // 1520797321
		{ &Z_Construct_UFunction_AMother_GetScore, "GetScore" }, // 2436324475
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMother>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMother_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMother, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMother_Statics::NewProp_OnScoreChanged = { "OnScoreChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMother, OnScoreChanged), Z_Construct_UDelegateFunction_Cart_OnScoreChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScoreChanged_MetaData), NewProp_OnScoreChanged_MetaData) }; // 316532255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMother_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMother_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMother_Statics::NewProp_OnScoreChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMother_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AMother_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMother_Statics::PropPointers),
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
		{ Z_Construct_UClass_AMother, AMother::StaticClass, TEXT("AMother"), &Z_Registration_Info_UClass_AMother, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMother), 1015868100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_Mother_h_582593615(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_Mother_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_Mother_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
