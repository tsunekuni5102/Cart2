#include "TitleGameMode.h"
#include "Blueprint/UserWidget.h"           // UUserWidget 用
#include "Kismet/GameplayStatics.h"         // ゲーム操作関連（マップ遷移など）
#include "GameFramework/PlayerController.h" // プレイヤー操作用

void ATitleGameMode::BeginPlay()
{
    Super::BeginPlay(); // 親クラスの処理を呼び出す

    // UIクラスが正しく設定されていれば（Blueprint側で指定したか）
    if (TitleMenuWidgetClass)
    {
        // 指定されたUIウィジェットを生成
        UUserWidget* TitleMenu = CreateWidget<UUserWidget>(GetWorld(), TitleMenuWidgetClass);
        if (TitleMenu)
        {
            // 画面にUIを表示する
            TitleMenu->AddToViewport();

            // プレイヤーのマウスカーソルを表示 & UI操作モードにする
            APlayerController* PC = GetWorld()->GetFirstPlayerController();
            if (PC)
            {
                PC->SetInputMode(FInputModeUIOnly()); // UIだけ操作可能に
                PC->bShowMouseCursor = true;          // マウスカーソルを表示
            }
        }
    }
}
