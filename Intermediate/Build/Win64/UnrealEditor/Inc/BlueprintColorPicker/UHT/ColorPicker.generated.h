// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ColorPicker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef BLUEPRINTCOLORPICKER_ColorPicker_generated_h
#error "ColorPicker.generated.h already included, missing '#pragma once' in ColorPicker.h"
#endif
#define BLUEPRINTCOLORPICKER_ColorPicker_generated_h

#define FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_10_DELEGATE \
BLUEPRINTCOLORPICKER_API void FOnColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnColorChanged, FLinearColor const& NewColor);


#define FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_11_DELEGATE \
BLUEPRINTCOLORPICKER_API void FOnOkButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnOkButtonClicked);


#define FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_12_DELEGATE \
BLUEPRINTCOLORPICKER_API void FOnCancelButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnCancelButtonClicked);


#define FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetColor);


#define FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorPicker(); \
	friend struct Z_Construct_UClass_UColorPicker_Statics; \
public: \
	DECLARE_CLASS(UColorPicker, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintColorPicker"), NO_API) \
	DECLARE_SERIALIZER(UColorPicker)


#define FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UColorPicker(UColorPicker&&); \
	UColorPicker(const UColorPicker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorPicker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorPicker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorPicker) \
	NO_API virtual ~UColorPicker();


#define FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_14_PROLOG
#define FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_17_INCLASS_NO_PURE_DECLS \
	FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTCOLORPICKER_API UClass* StaticClass<class UColorPicker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActiveProject_ShikorPlugin_Plugins_BlueprintColorPickerModify_Source_BlueprintColorPicker_Public_ColorPicker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
