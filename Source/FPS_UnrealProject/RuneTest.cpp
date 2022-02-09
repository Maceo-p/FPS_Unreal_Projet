// Fill out your copyright notice in the Description page of Project Settings.


#include "RuneTest.h"

// Sets default values
ARuneTest::ARuneTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Props/MaterialSphere.MaterialSphere'"));
	if (Mesh.Succeeded())
	{
		meshComponent->SetStaticMesh(Mesh.Object);
		meshComponent->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
		//meshComponent->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
}

// Called when the game starts or when spawned
void ARuneTest::BeginPlay()
{
	Super::BeginPlay();
	currentPos = GetActorLocation();
}

// Called every frame
void ARuneTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetParentActor() != nullptr)
	{
		//GLog->Log(GetParentActor()->GetName());
	}
}


void ARuneTest::Swap(FVector posToSwap) {

	SetActorLocation(posToSwap);

	currentPos = posToSwap;

}