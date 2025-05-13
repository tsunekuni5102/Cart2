// Fill out your copyright notice in the Description page of Project Settings.
#include "CustomerAIController.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"

ACustomerAIController::ACustomerAIController()
{
    PrimaryActorTick.bCanEverTick = true;

    
}

void ACustomerAIController::BeginPlay()
{
    Super::BeginPlay();

    //for (const FName& Tag : Tags)
    //{
    //    UE_LOG(LogTemp, Warning, TEXT("Tag: %s"), *Tag.ToString());
    //}

    // 一定時間ごとにランダム移動させる
    GetWorld()->GetTimerManager().SetTimer(WanderTimerHandle, this, &ACustomerAIController::MoveToRandomLocation, 5.0f, true);

    // 最初の移動
    MoveToRandomLocation();
}



void ACustomerAIController::MoveToRandomLocation()
{
    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn) return;

    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
    if (NavSys)
    {
        FVector Origin = ControlledPawn->GetActorLocation();
        FNavLocation RandomPoint;

        // 半径1000ユニット以内のランダムな地点に移動
        if (NavSys->GetRandomPointInNavigableRadius(Origin, 10000.0f, RandomPoint))
        {
            MoveToLocation(RandomPoint.Location);
        }
    }
}
