// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Blueprint/UserWidget.h"
#include "MyTimeWidget.generated.h"

class UTextBlock;
class UButton;
//�O���錾(Ui�v�f�̎Q�ƂɕK�v)

/**
 * C++��UI������s���E�B�W�F�b�g�N���X
 */
UCLASS()
class CART_API UMyTimeWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	// WBP�́uTimer�v�Ƃ������O�� TextBlock �����̕ϐ��Ƀo�C���h����
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Timer;

	//�{�^����C++�Ŏg�����߂̎Q��
	UPROPERTY(meta = (BindWidget))
	UButton* StartButton;

	//�E�B�W�F�b�g������ɌĂ΂�鏉��������
	//�I�[�o�[���C�h�������ƃG���[���ł�B
	virtual void NativeConstruct() override;

public:
	//�O�����玞�Ԃ�\������֐�
	void SetTimer(int32 Time);

	//�{�^���N���b�N���̏���
	//void OnStartButtonClicked();
	
};
