// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ToyGoal.h"
#include "ToyGoalManager.generated.h"

UCLASS()
class CART_API AToyGoalManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AToyGoalManager();

    // エディタで設定する収集目標
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Toy Goal")
    TArray<FToyGoal> ToyGoals;

    // おもちゃを追加したときに呼ぶ関数
    UFUNCTION(BlueprintCallable, Category = "Toy Goal")
    void AddToy(FName ToyID);

    // 全ての目標を達成したかどうか
    UFUNCTION(BlueprintCallable, Category = "Toy Goal")
    bool IsAllGoalsCleared() const;

    // 目標データを取得（UI用）
    const TArray<FToyGoal>& GetGoals() const { return ToyGoals; }

};
