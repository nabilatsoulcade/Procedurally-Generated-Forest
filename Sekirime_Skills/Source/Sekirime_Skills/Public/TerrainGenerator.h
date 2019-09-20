// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProceduralMeshComponent.h"
#include "CustomMeshComponent.h"
#include "TerrainGenerator.generated.h"

#define TerrainPrint(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT(x));}

//Forest Terrain Segment Data Type
USTRUCT(BlueprintType, Blueprintable)
struct FTerrainSegmentType
{
	GENERATED_USTRUCT_BODY()
		/** Terrain Element Entry */
		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Name;
		/** Terrain Element Entry */
		UPROPERTY(BlueprintReadOnly)
		UProceduralMeshComponent* TerrainMesh;
};

UCLASS(Blueprintable)
class SEKIRIME_SKILLS_API ATerrainGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrainGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Terrain Width */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings, meta = (ClampMin = "1", UIMin = "1"))
		int32 TerrainWidth = 3;
	/** Terrain Height */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings, meta = (ClampMin = "1", UIMin = "1"))
		int32 TerrainHeight = 3;
	/** Terrain Height */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings, meta = (ClampMin = "1", UIMin = "1"))
		int32 TerrainGridSpacing = 16;
	/** Terrain Generation Debug Mode */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings, meta = (ClampMin = "1", UIMin = "1"))
		bool TerrainDebugMode = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings)
		float TerrainVarianceMin = -1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings)
		float TerrainVarianceMax = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings)
		TArray< int32 > TerrainTriangles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings)
		TArray< FVector > TerrainVertices;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings)
		TArray< FVector2D > TerrainUV;

	//Terrain Generation Algorithm
	UFUNCTION()
		void GenerateTerrain();

};
