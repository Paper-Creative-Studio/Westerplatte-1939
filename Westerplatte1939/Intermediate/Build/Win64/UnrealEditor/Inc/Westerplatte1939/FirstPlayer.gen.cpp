// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Westerplatte1939/firstplayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefirstplayer() {}
// Cross Module References
	WESTERPLATTE1939_API UClass* Z_Construct_UClass_Afirstplayer_NoRegister();
	WESTERPLATTE1939_API UClass* Z_Construct_UClass_Afirstplayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Westerplatte1939();
// End Cross Module References
	void Afirstplayer::StaticRegisterNativesAfirstplayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Afirstplayer);
	UClass* Z_Construct_UClass_Afirstplayer_NoRegister()
	{
		return Afirstplayer::StaticClass();
	}
	struct Z_Construct_UClass_Afirstplayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afirstplayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Westerplatte1939,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afirstplayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "firstplayer.h" },
		{ "ModuleRelativePath", "firstplayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afirstplayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afirstplayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Afirstplayer_Statics::ClassParams = {
		&Afirstplayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Afirstplayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Afirstplayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afirstplayer()
	{
		if (!Z_Registration_Info_UClass_Afirstplayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Afirstplayer.OuterSingleton, Z_Construct_UClass_Afirstplayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Afirstplayer.OuterSingleton;
	}
	template<> WESTERPLATTE1939_API UClass* StaticClass<Afirstplayer>()
	{
		return Afirstplayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afirstplayer);
	struct Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_firstplayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_firstplayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Afirstplayer, Afirstplayer::StaticClass, TEXT("Afirstplayer"), &Z_Registration_Info_UClass_Afirstplayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Afirstplayer), 1308042463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_firstplayer_h_1497625390(TEXT("/Script/Westerplatte1939"),
		Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_firstplayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_firstplayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
