// Fill out your copyright notice in the Description page of Project Settings.


#include "ToyGoalManager.h"

// Sets default values
AToyGoalManager::AToyGoalManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AToyGoalManager::AddToy(FName ToyID)
{
    for (FToyGoal& Goal : ToyGoals)
    {
        if (Goal.ToyID == ToyID && Goal.CurrentCount < Goal.RequiredCount)
        {
            UE_LOG(LogTemp, Warning, TEXT("Toy_AddSuru"));

            Goal.CurrentCount++;

            // ✅ UI更新イベント発行
            OnGoalsUpdated.Broadcast();

            break;
        }
    }

    // ここでクリア判定
    if (IsAllGoalsCleared())
    {
        //クリアフラグをtrueに
        bIsCleared = true;
        UE_LOG(LogTemp, Warning, TEXT("All Goals Cleared!"));
    }
}

bool AToyGoalManager::IsAllGoalsCleared() const
{
    for (const FToyGoal& Goal : ToyGoals)
    {
        if (Goal.CurrentCount < Goal.RequiredCount)
        {
            return false;
        }
    }
    return true;
}

