// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart/Public/TitleMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleMenuWidget() {}

// Begin Cross Module References
CART_API UClass* Z_Construct_UClass_UTitleMenuWidget();
CART_API UClass* Z_Construct_UClass_UTitleMenuWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Cart();
// End Cross Module References

// Begin Class UTitleMenuWidget Function OnQuitClicked
struct Z_Construct_UFunction_UTitleMenuWidget_OnQuitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TitleMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleMenuWidget_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleMenuWidget, nullptr, "OnQuitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTitleMenuWidget_OnQuitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleMenuWidget_OnQuitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleMenuWidget::execOnQuitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuitClicked();
	P_NATIVE_END;
}
// End Class UTitleMenuWidget Function OnQuitClicked

// Begin Class UTitleMenuWidget Function OnStartClicked
struct Z_Construct_UFunction_UTitleMenuWidget_OnStartClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TitleMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleMenuWidget_OnStartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleMenuWidget, nullptr, "OnStartClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleMenuWidget_OnStartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleMenuWidget_OnStartClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTitleMenuWidget_OnStartClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleMenuWidget_OnStartClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleMenuWidget::execOnStartClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartClicked();
	P_NATIVE_END;
}
// End Class UTitleMenuWidget Function OnStartClicked

// Begin Class UTitleMenuWidget
void UTitleMenuWidget::StaticRegisterNativesUTitleMenuWidget()
{
	UClass* Class = UTitleMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnQuitClicked", &UTitleMenuWidget::execOnQuitClicked },
		{ "OnStartClicked", &UTitleMenuWidget::execOnStartClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTitleMenuWidget);
UClass* Z_Construct_UClass_UTitleMenuWidget_NoRegister()
{
	return UTitleMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UTitleMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TitleMenuWidget.h" },
		{ "ModuleRelativePath", "Public/TitleMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TitleMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TitleMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleMenuWidget_OnQuitClicked, "OnQuitClicked" }, // 4248787966
		{ &Z_Construct_UFunction_UTitleMenuWidget_OnStartClicked, "OnStartClicked" }, // 4007214440
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleMenuWidget_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleMenuWidget, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartButton_MetaData), NewProp_StartButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleMenuWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleMenuWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButton_MetaData), NewProp_QuitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleMenuWidget_Statics::NewProp_StartButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleMenuWidget_Statics::NewProp_QuitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTitleMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Cart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleMenuWidget_Statics::ClassParams = {
	&UTitleMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTitleMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTitleMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTitleMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTitleMenuWidget()
{
	if (!Z_Registration_Info_UClass_UTitleMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleMenuWidget.OuterSingleton, Z_Construct_UClass_UTitleMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTitleMenuWidget.OuterSingleton;
}
template<> CART_API UClass* StaticClass<UTitleMenuWidget>()
{
	return UTitleMenuWidget::StaticClass();
}
UTitleMenuWidget::UTitleMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleMenuWidget);
UTitleMenuWidget::~UTitleMenuWidget() {}
// End Class UTitleMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleMenuWidget, UTitleMenuWidget::StaticClass, TEXT("UTitleMenuWidget"), &Z_Registration_Info_UClass_UTitleMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleMenuWidget), 1024120012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleMenuWidget_h_691733474(TEXT("/Script/Cart"),
	Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GA3_Desktop_Cart_Cart_Source_Cart_Public_TitleMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
