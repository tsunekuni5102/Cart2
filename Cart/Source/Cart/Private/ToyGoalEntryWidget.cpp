// Fill out your copyright notice in the Description page of Project Settings.


#include "ToyGoalEntryWidget.h"

#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"

void UToyGoalEntryWidget::Setup(const FToyGoal& GoalData)
{

	if (!RootBox) return;

	// 画像を生成
	UImage* ToyImage = NewObject<UImage>(this);
	ToyImage->SetBrushFromTexture(GoalData.ToyImage);
	RootBox->AddChildToVerticalBox(ToyImage);

	// テキストを生成
	UTextBlock* CountText = NewObject<UTextBlock>(this);
	CountText->SetText(FText::FromString(FString::Printf(TEXT("× %d / %d"), GoalData.CurrentCount, GoalData.RequiredCount)));
	RootBox->AddChildToVerticalBox(CountText);
}
