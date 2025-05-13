// Fill out your copyright notice in the Description page of Project Settings.


#include "ToyActor.h"

// Sets default values
AToyActor::AToyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//デフォルト値
	Weight = 1.0f;
	Score  = 10;

}

// Called when the game starts or when spawned
void AToyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AToyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

