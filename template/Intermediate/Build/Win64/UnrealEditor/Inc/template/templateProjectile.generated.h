// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TEMPLATE_templateProjectile_generated_h
#error "templateProjectile.generated.h already included, missing '#pragma once' in templateProjectile.h"
#endif
#define TEMPLATE_templateProjectile_generated_h

#define FID_template_Source_template_templateProjectile_h_15_SPARSE_DATA
#define FID_template_Source_template_templateProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_template_Source_template_templateProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_template_Source_template_templateProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtemplateProjectile(); \
	friend struct Z_Construct_UClass_AtemplateProjectile_Statics; \
public: \
	DECLARE_CLASS(AtemplateProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/template"), NO_API) \
	DECLARE_SERIALIZER(AtemplateProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_template_Source_template_templateProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAtemplateProjectile(); \
	friend struct Z_Construct_UClass_AtemplateProjectile_Statics; \
public: \
	DECLARE_CLASS(AtemplateProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/template"), NO_API) \
	DECLARE_SERIALIZER(AtemplateProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_template_Source_template_templateProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtemplateProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtemplateProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtemplateProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtemplateProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtemplateProjectile(AtemplateProjectile&&); \
	NO_API AtemplateProjectile(const AtemplateProjectile&); \
public:


#define FID_template_Source_template_templateProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtemplateProjectile(AtemplateProjectile&&); \
	NO_API AtemplateProjectile(const AtemplateProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtemplateProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtemplateProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtemplateProjectile)


#define FID_template_Source_template_templateProjectile_h_12_PROLOG
#define FID_template_Source_template_templateProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_template_Source_template_templateProjectile_h_15_SPARSE_DATA \
	FID_template_Source_template_templateProjectile_h_15_RPC_WRAPPERS \
	FID_template_Source_template_templateProjectile_h_15_INCLASS \
	FID_template_Source_template_templateProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_template_Source_template_templateProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_template_Source_template_templateProjectile_h_15_SPARSE_DATA \
	FID_template_Source_template_templateProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_template_Source_template_templateProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_template_Source_template_templateProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLATE_API UClass* StaticClass<class AtemplateProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_template_Source_template_templateProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
