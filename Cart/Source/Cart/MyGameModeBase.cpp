#include "MyGameModeBase.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
//#include "YourCustomPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
  
    PrimaryActorTick.bCanEverTick = true; //Tick(毎フレーム使用)
    CountdownTime = 60.0f;                //初期制限時間(秒)
    bGameTimeOver = false;                //最初はゲームオーバーしてない
}

//ゲーム開始時に呼び出される関数
void AMyGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    if (GEngine)
    {
        //デバッグメッセージを画面に表示(1回限り)
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Countdown Start!"));
    }
}


//毎フレーム呼び出される関数(Tick)
void AMyGameModeBase::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (bGameTimeOver)
    {
        //ゲーム終了していたら何もしない
        return;
    }

    CountdownTime = FMath::Max(CountdownTime - DeltaSeconds, 0.0f);

  
        if (CountdownTime <= 0.0f)
        {
            //時間切れ
            bGameTimeOver = true;

          
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, TEXT("Tick Called"));
            
                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Time Over!"));
            }

            // ゲーム終了処理をここに(リザルト画面描画など)追加
        }
        else
        {
            //秒数を表示(毎秒更新、キー1を使って上書き)
            if (GEngine)
            {
                FString TimeText = FString::Printf(TEXT("Time Left: %.1f"), CountdownTime);
                GEngine->AddOnScreenDebugMessage(1, 1.0f, FColor::Green, TimeText);
            }
        }
    
}
