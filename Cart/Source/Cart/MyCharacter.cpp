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

    // �J�����R���|�[�l���g�̐����Ə�����
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



    // ���s���x��ʏ�X�s�[�h�ɐݒ�
    GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;

    // Enhanced Input�̃Z�b�g�A�b�v�i�v���C���[�ɓ��̓}�b�s���O��ǉ��j
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(IMC_Player, 0);
        }
    }

    // ����₷���ƃu���[�L�Ɋւ���p�����[�^�����i�����̉��o�p�j
    GetCharacterMovement()->BrakingFrictionFactor = 0.3f; // �� �Ⴂ�قǊ�������
    GetCharacterMovement()->BrakingDecelerationWalking = 150.f; // �� �����̋����i�������قǊ���j
    GetCharacterMovement()->GroundFriction = 0.6f; // ����₷���i����������Ƃ����Ɗ���j
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Enhanced Input �̃A�N�V�����o�C���f�B���O
    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        // �ړ�
        EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
        // ���_����
        EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
        // �W�����v�J�n
        EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
        // �W�����v�I��
        EnhancedInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
        // �_�b�V���J�n
        EnhancedInput->BindAction(SpeedBoostAction, ETriggerEvent::Started, this, &AMyCharacter::StartSpeedBoost);
        // �_�b�V���I��
        EnhancedInput->BindAction(SpeedBoostAction, ETriggerEvent::Completed, this, &AMyCharacter::StopSpeedBoost);
        // ��������̑����^���O��
        EnhancedInput->BindAction(AttachToyAction, ETriggerEvent::Started, this, &AMyCharacter::HandleAttachToy);
    }
}

void AMyCharacter::Move(const FInputActionValue& Value)
{
    // ���̓x�N�g�����擾���āA�O��E���E�Ɉړ�
    FVector2D MovementVector = Value.Get<FVector2D>();
    if (Controller && (MovementVector != FVector2D::ZeroVector))
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        AddMovementInput(Forward, MovementVector.Y); // �O��ړ�
        AddMovementInput(Right, MovementVector.X); // ���E�ړ�
    }
}

void AMyCharacter::Look(const FInputActionValue& Value)
{
    // ���_����i�}�E�X�E�X�e�B�b�N�ɂ��J�����̉�]�j
    FVector2D LookAxisVector = Value.Get<FVector2D>();
    if (Controller)
    {
        AddControllerYawInput(LookAxisVector.X); // ���E��]
        AddControllerPitchInput(LookAxisVector.Y); // �㉺��]
    }
}

void AMyCharacter::StartSpeedBoost()
{
    // �_�b�V����Ԃɂ���
    bIsSpeedBoosted = true;
    UpdateMovementSpeed();
}

void AMyCharacter::StopSpeedBoost()
{
    // �ʏ푬�x�ɖ߂�
    bIsSpeedBoosted = false;
    UpdateMovementSpeed();
}

void AMyCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    //CPU�ɂԂ������ꍇ�̏���
    if (OtherActor && OtherActor != this && OtherActor->ActorHasTag("CPU"))
    {
        // ����炷
        if (CollisionSound)
        {
            UGameplayStatics::PlaySoundAtLocation(this, CollisionSound, GetActorLocation());
        }

        // 3�b�ԓ����Ȃ�����
        DisableMovementForSeconds(3.0f);
    }
}

void AMyCharacter::DisableMovementForSeconds(float Seconds)
{
    // �v���C���[�̑���ƈړ����ꎞ�I�ɖ����ɂ���
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (PC)
    {
        DisableInput(PC); // ���͖���
    }

    GetCharacterMovement()->DisableMovement(); // �����I�ȓ�������~

    // �^�C�}�[�ōĊJ
    GetWorldTimerManager().SetTimer(MovementDisableTimer, this, &AMyCharacter::EnableMovement, Seconds, false);
}

void AMyCharacter::EnableMovement()
{
    // �v���C���[�̑���ƈړ����ēx�L���ɂ���
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (PC)
    {
        EnableInput(PC); // ���͗L��
    }

    GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking); // ��������
}

// === Toy �֘A ===

void AMyCharacter::HandleAttachToy()
{
    //// ���ɂ������Ⴊ��������Ă���ꍇ�͎��O��
    //if (AttachedToy)
    //{
    //    AttachedToy->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    //    AttachedToy = nullptr;
    //    return;
    //}

    // �J���������݂��Ȃ��ꍇ�͉������Ȃ�
    if (!FollowCamera) return;

    // �J�����̑O���Ƀ��C���΂���Toy��T��
    FVector Start = FollowCamera->GetComponentLocation();
    FVector End = Start + FollowCamera->GetForwardVector() * ToyAttachDistance;

    // === �� �f�o�b�O���C����`�� ===
    DrawDebugLine(
        GetWorld(),
        Start,
        End,
        FColor::Green,
        false,       // �i���ł͂Ȃ��i�f�t�H���g���b�\���j
        2.0f,        // �\�����ԁi�b�j
        0,
        2.0f         // ���̑���
    );

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this); // �����͖���

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

            UpdateMovementSpeed(); // �� ���x�X�V
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
            // Y�����ɕ��ׂAZ������ -20 ������
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
    return FMath::Max(AdjustedSpeed, 200.0f); // �Œᑬ�x
}

void AMyCharacter::UpdateMovementSpeed()
{
    float BaseSpeed = bIsSpeedBoosted ? BoostedSpeed : NormalSpeed;
    float AdjustedSpeed = CalculateSpeedWithWeight(BaseSpeed);
    GetCharacterMovement()->MaxWalkSpeed = AdjustedSpeed;
}