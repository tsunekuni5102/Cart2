// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TitleGameMode.generated.h"



//�^�C�g����ʐ�p��GameMode�N���X
UCLASS()
class CART_API ATitleGameMode : public AGameMode
{
	GENERATED_BODY()
	

protected:
	//�Q�[���J�n��(���x���J�n��)�ɌĂ΂�鏈��
	virtual void BeginPlay() override;
public:
	//�\���������^�C�g����UI�N���X��BluePrint�Őݒ�ł���悤�ɂ���
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "UI")
	TSubclassOf<class UUserWidget> TitleMenuWidgetClass;
};
