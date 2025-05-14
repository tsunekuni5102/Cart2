#include "MyCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"


AMyCharacter::AMyCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AMyCharacter::BeginPlay()
{
    Super::BeginPlay();

    GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;

    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(IMC_Player, 0);
        }
    }

    GetCharacterMovement()->BrakingFrictionFactor = 0.3f; // ← 低いほど慣性強め
    GetCharacterMovement()->BrakingDecelerationWalking = 150.f; // ← 減速の強さ（小さいほど滑る）
    GetCharacterMovement()->GroundFriction = 0.6f; // 滑りやすさ（小さくするともっと滑る）
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
        EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
        EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
        EnhancedInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
        EnhancedInput->BindAction(SpeedBoostAction, ETriggerEvent::Started, this, &AMyCharacter::StartSpeedBoost);
        EnhancedInput->BindAction(SpeedBoostAction, ETriggerEvent::Completed, this, &AMyCharacter::StopSpeedBoost);
    }
}

void AMyCharacter::Move(const FInputActionValue& Value)
{
    FVector2D MovementVector = Value.Get<FVector2D>();
    if (Controller && (MovementVector != FVector2D::ZeroVector))
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        AddMovementInput(Forward, MovementVector.Y);
        AddMovementInput(Right, MovementVector.X);
    }
}

void AMyCharacter::Look(const FInputActionValue& Value)
{
    FVector2D LookAxisVector = Value.Get<FVector2D>();
    if (Controller)
    {
        AddControllerYawInput(LookAxisVector.X);
        AddControllerPitchInput(LookAxisVector.Y);
    }
}

void AMyCharacter::StartSpeedBoost()
{
    bIsSpeedBoosted = true;
    GetCharacterMovement()->MaxWalkSpeed = BoostedSpeed;
}

void AMyCharacter::StopSpeedBoost()
{
    bIsSpeedBoosted = false;
    GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
}

void AMyCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    if (OtherActor && OtherActor != this && OtherActor->ActorHasTag("CPU") || OtherActor->ActorHasTag("SHELF"))
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
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (PC)
    {
        EnableInput(PC); // 入力有効
    }

    GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking); // 動き復活
}

//void AMyCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
//{
//    Super::NotifyActorBeginOverlap(OtherActor);
//
//    UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *OtherActor->GetName());
//
//    if (OtherActor && OtherActor != this)
//    {
//        // CPUとの衝突かどうかをチェック（タグなどで判定するのがおすすめ）
//        if (OtherActor->ActorHasTag("CPU") && CollisionSound)
//        {
//            UGameplayStatics::PlaySoundAtLocation(this, CollisionSound, GetActorLocation());
//        }
//    }
//}