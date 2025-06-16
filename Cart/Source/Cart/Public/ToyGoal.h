// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ToyGoal.generated.h"

USTRUCT(BlueprintType)
struct FToyGoal
{
    GENERATED_BODY()

    // おもちゃの画像（UIに表示）
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* ToyImage;

    // おもちゃ識別ID（拾ったときに照合する）
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ToyID;

    // 必要数
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 RequiredCount;

    // 現在の収集数（初期は0）
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentCount = 0;
};