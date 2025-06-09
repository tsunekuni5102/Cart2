// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Delegates/DelegateCombinations.h"
#include "Mother.generated.h"



// �X�R�A�ύX�C�x���g�̐錾
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





	// �X�R�A�����Z����(�u���[�v�����g����Ăяo����)
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Amount);

	// �X�R�A���擾����(�u���[�v�����g����Ăяo����)
	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetScore() const;

	// ���݂̃X�R�A(�u���[�v�����g����Ăяo����)
	UPROPERTY(BlueprintReadOnly, Category = "Score")
	int32 Score;

	// �X�R�A�ύX�C�x���g(�u���[�v�����g����o�C���h�\)
	UPROPERTY(BlueprintAssignable, Category = "Score")
	FOnScoreChanged OnScoreChanged;

};
