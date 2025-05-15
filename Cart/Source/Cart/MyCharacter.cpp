#include "MyCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"


#include "Camera/CameraComponent.h"

#include "Components/CapsuleComponent.h"

#include "Sound/SoundBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Toy.h"


AMyCharacter::AMyCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // カメラコンポーネントの生成と初期化
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(GetCapsuleComponent());
    FollowCamera->bUsePawnControlRotation = true;
}

void AMyCharacter::BeginPlay()
{
    Super::BeginPlay();

  /*  if (!FollowCamera)
    {
        UE_LOG(LogTemp, Error, TEXT("FollowCamera is NULL!"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("FollowCamera is OK: %s"), *FollowCamera->GetName());
    }*/



    // 歩行速度を通常スピードに設定
    GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;

    // Enhanced Inputのセットアップ（プレイヤーに入力マッピングを追加）
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(IMC_Player, 0);
        }
    }

    // 滑りやすさとブレーキに関するパラメータ調整（慣性の演出用）
    GetCharacterMovement()->BrakingFrictionFactor = 0.3f; // ← 低いほど慣性強め
    GetCharacterMovement()->BrakingDecelerationWalking = 150.f; // ← 減速の強さ（小さいほど滑る）
    GetCharacterMovement()->GroundFriction = 0.6f; // 滑りやすさ（小さくするともっと滑る）
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Enhanced Input のアクションバインディング
    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        // 移動
        EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
        // 視点操作
        EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
        // ジャンプ開始
        EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
        // ジャンプ終了
        EnhancedInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
        // ダッシュ開始
        EnhancedInput->BindAction(SpeedBoostAction, ETriggerEvent::Started, this, &AMyCharacter::StartSpeedBoost);
        // ダッシュ終了
        EnhancedInput->BindAction(SpeedBoostAction, ETriggerEvent::Completed, this, &AMyCharacter::StopSpeedBoost);
        // おもちゃの装着／取り外し
        EnhancedInput->BindAction(AttachToyAction, ETriggerEvent::Started, this, &AMyCharacter::HandleAttachToy);
    }
}

void AMyCharacter::Move(const FInputActionValue& Value)
{
    // 入力ベクトルを取得して、前後・左右に移動
    FVector2D MovementVector = Value.Get<FVector2D>();
    if (Controller && (MovementVector != FVector2D::ZeroVector))
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        AddMovementInput(Forward, MovementVector.Y); // 前後移動
        AddMovementInput(Right, MovementVector.X); // 左右移動
    }
}

void AMyCharacter::Look(const FInputActionValue& Value)
{
    // 視点操作（マウス・スティックによるカメラの回転）
    FVector2D LookAxisVector = Value.Get<FVector2D>();
    if (Controller)
    {
        AddControllerYawInput(LookAxisVector.X); // 左右回転
        AddControllerPitchInput(LookAxisVector.Y); // 上下回転
    }
}

void AMyCharacter::StartSpeedBoost()
{
    // ダッシュ状態にする
    bIsSpeedBoosted = true;
    UpdateMovementSpeed();
}

void AMyCharacter::StopSpeedBoost()
{
    // 通常速度に戻す
    bIsSpeedBoosted = false;
    UpdateMovementSpeed();
}

void AMyCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    //CPUにぶつかった場合の処理
    if (OtherActor && OtherActor != this && OtherActor->ActorHasTag("CPU"))
    {
        // 音を鳴らす
        if (CollisionSound)
        {
            UGameplayStatics::PlaySoundAtLocation(this, CollisionSound, GetActorLocation());
        }

        // 3秒間動けなくする
        DisableMovementForSeconds(3.0f);
    }
}

void AMyCharacter::DisableMovementForSeconds(float Seconds)
{
    // プレイヤーの操作と移動を一時的に無効にする
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (PC)
    {
        DisableInput(PC); // 入力無効
    }

    GetCharacterMovement()->DisableMovement(); // 物理的な動きも停止

    // タイマーで再開
    GetWorldTimerManager().SetTimer(MovementDisableTimer, this, &AMyCharacter::EnableMovement, Seconds, false);
}

