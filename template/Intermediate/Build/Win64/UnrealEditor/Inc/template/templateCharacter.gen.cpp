// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "template/templateCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetemplateCharacter() {}
// Cross Module References
	TEMPLATE_API UFunction* Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_template();
	TEMPLATE_API UClass* Z_Construct_UClass_AtemplateCharacter_NoRegister();
	TEMPLATE_API UClass* Z_Construct_UClass_AtemplateCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "templateCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_template, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AtemplateCharacter::StaticRegisterNativesAtemplateCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AtemplateCharacter);
	UClass* Z_Construct_UClass_AtemplateCharacter_NoRegister()
	{
		return AtemplateCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AtemplateCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtemplateCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_template,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtemplateCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "templateCharacter.h" },
		{ "ModuleRelativePath", "templateCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "templateCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtemplateCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "templateCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtemplateCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "templateCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtemplateCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "templateCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtemplateCharacter, OnUseItem), Z_Construct_UDelegateFunction_template_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 732291506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AtemplateCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtemplateCharacter_Statics::NewProp_OnUseItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtemplateCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtemplateCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AtemplateCharacter_Statics::ClassParams = {
		&AtemplateCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AtemplateCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AtemplateCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AtemplateCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AtemplateCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AtemplateCharacter()
	{
		if (!Z_Registration_Info_UClass_AtemplateCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AtemplateCharacter.OuterSingleton, Z_Construct_UClass_AtemplateCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AtemplateCharacter.OuterSingleton;
	}
	template<> TEMPLATE_API UClass* StaticClass<AtemplateCharacter>()
	{
		return AtemplateCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtemplateCharacter);
	struct Z_CompiledInDeferFile_FID_template_Source_template_templateCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_template_Source_template_templateCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AtemplateCharacter, AtemplateCharacter::StaticClass, TEXT("AtemplateCharacter"), &Z_Registration_Info_UClass_AtemplateCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AtemplateCharacter), 496364232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_template_Source_template_templateCharacter_h_1386828654(TEXT("/Script/template"),
		Z_CompiledInDeferFile_FID_template_Source_template_templateCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_template_Source_template_templateCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS