// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/ToyGoalListWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToyGoalListWidget() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_AToyGoalManager_NoRegister();
CART_API UClass* Z_Construct_UClass_UToyGoalEntryWidget_NoRegister();
CART_API UClass* Z_Construct_UClass_UToyGoalListWidget();
CART_API UClass* Z_Construct_UClass_UToyGoalListWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class UToyGoalListWidget Function InitializeFromManager
struct Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics
{
	struct ToyGoalListWidget_eventInitializeFromManager_Parms
	{
		AToyGoalManager* Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToyGoalListWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToyGoalListWidget_eventInitializeFromManager_Parms, Manager), Z_Construct_UClass_AToyGoalManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToyGoalListWidget, nullptr, "InitializeFromManager", nullptr, nullptr, Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::ToyGoalListWidget_eventInitializeFromManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::ToyGoalListWidget_eventInitializeFromManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToyGoalListWidget::execInitializeFromManager)
{
	P_GET_OBJECT(AToyGoalManager,Z_Param_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromManager(Z_Param_Manager);
	P_NATIVE_END;
}
// End Class UToyGoalListWidget Function InitializeFromManager

// Begin Class UToyGoalListWidget Function RefreshDisplay
struct Z_Construct_UFunction_UToyGoalListWidget_RefreshDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToyGoalListWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToyGoalListWidget_RefreshDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToyGoalListWidget, nullptr, "RefreshDisplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToyGoalListWidget_RefreshDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToyGoalListWidget_RefreshDisplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UToyGoalListWidget_RefreshDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToyGoalListWidget_RefreshDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToyGoalListWidget::execRefreshDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshDisplay();
	P_NATIVE_END;
}
// End Class UToyGoalListWidget Function RefreshDisplay

// Begin Class UToyGoalListWidget
void UToyGoalListWidget::StaticRegisterNativesUToyGoalListWidget()
{
	UClass* Class = UToyGoalListWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeFromManager", &UToyGoalListWidget::execInitializeFromManager },
		{ "RefreshDisplay", &UToyGoalListWidget::execRefreshDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToyGoalListWidget);
UClass* Z_Construct_UClass_UToyGoalListWidget_NoRegister()
{
	return UToyGoalListWidget::StaticClass();
}
struct Z_Construct_UClass_UToyGoalListWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ToyGoalListWidget.h" },
		{ "ModuleRelativePath", "Public/ToyGoalListWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalListBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ToyGoalListWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalEntryWidgetClass_MetaData[] = {
		{ "Category", "Goal" },
		{ "ModuleRelativePath", "Public/ToyGoalListWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToyGoalListWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalListBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoalEntryWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToyGoalListWidget_InitializeFromManager, "InitializeFromManager" }, // 2113572739
		{ &Z_Construct_UFunction_UToyGoalListWidget_RefreshDisplay, "RefreshDisplay" }, // 2486420730
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToyGoalListWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToyGoalListWidget_Statics::NewProp_GoalListBox = { "GoalListBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToyGoalListWidget, GoalListBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalListBox_MetaData), NewProp_GoalListBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UToyGoalListWidget_Statics::NewProp_GoalEntryWidgetClass = { "GoalEntryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToyGoalListWidget, GoalEntryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UToyGoalEntryWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalEntryWidgetClass_MetaData), NewProp_GoalEntryWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToyGoalListWidget_Statics::NewProp_GoalManager = { "GoalManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToyGoalListWidget, GoalManager), Z_Construct_UClass_AToyGoalManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalManager_MetaData), NewProp_GoalManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToyGoalListWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToyGoalListWidget_Statics::NewProp_GoalListBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToyGoalListWidget_Statics::NewProp_GoalEntryWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToyGoalListWidget_Statics::NewProp_GoalManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToyGoalListWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToyGoalListWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToyGoalListWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToyGoalListWidget_Statics::ClassParams = {
	&UToyGoalListWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UToyGoalListWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UToyGoalListWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToyGoalListWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UToyGoalListWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToyGoalListWidget()
{
	if (!Z_Registration_Info_UClass_UToyGoalListWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToyGoalListWidget.OuterSingleton, Z_Construct_UClass_UToyGoalListWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToyGoalListWidget.OuterSingleton;
}
template<> CART_API UClass* StaticClass<UToyGoalListWidget>()
{
	return UToyGoalListWidget::StaticClass();
}
UToyGoalListWidget::UToyGoalListWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToyGoalListWidget);
UToyGoalListWidget::~UToyGoalListWidget() {}
// End Class UToyGoalListWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_Public_ToyGoalListWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToyGoalListWidget, UToyGoalListWidget::StaticClass, TEXT("UToyGoalListWidget"), &Z_Registration_Info_UClass_UToyGoalListWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToyGoalListWidget), 341885878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_Public_ToyGoalListWidget_h_2206890033(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_Public_ToyGoalListWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2cart_Cart_Source_Cart_Public_ToyGoalListWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
