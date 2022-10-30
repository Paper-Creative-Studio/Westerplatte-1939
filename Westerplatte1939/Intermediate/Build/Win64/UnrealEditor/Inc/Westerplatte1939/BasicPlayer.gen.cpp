// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Westerplatte1939/BasicPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicPlayer() {}
// Cross Module References
	WESTERPLATTE1939_API UClass* Z_Construct_UClass_ABasicPlayer_NoRegister();
	WESTERPLATTE1939_API UClass* Z_Construct_UClass_ABasicPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Westerplatte1939();
// End Cross Module References
	void ABasicPlayer::StaticRegisterNativesABasicPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicPlayer);
	UClass* Z_Construct_UClass_ABasicPlayer_NoRegister()
	{
		return ABasicPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ABasicPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Westerplatte1939,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicPlayer.h" },
		{ "ModuleRelativePath", "BasicPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicPlayer_Statics::ClassParams = {
		&ABasicPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABasicPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicPlayer()
	{
		if (!Z_Registration_Info_UClass_ABasicPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicPlayer.OuterSingleton, Z_Construct_UClass_ABasicPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasicPlayer.OuterSingleton;
	}
	template<> WESTERPLATTE1939_API UClass* StaticClass<ABasicPlayer>()
	{
		return ABasicPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicPlayer);
	struct Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_BasicPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_BasicPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasicPlayer, ABasicPlayer::StaticClass, TEXT("ABasicPlayer"), &Z_Registration_Info_UClass_ABasicPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicPlayer), 2108551362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_BasicPlayer_h_482856430(TEXT("/Script/Westerplatte1939"),
		Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_BasicPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Westerplatte1939_Source_Westerplatte1939_BasicPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