void AMyCharacter::EnableMovement()
{
    // プレイヤーの操作と移動を再度有効にする
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (PC)
    {
        EnableInput(PC); // 入力有効
    }

    GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking); // 動き復活
}

// === Toy 関連 ===

void AMyCharacter::HandleAttachToy()
{
    //// 既におもちゃが装着されている場合は取り外す
    //if (AttachedToy)
    //{
    //    AttachedToy->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    //    AttachedToy = nullptr;
    //    return;
    //}

    // カメラが存在しない場合は何もしない
    if (!FollowCamera) return;

    // カメラの前方にレイを飛ばしてToyを探す
    FVector Start = FollowCamera->GetComponentLocation();
    FVector End = Start + FollowCamera->GetForwardVector() * ToyAttachDistance;

    // === ★ デバッグラインを描画 ===
    DrawDebugLine(
        GetWorld(),
        Start,
        End,
        FColor::Green,
        false,       // 永続ではない（デフォルト数秒表示）
        2.0f,        // 表示時間（秒）
        0,
        2.0f         // 線の太さ
    );

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this); // 自分は無視

    if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
    {
        AActor* HitActor = Hit.GetActor();

        if (HitActor && HitActor->ActorHasTag("Toy"))
        {
            if (AttachedToys.Contains(HitActor))
            {
                HitActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
                AttachedToys.Remove(HitActor);
            }
            else
            {
                AttachedToys.Add(HitActor);
            }

            UpdateMovementSpeed(); // ← 速度更新
        }
    }
}

void AMyCharacter::UpdateAttachedToyPosition()
{
    if (!FollowCamera) return;

    const FVector BaseLocation = FollowCamera->GetComponentLocation();
    const FVector Forward = FollowCamera->GetForwardVector();

    for (int32 i = 0; i < AttachedToys.Num(); ++i)
    {
        AActor* Toy = AttachedToys[i];
        if (Toy)
        {
            // Y方向に並べつつ、Z方向に -20 下げる
            FVector Offset = FVector(0, i * 30.0f, -20.0f);
            FVector TargetLocation = BaseLocation + Forward * 100.0f + Offset;
            Toy->SetActorLocation(TargetLocation);
        }
    }
}

void AMyCharacter::UpdateSpeedByTotalWeight()
{
    float TotalWeight = 0.0f;

    for (AActor* Toy : AttachedToys)
    {
        if (AToy* ToyActor = Cast<AToy>(Toy))
        {
            TotalWeight += ToyActor->Weight;
        }
    }

    float SpeedFactor = FMath::Max(1.0f + TotalWeight, 1.0f);
    float NewSpeed = NormalSpeed / SpeedFactor;

    GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
    UE_LOG(LogTemp, Warning, TEXT("Total Toy Weight: %.2f | Speed: %.2f"), TotalWeight, NewSpeed);
}

void AMyCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    UpdateAttachedToyPosition();
}

float AMyCharacter::CalculateSpeedWithWeight(float BaseSpeed) const
{
    float TotalWeight = 0.0f;

    for (AActor* Toy : AttachedToys)
    {
        if (const AToy* ToyActor = Cast<AToy>(Toy))
        {
            TotalWeight += ToyActor->Weight;
        }
    }

    float AdjustedSpeed = BaseSpeed / FMath::Max(TotalWeight, 1.0f);
    return FMath::Max(AdjustedSpeed, 200.0f); // 最低速度
}

void AMyCharacter::UpdateMovementSpeed()
{
    float BaseSpeed = bIsSpeedBoosted ? BoostedSpeed : NormalSpeed;
    float AdjustedSpeed = CalculateSpeedWithWeight(BaseSpeed);
    GetCharacterMovement()->MaxWalkSpeed = AdjustedSpeed;
}