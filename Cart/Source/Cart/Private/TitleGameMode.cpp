#include "TitleGameMode.h"
#include "Blueprint/UserWidget.h"           // UUserWidget �p
#include "Kismet/GameplayStatics.h"         // �Q�[������֘A�i�}�b�v�J�ڂȂǁj
#include "GameFramework/PlayerController.h" // �v���C���[����p

void ATitleGameMode::BeginPlay()
{
    Super::BeginPlay(); // �e�N���X�̏������Ăяo��

    // UI�N���X���������ݒ肳��Ă���΁iBlueprint���Ŏw�肵�����j
    if (TitleMenuWidgetClass)
    {
        // �w�肳�ꂽUI�E�B�W�F�b�g�𐶐�
        UUserWidget* TitleMenu = CreateWidget<UUserWidget>(GetWorld(), TitleMenuWidgetClass);
        if (TitleMenu)
        {
            // ��ʂ�UI��\������
            TitleMenu->AddToViewport();

            // �v���C���[�̃}�E�X�J�[�\����\�� & UI���샂�[�h�ɂ���
            APlayerController* PC = GetWorld()->GetFirstPlayerController();
            if (PC)
            {
                PC->SetInputMode(FInputModeUIOnly()); // UI��������\��
                PC->bShowMouseCursor = true;          // �}�E�X�J�[�\����\��
            }
        }
    }
}
