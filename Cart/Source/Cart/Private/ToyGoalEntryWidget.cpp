// Fill out your copyright notice in the Description page of Project Settings.


#include "ToyGoalEntryWidget.h"

#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "components/HorizontalBox.h"
#include "components/HorizontalBoxSlot.h"
#include "Components/SizeBox.h"           // USizeBox
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UToyGoalEntryWidget::Setup(const FToyGoal& GoalData)
{
    UE_LOG(LogTemp, Warning, TEXT("kitakitakita"));
    if (!RootBox) return;

    // HorizontalBoxを作る（1行分）
    UHorizontalBox* RowBox = NewObject<UHorizontalBox>(this);

    // 画像用SizeBox
    UImage* ToyImage = NewObject<UImage>(this);
    FSlateBrush Brush;
    Brush.SetResourceObject(GoalData.ToyImage);
    Brush.ImageSize = FVector2D(100, 100);
    Brush.DrawAs = ESlateBrushDrawType::Image;
    ToyImage->SetBrush(Brush);

    USizeBox* ImageBox = NewObject<USizeBox>(this);
    ImageBox->SetWidthOverride(100.f);
    ImageBox->SetHeightOverride(100.f);
    ImageBox->AddChild(ToyImage);

    // Add ImageBox to Row
    UHorizontalBoxSlot* ImgSlot = RowBox->AddChildToHorizontalBox(ImageBox);
    if (ImgSlot)
    {
        ImgSlot->SetPadding(FMargin(5));
        ImgSlot->SetHorizontalAlignment(HAlign_Left);
        ImgSlot->SetVerticalAlignment(VAlign_Center);
    }

    // テキスト
    UTextBlock* CountText = NewObject<UTextBlock>(this);
    CountText->SetText(FText::FromString(FString::Printf(TEXT("× %d / %d"), GoalData.CurrentCount, GoalData.RequiredCount)));

    UHorizontalBoxSlot* TextSlot = RowBox->AddChildToHorizontalBox(CountText);
    if (TextSlot)
    {
        TextSlot->SetPadding(FMargin(10, 0, 0, 0));
        TextSlot->SetVerticalAlignment(VAlign_Center);
    }

    // RowBox を RootBox に追加（縦に積む）
    UVerticalBoxSlot* VBoxSlot = RootBox->AddChildToVerticalBox(RowBox);
    if (VBoxSlot)
    {
        VBoxSlot->SetSize(FSlateChildSize(ESlateSizeRule::Automatic));
        VBoxSlot->SetHorizontalAlignment(HAlign_Left); // 任意
    }
}

