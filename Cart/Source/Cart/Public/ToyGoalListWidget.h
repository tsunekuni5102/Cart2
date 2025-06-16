// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ToyGoalListWidget.generated.h"

class AToyGoalManager;
class UToyGoalEntryWidget;
/**
 * 
 */
UCLASS()
class CART_API UToyGoalListWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable)
    void InitializeFromManager(AToyGoalManager* Manager);

    UFUNCTION(BlueprintCallable)
    void RefreshDisplay(); // çƒï`âÊÇµÇΩÇ¢Ç∆Ç´óp

protected:
    UPROPERTY(meta = (BindWidget))
    class UVerticalBox* GoalListBox;

    UPROPERTY(EditAnywhere, Category = "Goal")
    TSubclassOf<UToyGoalEntryWidget> GoalEntryWidgetClass;

    UPROPERTY()
    AToyGoalManager* GoalManager;
};
