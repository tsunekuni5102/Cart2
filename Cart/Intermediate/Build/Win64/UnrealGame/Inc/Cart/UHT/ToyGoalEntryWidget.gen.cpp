// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/ToyGoalEntryWidget.h"
#include "Cart/Public/ToyGoal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToyGoalEntryWidget() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_UToyGoalEntryWidget();
CART_API UClass* Z_Construct_UClass_UToyGoalEntryWidget_NoRegister();
CART_API UScriptStruct* Z_Construct_UScriptStruct_FToyGoal();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class UToyGoalEntryWidget Function Setup
struct Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics
{
	struct ToyGoalEntryWidget_eventSetup_Parms
	{
		FToyGoal GoalData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToyGoalEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::NewProp_GoalData = { "GoalData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToyGoalEntryWidget_eventSetup_Parms, GoalData), Z_Construct_UScriptStruct_FToyGoal, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalData_MetaData), NewProp_GoalData_MetaData) }; // 2187104738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::NewProp_GoalData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToyGoalEntryWidget, nullptr, "Setup", nullptr, nullptr, Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::ToyGoalEntryWidget_eventSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::ToyGoalEntryWidget_eventSetup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToyGoalEntryWidget_Setup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToyGoalEntryWidget_Setup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToyGoalEntryWidget::execSetup)
{
	P_GET_STRUCT_REF(FToyGoal,Z_Param_Out_GoalData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Setup(Z_Param_Out_GoalData);
	P_NATIVE_END;
}
// End Class UToyGoalEntryWidget Function Setup

// Begin Class UToyGoalEntryWidget
void UToyGoalEntryWidget::StaticRegisterNativesUToyGoalEntryWidget()
{
	UClass* Class = UToyGoalEntryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Setup", &UToyGoalEntryWidget::execSetup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToyGoalEntryWidget);
UClass* Z_Construct_UClass_UToyGoalEntryWidget_NoRegister()
{
	return UToyGoalEntryWidget::StaticClass();
}
struct Z_Construct_UClass_UToyGoalEntryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ToyGoalEntryWidget.h" },
		{ "ModuleRelativePath", "Public/ToyGoalEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBox_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget))\n//class UTextBlock* CountText;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ToyGoalEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\nclass UTextBlock* CountText;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToyGoalEntryWidget_Setup, "Setup" }, // 1469155940
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToyGoalEntryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToyGoalEntryWidget_Statics::NewProp_RootBox = { "RootBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToyGoalEntryWidget, RootBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBox_MetaData), NewProp_RootBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToyGoalEntryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToyGoalEntryWidget_Statics::NewProp_RootBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToyGoalEntryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToyGoalEntryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToyGoalEntryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToyGoalEntryWidget_Statics::ClassParams = {
	&UToyGoalEntryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UToyGoalEntryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UToyGoalEntryWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToyGoalEntryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UToyGoalEntryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToyGoalEntryWidget()
{
	if (!Z_Registration_Info_UClass_UToyGoalEntryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToyGoalEntryWidget.OuterSingleton, Z_Construct_UClass_UToyGoalEntryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToyGoalEntryWidget.OuterSingleton;
}
template<> CART_API UClass* StaticClass<UToyGoalEntryWidget>()
{
	return UToyGoalEntryWidget::StaticClass();
}
UToyGoalEntryWidget::UToyGoalEntryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToyGoalEntryWidget);
UToyGoalEntryWidget::~UToyGoalEntryWidget() {}
// End Class UToyGoalEntryWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToyGoalEntryWidget, UToyGoalEntryWidget::StaticClass, TEXT("UToyGoalEntryWidget"), &Z_Registration_Info_UClass_UToyGoalEntryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToyGoalEntryWidget), 4205059223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_1711762351(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cart2_Cart_Source_Cart_Public_ToyGoalEntryWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
