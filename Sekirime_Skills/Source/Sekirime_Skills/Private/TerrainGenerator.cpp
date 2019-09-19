// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainGenerator.h"

// Sets default values

ATerrainGenerator::ATerrainGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATerrainGenerator::BeginPlay()
{
	Super::BeginPlay();
	GenerateTerrain();
}

// Called every frame
void ATerrainGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATerrainGenerator::GenerateTerrain()
{
	//Creates Mesh of Triangles
	UKismetProceduralMeshLibrary::CreateGridMeshTriangles(320,320,true, TerrainMesh);
	
	//Since Unreal doesn't have a cast for a TArray<int32> to TArray<FCustomMeshTriangle>
	TerrainMeshTris.SetNum((sizeof(TerrainMesh)-1) / 3, true);

	for (int i = 0; i < 3; i++)
	{
		TerrainMeshTris[i].Vertex0 = FVector(TerrainMesh[i], TerrainMesh[i+1], TerrainMesh[i+2]);
		TerrainMeshTris[i].Vertex1 = FVector(TerrainMesh[i+3], TerrainMesh[i+4], TerrainMesh[i+5]);
		TerrainMeshTris[i].Vertex2 = FVector(TerrainMesh[i+6], TerrainMesh[i+7], TerrainMesh[i+8]);
	}
}

