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

    //   // Imageの生成
    //   UImage* ToyImage = NewObject<UImage>(this);

    //   // ブラシを作成して画像を設定
    //   FSlateBrush Brush;
    //   Brush.SetResourceObject(GoalData.ToyImage); // テクスチャを設定
    //   Brush.ImageSize = FVector2D(100, 100);      // ブラシ上の画像サイズ（あっても良いがSizeBox優先）
    //   Brush.DrawAs = ESlateBrushDrawType::Image; // ← これが Stretch=None 相当

    //   ToyImage->SetBrush(Brush);

    //   // SizeBoxを作成してサイズを固定
    //   USizeBox* ImageBox = NewObject<USizeBox>(this);
    //   ImageBox->SetWidthOverride(100.f);
    //   ImageBox->SetHeightOverride(100.f);
    //   ImageBox->AddChild(ToyImage);

    //   // SizeBoxをVerticalBoxに追加
    //   UVerticalBoxSlot* VBoxSlot = RootBox->AddChildToVerticalBox(ImageBox);
    //   if (!VBoxSlot)
    //   {
    //       UE_LOG(LogTemp, Error, TEXT("VBoxSlot is null! AddChildToVerticalBox failed."));
    //   }
    //   
    //   if (VBoxSlot)
    //   {
    //       UE_LOG(LogTemp, Error, TEXT("yabayabayaba"));
    //       VBoxSlot->SetSize(FSlateChildSize(ESlateSizeRule::Automatic)); // 自動サイズ（Fillではない）
    //       VBoxSlot->SetHorizontalAlignment(HAlign_Center);               // 必要なら中央寄せ
    //   }

       //// テキストを生成
       //UTextBlock* CountText = NewObject<UTextBlock>(this);
       //CountText->SetText(FText::FromString(FString::Printf(TEXT("× %d / %d"), GoalData.CurrentCount, GoalData.RequiredCount)));
       //RootBox->AddChildToVerticalBox(CountText);
}

