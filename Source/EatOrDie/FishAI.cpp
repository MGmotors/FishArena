// Fill out your copyright notice in the Description page of Project Settings.

#include "EatOrDie.h"
#include "FishAI.h"


// Sets default values
AFishAI::AFishAI()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFishAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFishAI::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

