#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

UCLASS()
class CART_API AMyGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

public:
    AMyGameModeBase();//�R���X�g���N�^

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

private:

    float CountdownTime; //�c�莞��(�b)
    bool bGameTimeOver;  //�Q�[�����I�����Ă��邩�ǂ���
};
