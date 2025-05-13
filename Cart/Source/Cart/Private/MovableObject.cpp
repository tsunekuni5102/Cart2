// Fill out your copyright notice in the Description page of Project Settings.
#include "MovableObject.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMovableObject::AMovableObject()
{
    // ���[�g�R���|�[�l���g�Ƃ��ă��b�V����ݒ�
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // �K�v�ɉ����ď����ݒ�
    MeshComponent->SetMobility(EComponentMobility::Movable); // �ړ��\��
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

