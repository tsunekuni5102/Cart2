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

	//��������̏d��(kg�Ȃ�)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Toy Properties")
	float Weight;

	//��������̃X�R�A(�Q�[�����̓��_)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Toy Properties")
	int32 Score;

	//�d�����擾
	UFUNCTION(BlueprintCallable, Category = "Toy Properties")
	float GetWeight() const { return Weight; }

	//�X�R�A���擾
	UFUNCTION(BlueprintCallable, Category = "Toy Prioerties")
	int32 GetScore() const { return Score; }
};
