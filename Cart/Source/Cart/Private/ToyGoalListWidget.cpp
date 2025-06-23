// Fill out your copyright notice in the Description page of Project Settings.


#include "ToyGoalListWidget.h"
#include "Components/VerticalBox.h"
#include "ToyGoalEntryWidget.h"
#include "ToyGoalManager.h"

void UToyGoalListWidget::InitializeFromManager(AToyGoalManager* Manager)
{

    UE_LOG(LogTemp, Warning, TEXT("GM_nasi"));

    GoalManager = Manager;

    RefreshDisplay();
}

void UToyGoalListWidget::RefreshDisplay()
{
    //if(GoalManager)
    //    UE_LOG(LogTemp, Warning, TEXT("GM_nasi"));

    //if(GoalListBox)
    //    UE_LOG(LogTemp, Warning, TEXT("GLB_nasi"));

    //if(GoalEntryWidgetClass)
        UE_LOG(LogTemp, Warning, TEXT("GEW_nasi"));

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
                UE_LOG(LogTemp, Warning, TEXT("haiteruyo"));
            }
            UE_LOG(LogTemp, Warning, TEXT("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
            // エントリに目標データを設定
            Entry->Setup(Goal);
            // エントリをリストボックスに追加
            GoalListBox->AddChild(Entry);
        }
    }
}
