// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintColorPicker/Public/ColorPicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorPicker() {}

// Begin Cross Module References
BLUEPRINTCOLORPICKER_API UClass* Z_Construct_UClass_UColorPicker();
BLUEPRINTCOLORPICKER_API UClass* Z_Construct_UClass_UColorPicker_NoRegister();
BLUEPRINTCOLORPICKER_API UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature();
BLUEPRINTCOLORPICKER_API UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature();
BLUEPRINTCOLORPICKER_API UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_BlueprintColorPicker();
// End Cross Module References

// Begin Delegate FOnColorChanged
struct Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics
{
	struct _Script_BlueprintColorPicker_eventOnColorChanged_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate declarations are placed outside of the UCLASS body.\n" },
#endif
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate declarations are placed outside of the UCLASS body." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintColorPicker_eventOnColorChanged_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintColorPicker, nullptr, "OnColorChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::_Script_BlueprintColorPicker_eventOnColorChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::_Script_BlueprintColorPicker_eventOnColorChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnColorChanged, FLinearColor const& NewColor)
{
	struct _Script_BlueprintColorPicker_eventOnColorChanged_Parms
	{
		FLinearColor NewColor;
	};
	_Script_BlueprintColorPicker_eventOnColorChanged_Parms Parms;
	Parms.NewColor=NewColor;
	OnColorChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnColorChanged

// Begin Delegate FOnOkButtonClicked
struct Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintColorPicker, nullptr, "OnOkButtonClicked__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOkButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnOkButtonClicked)
{
	OnOkButtonClicked.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnOkButtonClicked

// Begin Delegate FOnCancelButtonClicked
struct Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintColorPicker, nullptr, "OnCancelButtonClicked__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCancelButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnCancelButtonClicked)
{
	OnCancelButtonClicked.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCancelButtonClicked

// Begin Class UColorPicker Function SetColor
struct Z_Construct_UFunction_UColorPicker_SetColor_Statics
{
	struct ColorPicker_eventSetColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Color Picker|Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the current color of the color picker widget directly and updates the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current color of the color picker widget directly and updates the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorPicker_SetColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ColorPicker_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorPicker_SetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorPicker_SetColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorPicker_SetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorPicker_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorPicker, nullptr, "SetColor", nullptr, nullptr, Z_Construct_UFunction_UColorPicker_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorPicker_SetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UColorPicker_SetColor_Statics::ColorPicker_eventSetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorPicker_SetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UColorPicker_SetColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UColorPicker_SetColor_Statics::ColorPicker_eventSetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UColorPicker_SetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorPicker_SetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UColorPicker::execSetColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UColorPicker Function SetColor

// Begin Class UColorPicker
void UColorPicker::StaticRegisterNativesUColorPicker()
{
	UClass* Class = UColorPicker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetColor", &UColorPicker::execSetColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorPicker);
UClass* Z_Construct_UClass_UColorPicker_NoRegister()
{
	return UColorPicker::StaticClass();
}
struct Z_Construct_UClass_UColorPicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ColorPicker.h" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[] = {
		{ "Category", "Blueprint Color Picker|Events" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOkButtonClicked_MetaData[] = {
		{ "Category", "Blueprint Color Picker|Events" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelButtonClicked_MetaData[] = {
		{ "Category", "Blueprint Color Picker|Events" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialColor_MetaData[] = {
		{ "Category", "Blueprint Color Picker|Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The initial color of the picker. This is used as the reset color on cancel. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The initial color of the picker. This is used as the reset color on cancel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Blueprint Color Picker|Appearance" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInline_MetaData[] = {
		{ "Category", "Blueprint Color Picker|Behavior" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAlpha_MetaData[] = {
		{ "Category", "Blueprint Color Picker|Behavior" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForContextMenu_MetaData[] = {
		{ "Category", "Blueprint Color Picker|Behavior" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ColorPicker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOkButtonClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelButtonClicked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static void NewProp_bShowInline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInline;
	static void NewProp_bUseAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAlpha;
	static void NewProp_bForContextMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForContextMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorPicker_SetColor, "SetColor" }, // 3370264866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorPicker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorPicker_Statics::NewProp_OnColorChanged = { "OnColorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorPicker, OnColorChanged), Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnColorChanged_MetaData), NewProp_OnColorChanged_MetaData) }; // 1501657400
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorPicker_Statics::NewProp_OnOkButtonClicked = { "OnOkButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorPicker, OnOkButtonClicked), Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOkButtonClicked_MetaData), NewProp_OnOkButtonClicked_MetaData) }; // 3118085951
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorPicker_Statics::NewProp_OnCancelButtonClicked = { "OnCancelButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorPicker, OnCancelButtonClicked), Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelButtonClicked_MetaData), NewProp_OnCancelButtonClicked_MetaData) }; // 2438993042
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorPicker_Statics::NewProp_InitialColor = { "InitialColor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorPicker, InitialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialColor_MetaData), NewProp_InitialColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorPicker_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorPicker, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
void Z_Construct_UClass_UColorPicker_Statics::NewProp_bShowInline_SetBit(void* Obj)
{
	((UColorPicker*)Obj)->bShowInline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UColorPicker_Statics::NewProp_bShowInline = { "bShowInline", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UColorPicker), &Z_Construct_UClass_UColorPicker_Statics::NewProp_bShowInline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInline_MetaData), NewProp_bShowInline_MetaData) };
void Z_Construct_UClass_UColorPicker_Statics::NewProp_bUseAlpha_SetBit(void* Obj)
{
	((UColorPicker*)Obj)->bUseAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UColorPicker_Statics::NewProp_bUseAlpha = { "bUseAlpha", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UColorPicker), &Z_Construct_UClass_UColorPicker_Statics::NewProp_bUseAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAlpha_MetaData), NewProp_bUseAlpha_MetaData) };
void Z_Construct_UClass_UColorPicker_Statics::NewProp_bForContextMenu_SetBit(void* Obj)
{
	((UColorPicker*)Obj)->bForContextMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UColorPicker_Statics::NewProp_bForContextMenu = { "bForContextMenu", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UColorPicker), &Z_Construct_UClass_UColorPicker_Statics::NewProp_bForContextMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForContextMenu_MetaData), NewProp_bForContextMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorPicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorPicker_Statics::NewProp_OnColorChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorPicker_Statics::NewProp_OnOkButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorPicker_Statics::NewProp_OnCancelButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorPicker_Statics::NewProp_InitialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorPicker_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorPicker_Statics::NewProp_bShowInline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorPicker_Statics::NewProp_bUseAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorPicker_Statics::NewProp_bForContextMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorPicker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UColorPicker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintColorPicker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorPicker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorPicker_Statics::ClassParams = {
	&UColorPicker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UColorPicker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UColorPicker_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UColorPicker_Statics::Class_MetaDataParams), Z_Construct_UClass_UColorPicker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UColorPicker()
{
	if (!Z_Registration_Info_UClass_UColorPicker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorPicker.OuterSingleton, Z_Construct_UClass_UColorPicker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UColorPicker.OuterSingleton;
}
template<> BLUEPRINTCOLORPICKER_API UClass* StaticClass<UColorPicker>()
{
	return UColorPicker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UColorPicker);
UColorPicker::~UColorPicker() {}
// End Class UColorPicker

// Begin Registration
struct Z_CompiledInDeferFile_FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UColorPicker, UColorPicker::StaticClass, TEXT("UColorPicker"), &Z_Registration_Info_UClass_UColorPicker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorPicker), 237825457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_2822283785(TEXT("/Script/BlueprintColorPicker"),
	Z_CompiledInDeferFile_FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
