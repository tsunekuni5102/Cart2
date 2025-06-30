// Fill out your copyright notice in the Description page of Project Settings.


#include "ToyGoalListWidget.h"
#include "Components/VerticalBox.h"
#include "ToyGoalEntryWidget.h"
#include "ToyGoalManager.h"

void UToyGoalListWidget::InitializeFromManager(AToyGoalManager* Manager)
{

    UE_LOG(LogTemp, Warning, TEXT("GM_nasi"));

    GoalManager = Manager;

    if (GoalManager)
    {
        GoalManager->OnGoalsUpdated.AddDynamic(this, &UToyGoalListWidget::RefreshDisplay);
        RefreshDisplay(); // 初回表示も
    }
}

void UToyGoalListWidget::RefreshDisplay()
{
    if (!GoalManager || !GoalListBox || !GoalEntryWidgetClass) return;

    // 既存のウィジェットエントリをすべて削除
    GoalListBox->ClearChildren();
    UE_LOG(LogTemp, Warning, TEXT("detayo"));
    // GoalManager に登録されたすべての目標（FToyGoal）を取得して処理
    for (const FToyGoal& Goal : GoalManager->GetGoals())
    {
        UE_LOG(LogTemp, Warning, TEXT("detayo2"));
        // GoalEntryWidgetClass を元に、新しい目標エントリウィジェットを生成
        UToyGoalEntryWidget* Entry = CreateWidget<UToyGoalEntryWidget>(this, GoalEntryWidgetClass);
        
        UE_LOG(LogTemp, Warning, TEXT("Entry Address: %p"), Entry);
        
        if (Entry)
        {
            if(Goal.ToyImage)
            {
            }
            // エントリに目標データを設定
            Entry->Setup(Goal);
            // エントリをリストボックスに追加
            GoalListBox->AddChild(Entry);
        }
    }
}
