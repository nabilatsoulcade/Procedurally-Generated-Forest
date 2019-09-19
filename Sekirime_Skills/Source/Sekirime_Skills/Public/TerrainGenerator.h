// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProceduralMeshComponent.h"
#include "TerrainGenerator.generated.h"

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

	/** Add segments to the Terrain Builder */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TerrainGenerationSettings)
		/** Terrain Element Entry */
		TArray<FTerrainSegmentType> TerrainSegments;

};
