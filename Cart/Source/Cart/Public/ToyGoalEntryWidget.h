// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ToyGoal.h"
#include "ToyGoalEntryWidget.generated.h"

/**
 * 
 */
UCLASS()
class CART_API UToyGoalEntryWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable)
    void Setup(const FToyGoal& GoalData);

protected:
    UPROPERTY(meta = (BindWidget))
    class UImage* ToyImage;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* CountText;
};
