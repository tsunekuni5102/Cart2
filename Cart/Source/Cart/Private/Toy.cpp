// Fill out your copyright notice in the Description page of Project Settings.


#include "Toy.h"

// Sets default values
AToy::AToy()
{
	Tags.Add(FName("Toy"));  // ← ここでタグ追加

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//デフォルト値
	Weight = 1.0f;
	Score = 10;
}

// Called when the game starts or when spawned
void AToy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AToy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

