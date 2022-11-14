// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMPLATE_templateCharacter_generated_h
#error "templateCharacter.generated.h already included, missing '#pragma once' in templateCharacter.h"
#endif
#define TEMPLATE_templateCharacter_generated_h

#define FID_template_Source_template_templateCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_template_Source_template_templateCharacter_h_23_SPARSE_DATA
#define FID_template_Source_template_templateCharacter_h_23_RPC_WRAPPERS
#define FID_template_Source_template_templateCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_template_Source_template_templateCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtemplateCharacter(); \
	friend struct Z_Construct_UClass_AtemplateCharacter_Statics; \
public: \
	DECLARE_CLASS(AtemplateCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/template"), NO_API) \
	DECLARE_SERIALIZER(AtemplateCharacter)


#define FID_template_Source_template_templateCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAtemplateCharacter(); \
	friend struct Z_Construct_UClass_AtemplateCharacter_Statics; \
public: \
	DECLARE_CLASS(AtemplateCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/template"), NO_API) \
	DECLARE_SERIALIZER(AtemplateCharacter)


#define FID_template_Source_template_templateCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtemplateCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtemplateCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtemplateCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtemplateCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtemplateCharacter(AtemplateCharacter&&); \
	NO_API AtemplateCharacter(const AtemplateCharacter&); \
public:


#define FID_template_Source_template_templateCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtemplateCharacter(AtemplateCharacter&&); \
	NO_API AtemplateCharacter(const AtemplateCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtemplateCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtemplateCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtemplateCharacter)


#define FID_template_Source_template_templateCharacter_h_20_PROLOG
#define FID_template_Source_template_templateCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_template_Source_template_templateCharacter_h_23_SPARSE_DATA \
	FID_template_Source_template_templateCharacter_h_23_RPC_WRAPPERS \
	FID_template_Source_template_templateCharacter_h_23_INCLASS \
	FID_template_Source_template_templateCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_template_Source_template_templateCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_template_Source_template_templateCharacter_h_23_SPARSE_DATA \
	FID_template_Source_template_templateCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_template_Source_template_templateCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_template_Source_template_templateCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLATE_API UClass* StaticClass<class AtemplateCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_template_Source_template_templateCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
