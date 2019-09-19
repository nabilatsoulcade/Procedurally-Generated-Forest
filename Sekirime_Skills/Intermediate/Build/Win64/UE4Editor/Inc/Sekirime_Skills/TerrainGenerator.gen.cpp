// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sekirime_Skills/Public/TerrainGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainGenerator() {}
// Cross Module References
	SEKIRIME_SKILLS_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainSegmentType();
	UPackage* Z_Construct_UPackage__Script_Sekirime_Skills();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	SEKIRIME_SKILLS_API UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister();
	SEKIRIME_SKILLS_API UClass* Z_Construct_UClass_ATerrainGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SEKIRIME_SKILLS_API UFunction* Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain();
	CUSTOMMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshTriangle();
// End Cross Module References
class UScriptStruct* FTerrainSegmentType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SEKIRIME_SKILLS_API uint32 Get_Z_Construct_UScriptStruct_FTerrainSegmentType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTerrainSegmentType, Z_Construct_UPackage__Script_Sekirime_Skills(), TEXT("TerrainSegmentType"), sizeof(FTerrainSegmentType), Get_Z_Construct_UScriptStruct_FTerrainSegmentType_Hash());
	}
	return Singleton;
}
template<> SEKIRIME_SKILLS_API UScriptStruct* StaticStruct<FTerrainSegmentType>()
{
	return FTerrainSegmentType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTerrainSegmentType(FTerrainSegmentType::StaticStruct, TEXT("/Script/Sekirime_Skills"), TEXT("TerrainSegmentType"), false, nullptr, nullptr);
static struct FScriptStruct_Sekirime_Skills_StaticRegisterNativesFTerrainSegmentType
{
	FScriptStruct_Sekirime_Skills_StaticRegisterNativesFTerrainSegmentType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TerrainSegmentType")),new UScriptStruct::TCppStructOps<FTerrainSegmentType>);
	}
} ScriptStruct_Sekirime_Skills_StaticRegisterNativesFTerrainSegmentType;
	struct Z_Construct_UScriptStruct_FTerrainSegmentType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TerrainMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TerrainGenerator.h" },
		{ "ToolTip", "Forest Terrain Segment Data Type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTerrainSegmentType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_TerrainMesh_MetaData[] = {
		{ "Category", "TerrainSegmentType" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TerrainGenerator.h" },
		{ "ToolTip", "Terrain Element Entry" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_TerrainMesh = { "TerrainMesh", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTerrainSegmentType, TerrainMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_TerrainMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_TerrainMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "TerrainSegmentType" },
		{ "ModuleRelativePath", "Public/TerrainGenerator.h" },
		{ "ToolTip", "Terrain Element Entry" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTerrainSegmentType, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_TerrainMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Sekirime_Skills,
		nullptr,
		&NewStructOps,
		"TerrainSegmentType",
		sizeof(FTerrainSegmentType),
		alignof(FTerrainSegmentType),
		Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTerrainSegmentType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTerrainSegmentType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Sekirime_Skills();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TerrainSegmentType"), sizeof(FTerrainSegmentType), Get_Z_Construct_UScriptStruct_FTerrainSegmentType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTerrainSegmentType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTerrainSegmentType_Hash() { return 3475174140U; }
	void ATerrainGenerator::StaticRegisterNativesATerrainGenerator()
	{
		UClass* Class = ATerrainGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateTerrain", &ATerrainGenerator::execGenerateTerrain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrainGenerator.h" },
		{ "ToolTip", "Terrain Generation Algorithm" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATerrainGenerator, nullptr, "GenerateTerrain", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister()
	{
		return ATerrainGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ATerrainGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainMeshTris_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TerrainMeshTris;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TerrainMeshTris_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TerrainMesh;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TerrainMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TerrainSegments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TerrainSegments_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrainGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sekirime_Skills,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATerrainGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATerrainGenerator_GenerateTerrain, "GenerateTerrain" }, // 480774498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TerrainGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TerrainGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMeshTris_MetaData[] = {
		{ "Category", "TerrainGenerationSettings" },
		{ "ModuleRelativePath", "Public/TerrainGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMeshTris = { "TerrainMeshTris", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrainGenerator, TerrainMeshTris), METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMeshTris_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMeshTris_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMeshTris_Inner = { "TerrainMeshTris", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomMeshTriangle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMesh_MetaData[] = {
		{ "Category", "TerrainGenerationSettings" },
		{ "ModuleRelativePath", "Public/TerrainGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMesh = { "TerrainMesh", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrainGenerator, TerrainMesh), METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMesh_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMesh_Inner = { "TerrainMesh", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainSegments_MetaData[] = {
		{ "Category", "TerrainGenerationSettings" },
		{ "ModuleRelativePath", "Public/TerrainGenerator.h" },
		{ "ToolTip", "Terrain Element Entry" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainSegments = { "TerrainSegments", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrainGenerator, TerrainSegments), METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainSegments_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainSegments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainSegments_Inner = { "TerrainSegments", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTerrainSegmentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMeshTris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMeshTris_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainSegments_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrainGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATerrainGenerator_Statics::ClassParams = {
		&ATerrainGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATerrainGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATerrainGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATerrainGenerator, 2408341659);
	template<> SEKIRIME_SKILLS_API UClass* StaticClass<ATerrainGenerator>()
	{
		return ATerrainGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATerrainGenerator(Z_Construct_UClass_ATerrainGenerator, &ATerrainGenerator::StaticClass, TEXT("/Script/Sekirime_Skills"), TEXT("ATerrainGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrainGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
