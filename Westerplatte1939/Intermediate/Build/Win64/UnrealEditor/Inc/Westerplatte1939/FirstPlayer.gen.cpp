// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Westerplatte1939/FirstPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPlayer() {}
// Cross Module References
	WESTERPLATTE1939_API UClass* Z_Construct_UClass_AFirstPlayer_NoRegister();
	WESTERPLATTE1939_API UClass* Z_Construct_UClass_AFirstPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Westerplatte1939();
// End Cross Module References
	void AFirstPlayer::StaticRegisterNativesAFirstPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPlayer);
	UClass* Z_Construct_UClass_AFirstPlayer_NoRegister()
	{
		return AFirstPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Westerplatte1939,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPlayer.h" },
		{ "ModuleRelativePath", "FirstPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPlayer_Statics::ClassParams = {
		&AFirstPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFirstPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPlayer()
	{
		if (!Z_Registration_Info_UClass_AFirstPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPlayer.OuterSingleton, Z_Construct_UClass_AFirstPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPlayer.OuterSingleton;
	}
	template<> WESTERPLATTE1939_API UClass* StaticClass<AFirstPlayer>()
	{
		return AFirstPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPlayer);
	struct Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPlayer, AFirstPlayer::StaticClass, TEXT("AFirstPlayer"), &Z_Registration_Info_UClass_AFirstPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPlayer), 161380566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayer_h_164967524(TEXT("/Script/Westerplatte1939"),
		Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_FirstPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
