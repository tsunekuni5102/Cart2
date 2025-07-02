// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/ToyGoalManager.h"
#include "Cart/Public/ToyGoal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToyGoalManager() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_AToyGoalManager();
CART_API UClass* Z_Construct_UClass_AToyGoalManager_NoRegister();
CART_API UFunction* Z_Construct_UDelegateFunction_Cart_OnGoalsUpdated__DelegateSignature();
CART_API UScriptStruct* Z_Construct_UScriptStruct_FToyGoal();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Delegate FOnGoalsUpdated
struct Z_Construct_UDelegateFunction_Cart_OnGoalsUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToyGoalManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Cart_OnGoalsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Cart, nullptr, "OnGoalsUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cart_OnGoalsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Cart_OnGoalsUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Cart_OnGoalsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Cart_OnGoalsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGoalsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnGoalsUpdated)
{
	OnGoalsUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGoalsUpdated

// Begin Class AToyGoalManager Function AddToy
struct Z_Construct_UFunction_AToyGoalManager_AddToy_Statics
{
	struct ToyGoalManager_eventAddToy_Parms
	{
		FName ToyID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Toy Goal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\x89\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\x82\xef\xbf\xbd\xef\xbf\xbd\xc9\x8c\xc4\x82\xd4\x8a\xd6\x90\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyGoalManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\x89\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\x82\xef\xbf\xbd\xef\xbf\xbd\xc9\x8c\xc4\x82\xd4\x8a\xd6\x90\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ToyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::NewProp_ToyID = { "ToyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToyGoalManager_eventAddToy_Parms, ToyID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::NewProp_ToyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToyGoalManager, nullptr, "AddToy", nullptr, nullptr, Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::ToyGoalManager_eventAddToy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::ToyGoalManager_eventAddToy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AToyGoalManager_AddToy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToyGoalManager_AddToy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AToyGoalManager::execAddToy)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ToyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToy(Z_Param_ToyID);
	P_NATIVE_END;
}
// End Class AToyGoalManager Function AddToy

// Begin Class AToyGoalManager Function IsAllGoalsCleared
struct Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics
{
	struct ToyGoalManager_eventIsAllGoalsCleared_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Toy Goal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdS\xef\xbf\xbd\xc4\x82\xcc\x96\xda\x95W\xef\xbf\xbd\xef\xbf\xbd""B\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\x82\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyGoalManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdS\xef\xbf\xbd\xc4\x82\xcc\x96\xda\x95W\xef\xbf\xbd\xef\xbf\xbd""B\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\x82\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ToyGoalManager_eventIsAllGoalsCleared_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToyGoalManager_eventIsAllGoalsCleared_Parms), &Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToyGoalManager, nullptr, "IsAllGoalsCleared", nullptr, nullptr, Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::PropPointers), sizeof(Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::ToyGoalManager_eventIsAllGoalsCleared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::ToyGoalManager_eventIsAllGoalsCleared_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AToyGoalManager::execIsAllGoalsCleared)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAllGoalsCleared();
	P_NATIVE_END;
}
// End Class AToyGoalManager Function IsAllGoalsCleared

// Begin Class AToyGoalManager
void AToyGoalManager::StaticRegisterNativesAToyGoalManager()
{
	UClass* Class = AToyGoalManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToy", &AToyGoalManager::execAddToy },
		{ "IsAllGoalsCleared", &AToyGoalManager::execIsAllGoalsCleared },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToyGoalManager);
UClass* Z_Construct_UClass_AToyGoalManager_NoRegister()
{
	return AToyGoalManager::StaticClass();
}
struct Z_Construct_UClass_AToyGoalManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToyGoalManager.h" },
		{ "ModuleRelativePath", "Public/ToyGoalManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToyGoals_MetaData[] = {
		{ "Category", "Toy Goal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdG\xef\xbf\xbd""f\xef\xbf\xbd""B\xef\xbf\xbd^\xef\xbf\xbd\xc5\x90\xdd\x92\xe8\x82\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xda\x95W\n" },
#endif
		{ "ModuleRelativePath", "Public/ToyGoalManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdG\xef\xbf\xbd""f\xef\xbf\xbd""B\xef\xbf\xbd^\xef\xbf\xbd\xc5\x90\xdd\x92\xe8\x82\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xda\x95W" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCleared_MetaData[] = {
		{ "Category", "Goal" },
		{ "ModuleRelativePath", "Public/ToyGoalManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGoalsUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToyGoalManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToyGoals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToyGoals;
	static void NewProp_bIsCleared_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCleared;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGoalsUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AToyGoalManager_AddToy, "AddToy" }, // 3395673634
		{ &Z_Construct_UFunction_AToyGoalManager_IsAllGoalsCleared, "IsAllGoalsCleared" }, // 2788242868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToyGoalManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AToyGoalManager_Statics::NewProp_ToyGoals_Inner = { "ToyGoals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FToyGoal, METADATA_PARAMS(0, nullptr) }; // 2187104738
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AToyGoalManager_Statics::NewProp_ToyGoals = { "ToyGoals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToyGoalManager, ToyGoals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToyGoals_MetaData), NewProp_ToyGoals_MetaData) }; // 2187104738
void Z_Construct_UClass_AToyGoalManager_Statics::NewProp_bIsCleared_SetBit(void* Obj)
{
	((AToyGoalManager*)Obj)->bIsCleared = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AToyGoalManager_Statics::NewProp_bIsCleared = { "bIsCleared", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AToyGoalManager), &Z_Construct_UClass_AToyGoalManager_Statics::NewProp_bIsCleared_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCleared_MetaData), NewProp_bIsCleared_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AToyGoalManager_Statics::NewProp_OnGoalsUpdated = { "OnGoalsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToyGoalManager, OnGoalsUpdated), Z_Construct_UDelegateFunction_Cart_OnGoalsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGoalsUpdated_MetaData), NewProp_OnGoalsUpdated_MetaData) }; // 4213662195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToyGoalManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToyGoalManager_Statics::NewProp_ToyGoals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToyGoalManager_Statics::NewProp_ToyGoals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToyGoalManager_Statics::NewProp_bIsCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToyGoalManager_Statics::NewProp_OnGoalsUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToyGoalManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AToyGoalManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToyGoalManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToyGoalManager_Statics::ClassParams = {
	&AToyGoalManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AToyGoalManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AToyGoalManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToyGoalManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AToyGoalManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AToyGoalManager()
{
	if (!Z_Registration_Info_UClass_AToyGoalManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToyGoalManager.OuterSingleton, Z_Construct_UClass_AToyGoalManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToyGoalManager.OuterSingleton;
}
template<> CART_API UClass* StaticClass<AToyGoalManager>()
{
	return AToyGoalManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AToyGoalManager);
AToyGoalManager::~AToyGoalManager() {}
// End Class AToyGoalManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToyGoalManager, AToyGoalManager::StaticClass, TEXT("AToyGoalManager"), &Z_Registration_Info_UClass_AToyGoalManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToyGoalManager), 3433489144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_1469975164(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_ToyGoalManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
