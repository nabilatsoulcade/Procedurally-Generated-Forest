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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings, meta = (ClampMin = "3", UIMin = "3"))
		int32 TerrainWidth = 3;
	/** Terrain Width */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings, meta = (ClampMin = "3", UIMin = "3"))
		int32 TerrainHeight = 3;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TerrainGenerationSettings)
		TArray< int32 > TerrainMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TerrainGenerationSettings)
		TArray< FCustomMeshTriangle > TerrainMeshTris;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TerrainGenerationSettings)
		TArray< FVector > TerrainMeshVertex;
	//Terrain Generation Algorithm
	UFUNCTION()
		void GenerateTerrain();

};
