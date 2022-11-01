// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Westerplatte1939/FirstPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPlayerController() {}
// Cross Module References
	WESTERPLATTE1939_API UClass* Z_Construct_UClass_AFirstPlayerController_NoRegister();
	WESTERPLATTE1939_API UClass* Z_Construct_UClass_AFirstPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Westerplatte1939();
// End Cross Module References
	void AFirstPlayerController::StaticRegisterNativesAFirstPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPlayerController);
	UClass* Z_Construct_UClass_AFirstPlayerController_NoRegister()
	{
		return AFirstPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Westerplatte1939,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FirstPlayerController.h" },
		{ "ModuleRelativePath", "FirstPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPlayerController_Statics::ClassParams = {
		&AFirstPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPlayerController()
	{
		if (!Z_Registration_Info_UClass_AFirstPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPlayerController.OuterSingleton, Z_Construct_UClass_AFirstPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPlayerController.OuterSingleton;
	}
	template<> WESTERPLATTE1939_API UClass* StaticClass<AFirstPlayerController>()
	{
		return AFirstPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPlayerController);
	struct Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPlayerController, AFirstPlayerController::StaticClass, TEXT("AFirstPlayerController"), &Z_Registration_Info_UClass_AFirstPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPlayerController), 3795230439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayerController_h_4211849744(TEXT("/Script/Westerplatte1939"),
		Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
