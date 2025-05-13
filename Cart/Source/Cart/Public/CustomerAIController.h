// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CustomerAIController.generated.h"

UCLASS()
class CART_API ACustomerAIController : public AAIController
{
    GENERATED_BODY()

public:
    ACustomerAIController();

protected:
    virtual void BeginPlay() override;

private:
    void MoveToRandomLocation(); // ランダム移動関数

    FTimerHandle WanderTimerHandle; // タイマー用
};
