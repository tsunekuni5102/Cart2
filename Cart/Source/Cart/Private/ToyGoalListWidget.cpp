// Fill out your copyright notice in the Description page of Project Settings.


#include "ToyGoalListWidget.h"
#include "Components/VerticalBox.h"
#include "ToyGoalEntryWidget.h"
#include "ToyGoalManager.h"

void UToyGoalListWidget::InitializeFromManager(AToyGoalManager* Manager)
{
    GoalManager = Manager;
    RefreshDisplay();
}

void UToyGoalListWidget::RefreshDisplay()
{
    if (!GoalManager || !GoalListBox || !GoalEntryWidgetClass) return;

    GoalListBox->ClearChildren();

    for (const FToyGoal& Goal : GoalManager->GetGoals())
    {
        UToyGoalEntryWidget* Entry = CreateWidget<UToyGoalEntryWidget>(this, GoalEntryWidgetClass);
        if (Entry)
        {
            Entry->Setup(Goal);
            GoalListBox->AddChild(Entry);
        }
    }
}
