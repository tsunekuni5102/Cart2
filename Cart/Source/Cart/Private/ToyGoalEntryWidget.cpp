// Fill out your copyright notice in the Description page of Project Settings.


#include "ToyGoalEntryWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UToyGoalEntryWidget::Setup(const FToyGoal& GoalData)
{
    if (ToyImage)
        ToyImage->SetBrushFromTexture(GoalData.ToyImage);

    if (CountText)
        CountText->SetText(FText::FromString(FString::Printf(TEXT("Å~ %d / %d"), GoalData.CurrentCount, GoalData.RequiredCount)));
}
