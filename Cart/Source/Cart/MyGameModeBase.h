#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

UCLASS()
class CART_API AMyGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

public:
    AMyGameModeBase();//コンストラクタ

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

private:

    float CountdownTime; //残り時間(秒)
    bool bGameTimeOver;  //ゲームが終了しているかどうか
};
