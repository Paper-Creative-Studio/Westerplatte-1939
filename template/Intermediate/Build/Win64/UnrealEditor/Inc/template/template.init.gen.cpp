// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetemplate_init() {}
	TEMPLATE_API UFunction* Z_Construct_UDelegateFunction_template_OnPickUp__DelegateSignature();
	TEMPLATE_API UFunction* Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_template;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_template()
	{
		if (!Z_Registration_Info_UPackage__Script_template.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_template_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/template",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9D4447AB,
				0xB3CF9401,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_template.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_template.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_template(Z_Construct_UPackage__Script_template, TEXT("/Script/template"), Z_Registration_Info_UPackage__Script_template, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9D4447AB, 0xB3CF9401));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
