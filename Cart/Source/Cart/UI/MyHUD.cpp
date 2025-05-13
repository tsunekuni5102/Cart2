// Fill out your copyright notice in the Description page of Project Settings.


////#include "UI/MyHUD.h"
//#include "Engine/Canvas.h"
//#include "Engine/Engine.h"
//
//void AMyHUD::DrawHUD()
//{
//	Super::DrawHUD();
//
//	if (!TimeUp)
//	{
//		ElapsedTime += GetWorld()->GetDeltaSeconds();
//	}
//
//	FString TimeText = FString::Printf(TEXT("Time: %.0f"), ElapsedTime);
//	UFont* Font = GEngine->GetMediumFont();
//
//	DrawText(TimeText, FColor::White, 50, 50, Font, 2.0f);
//
//	if (ElapsedTime >= 60.0f && !TimeUp)
//	{
//		TimeUp = true;
//	}
//
//	if (TimeUp)
//	{
//		DrawText(TEXT("タイムアップ！"), FColor::Red, 500, 300, Font, 3.0f);
//	}
//}
//
