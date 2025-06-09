// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Delegates/DelegateCombinations.h"
#include "Mother.generated.h"



// スコア変更イベントの宣言
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScoreChanged, int32, NewScore);


UCLASS()
class CART_API AMother : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMother();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;





	// スコアを加算する(ブループリントから呼び出せる)
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Amount);

	// スコアを取得する(ブループリントから呼び出せる)
	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetScore() const;

	// 現在のスコア(ブループリントから呼び出せる)
	UPROPERTY(BlueprintReadOnly, Category = "Score")
	int32 Score;

	// スコア変更イベント(ブループリントからバインド可能)
	UPROPERTY(BlueprintAssignable, Category = "Score")
	FOnScoreChanged OnScoreChanged;

};
