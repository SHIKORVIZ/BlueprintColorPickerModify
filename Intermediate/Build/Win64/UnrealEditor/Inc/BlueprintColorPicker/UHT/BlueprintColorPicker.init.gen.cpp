// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintColorPicker_init() {}
	BLUEPRINTCOLORPICKER_API UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature();
	BLUEPRINTCOLORPICKER_API UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature();
	BLUEPRINTCOLORPICKER_API UFunction* Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BlueprintColorPicker;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BlueprintColorPicker()
	{
		if (!Z_Registration_Info_UPackage__Script_BlueprintColorPicker.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintColorPicker_OnCancelButtonClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintColorPicker_OnColorChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintColorPicker_OnOkButtonClicked__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlueprintColorPicker",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB47D40F4,
				0x379FC682,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BlueprintColorPicker.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BlueprintColorPicker.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BlueprintColorPicker(Z_Construct_UPackage__Script_BlueprintColorPicker, TEXT("/Script/BlueprintColorPicker"), Z_Registration_Info_UPackage__Script_BlueprintColorPicker, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB47D40F4, 0x379FC682));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
