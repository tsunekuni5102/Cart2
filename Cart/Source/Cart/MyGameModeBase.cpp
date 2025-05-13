#include "MyGameModeBase.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
//#include "YourCustomPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
  
    PrimaryActorTick.bCanEverTick = true; //Tick(���t���[���g�p)
    CountdownTime = 60.0f;                //������������(�b)
    bGameTimeOver = false;                //�ŏ��̓Q�[���I�[�o�[���ĂȂ�
}

//�Q�[���J�n���ɌĂяo�����֐�
void AMyGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    if (GEngine)
    {
        //�f�o�b�O���b�Z�[�W����ʂɕ\��(1�����)
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Countdown Start!"));
    }
}


//���t���[���Ăяo�����֐�(Tick)
void AMyGameModeBase::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (bGameTimeOver)
    {
        //�Q�[���I�����Ă����牽�����Ȃ�
        return;
    }

    CountdownTime = FMath::Max(CountdownTime - DeltaSeconds, 0.0f);

  
        if (CountdownTime <= 0.0f)
        {
            //���Ԑ؂�
            bGameTimeOver = true;

          
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, TEXT("Tick Called"));
            
                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Time Over!"));
            }

            // �Q�[���I��������������(���U���g��ʕ`��Ȃ�)�ǉ�
        }
        else
        {
            //�b����\��(���b�X�V�A�L�[1���g���ď㏑��)
            if (GEngine)
            {
                FString TimeText = FString::Printf(TEXT("Time Left: %.1f"), CountdownTime);
                GEngine->AddOnScreenDebugMessage(1, 1.0f, FColor::Green, TimeText);
            }
        }
    
}
