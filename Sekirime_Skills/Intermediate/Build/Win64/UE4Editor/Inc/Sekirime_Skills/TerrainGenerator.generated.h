// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIRIME_SKILLS_TerrainGenerator_generated_h
#error "TerrainGenerator.generated.h already included, missing '#pragma once' in TerrainGenerator.h"
#endif
#define SEKIRIME_SKILLS_TerrainGenerator_generated_h

#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTerrainSegmentType_Statics; \
	SEKIRIME_SKILLS_API static class UScriptStruct* StaticStruct();


template<> SEKIRIME_SKILLS_API UScriptStruct* StaticStruct<struct FTerrainSegmentType>();

#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateTerrain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateTerrain(); \
		P_NATIVE_END; \
	}


#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateTerrain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateTerrain(); \
		P_NATIVE_END; \
	}


#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrainGenerator(); \
	friend struct Z_Construct_UClass_ATerrainGenerator_Statics; \
public: \
	DECLARE_CLASS(ATerrainGenerator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sekirime_Skills"), NO_API) \
	DECLARE_SERIALIZER(ATerrainGenerator)


#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_INCLASS \
private: \
	static void StaticRegisterNativesATerrainGenerator(); \
	friend struct Z_Construct_UClass_ATerrainGenerator_Statics; \
public: \
	DECLARE_CLASS(ATerrainGenerator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sekirime_Skills"), NO_API) \
	DECLARE_SERIALIZER(ATerrainGenerator)


#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATerrainGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATerrainGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrainGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrainGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATerrainGenerator(ATerrainGenerator&&); \
	NO_API ATerrainGenerator(const ATerrainGenerator&); \
public:


#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATerrainGenerator(ATerrainGenerator&&); \
	NO_API ATerrainGenerator(const ATerrainGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrainGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrainGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATerrainGenerator)


#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_PRIVATE_PROPERTY_OFFSET
#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_27_PROLOG
#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_PRIVATE_PROPERTY_OFFSET \
	Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_RPC_WRAPPERS \
	Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_INCLASS \
	Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_PRIVATE_PROPERTY_OFFSET \
	Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_INCLASS_NO_PURE_DECLS \
	Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIRIME_SKILLS_API UClass* StaticClass<class ATerrainGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sekirime_Skills_Source_Sekirime_Skills_Public_TerrainGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
