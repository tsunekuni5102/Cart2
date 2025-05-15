// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Blueprint/UserWidget.h"
#include "MyTimeWidget.generated.h"

class UTextBlock;
class UButton;
//前方宣言(Ui要素の参照に必要)

/**
 * C++でUI制御を行うウィジェットクラス
 */
UCLASS()
class CART_API UMyTimeWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	// WBPの「Timer」という名前の TextBlock をこの変数にバインドする
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Timer;

	//ボタンをC++で使うための参照
	UPROPERTY(meta = (BindWidget))
	UButton* StartButton;

	//ウィジェット生成後に呼ばれる初期化処理
	//オーバーライドを書くとエラーがでる。
	virtual void NativeConstruct() override;

public:
	//外部から時間を表示する関数
	void SetTimer(int32 Time);

	//ボタンクリック時の処理
	//void OnStartButtonClicked();
	
};
