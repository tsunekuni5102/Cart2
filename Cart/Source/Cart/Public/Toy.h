// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Toy.generated.h"

UCLASS()
class CART_API AToy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AToy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//おもちゃの重量(kgなど)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Toy Properties")
	float Weight;

	//おもちゃのスコア(ゲーム内の得点)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Toy Properties")
	int32 Score;

	//重さを取得
	UFUNCTION(BlueprintCallable, Category = "Toy Properties")
	float GetWeight() const { return Weight; }

	//スコアを取得
	UFUNCTION(BlueprintCallable, Category = "Toy Prioerties")
	int32 GetScore() const { return Score; }
};
