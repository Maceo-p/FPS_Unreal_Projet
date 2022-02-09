// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TriggerBox.h"
#include "RuneTest.generated.h"

UCLASS()
class FPS_UNREALPROJECT_API ARuneTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARuneTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void Swap(FVector posToSwap);

	UPROPERTY()
	FVector currentPos;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ChildMesh;

protected:


	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* meshComponent;

	UPROPERTY()
	ATriggerBox* triggerbox;
};
