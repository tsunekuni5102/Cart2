// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTimeWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"

//����������
void UMyTimeWidget::NativeConstruct()
{
	Super::NativeConstruct();

	//�{�^�����L���ł���΁A�N���b�N�C�x���g���o�C���h
	if (StartButton)
	{
		StartButton->OnClicked.AddDynamic(this, &UMyTimeWidget::OnStartButtonClicked);
	}

	//�����e�L�X�g��ݒ�
	SetTimer(60);

}

//�b���𕶎��ɂ��āATextBlock�ɕ\������

void UMyTimeWidget::SetTimer(int32 Time)
{
	if (Timer)
	{
		UE_LOG(LogTemp, Warning, TEXT("�X�^�[�g�{�^����������܂����I"));

		// �K�v�ɉ����Ă����ŏ����J�n�i�Ⴆ�΃J�E���g�_�E���J�n�j
	}
}
