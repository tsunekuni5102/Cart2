// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TitleGameMode.generated.h"



//タイトル画面専用のGameModeクラス
UCLASS()
class CART_API ATitleGameMode : public AGameMode
{
	GENERATED_BODY()
	

protected:
	//ゲーム開始時(レベル開始時)に呼ばれる処理
	virtual void BeginPlay() override;
public:
	//表示したいタイトルのUIクラスをBluePrintで設定できるようにする
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "UI")
	TSubclassOf<class UUserWidget> TitleMenuWidgetClass;
};
