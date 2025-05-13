// Fill out your copyright notice in the Description page of Project Settings.
#include "MovableObject.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMovableObject::AMovableObject()
{
    // ルートコンポーネントとしてメッシュを設定
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // 必要に応じて初期設定
    MeshComponent->SetMobility(EComponentMobility::Movable); // 移動可能に
}

//// Called when the game starts or when spawned
//void AMovableObject::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void AMovableObject::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

