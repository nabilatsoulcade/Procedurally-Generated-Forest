// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sekirime_Skills/Sekirime_SkillsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekirime_SkillsGameMode() {}
// Cross Module References
	SEKIRIME_SKILLS_API UClass* Z_Construct_UClass_ASekirime_SkillsGameMode_NoRegister();
	SEKIRIME_SKILLS_API UClass* Z_Construct_UClass_ASekirime_SkillsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sekirime_Skills();
// End Cross Module References
	void ASekirime_SkillsGameMode::StaticRegisterNativesASekirime_SkillsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASekirime_SkillsGameMode_NoRegister()
	{
		return ASekirime_SkillsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASekirime_SkillsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASekirime_SkillsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sekirime_Skills,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASekirime_SkillsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Sekirime_SkillsGameMode.h" },
		{ "ModuleRelativePath", "Sekirime_SkillsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASekirime_SkillsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekirime_SkillsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASekirime_SkillsGameMode_Statics::ClassParams = {
		&ASekirime_SkillsGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASekirime_SkillsGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASekirime_SkillsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASekirime_SkillsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASekirime_SkillsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASekirime_SkillsGameMode, 3199608449);
	template<> SEKIRIME_SKILLS_API UClass* StaticClass<ASekirime_SkillsGameMode>()
	{
		return ASekirime_SkillsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASekirime_SkillsGameMode(Z_Construct_UClass_ASekirime_SkillsGameMode, &ASekirime_SkillsGameMode::StaticClass, TEXT("/Script/Sekirime_Skills"), TEXT("ASekirime_SkillsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASekirime_SkillsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
