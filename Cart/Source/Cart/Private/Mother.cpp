// Fill out your copyright notice in the Description page of Project Settings.


#include "Mother.h"
#include "CustomerAIController.h"

// Sets default values
AMother::AMother()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// �z�u�܂��̓X�|�[�����ꂽ�玩����AI������
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	// �g�p����AIController�N���X���w��
	AIControllerClass = ACustomerAIController::StaticClass();
}

// Called when the game starts or when spawned
void AMother::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMother::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMother::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

