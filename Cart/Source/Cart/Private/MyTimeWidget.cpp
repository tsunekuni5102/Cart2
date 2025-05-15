// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTimeWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"

//初期化処理
void UMyTimeWidget::NativeConstruct()
{
	Super::NativeConstruct();

	//ボタンが有効であれば、クリックイベントをバインド
	if (StartButton)
	{
		StartButton->OnClicked.AddDynamic(this, &UMyTimeWidget::OnStartButtonClicked);
	}

	//初期テキストを設定
	SetTimer(60);

}

//秒数を文字にして、TextBlockに表示する

void UMyTimeWidget::SetTimer(int32 Time)
{
	if (Timer)
	{
		UE_LOG(LogTemp, Warning, TEXT("スタートボタンが押されました！"));

		// 必要に応じてここで処理開始（例えばカウントダウン開始）
	}
}
