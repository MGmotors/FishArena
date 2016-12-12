// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "FishAI.generated.h"

UCLASS()
class EATORDIE_API AFishAI : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFishAI();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FishAI)
	bool bIsEatdasdasable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FishAI)
	USphereComponent* BaseCollisionComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = FishAI)
	UStaticMeshComponent* BaseCollisionComponennt;

};
