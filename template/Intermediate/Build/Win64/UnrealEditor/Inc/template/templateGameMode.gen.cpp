// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "template/templateGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetemplateGameMode() {}
// Cross Module References
	TEMPLATE_API UClass* Z_Construct_UClass_AtemplateGameMode_NoRegister();
	TEMPLATE_API UClass* Z_Construct_UClass_AtemplateGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_template();
// End Cross Module References
	void AtemplateGameMode::StaticRegisterNativesAtemplateGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AtemplateGameMode);
	UClass* Z_Construct_UClass_AtemplateGameMode_NoRegister()
	{
		return AtemplateGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AtemplateGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtemplateGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_template,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtemplateGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "templateGameMode.h" },
		{ "ModuleRelativePath", "templateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtemplateGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtemplateGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AtemplateGameMode_Statics::ClassParams = {
		&AtemplateGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AtemplateGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AtemplateGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AtemplateGameMode()
	{
		if (!Z_Registration_Info_UClass_AtemplateGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AtemplateGameMode.OuterSingleton, Z_Construct_UClass_AtemplateGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AtemplateGameMode.OuterSingleton;
	}
	template<> TEMPLATE_API UClass* StaticClass<AtemplateGameMode>()
	{
		return AtemplateGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtemplateGameMode);
	struct Z_CompiledInDeferFile_FID_template_Source_template_templateGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_template_Source_template_templateGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AtemplateGameMode, AtemplateGameMode::StaticClass, TEXT("AtemplateGameMode"), &Z_Registration_Info_UClass_AtemplateGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AtemplateGameMode), 2209939541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_template_Source_template_templateGameMode_h_507359610(TEXT("/Script/template"),
		Z_CompiledInDeferFile_FID_template_Source_template_templateGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_template_Source_template_templateGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
