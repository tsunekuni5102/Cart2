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

    // 既存のウィジェットエントリをすべて削除
    GoalListBox->ClearChildren();

    // GoalManager に登録されたすべての目標（FToyGoal）を取得して処理
    for (const FToyGoal& Goal : GoalManager->GetGoals())
    {
        // GoalEntryWidgetClass を元に、新しい目標エントリウィジェットを生成
        UToyGoalEntryWidget* Entry = CreateWidget<UToyGoalEntryWidget>(this, GoalEntryWidgetClass);
        if (Entry)
        {
            // エントリに目標データを設定
            Entry->Setup(Goal);
            // エントリをリストボックスに追加
            GoalListBox->AddChild(Entry);
        }
    }
}
