// Fill out your copyright notice in the Description page of Project Settings.


#include "Sol.h"

// Sets default values
ASol::ASol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MeshSol = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sol Mesh"));
	RootComponent = MeshSol;

	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	MeshSol->SetStaticMesh(ZombieMeshAsset.Object);
}

// Called when the game starts or when spawned
void ASol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

