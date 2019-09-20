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
	//Creates A Grid Mesh and outputs the Triangles, Vertices, and UVs
	//UKismetProceduralMeshLibrary::CreateGridMeshWelded(TerrainWidth, TerrainHeight, TerrainGridSpacing);
	
}

