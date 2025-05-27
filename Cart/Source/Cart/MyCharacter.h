#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MyCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UCameraComponent;
class USoundBase;
class AToy;
class AMotherCharacter;

UCLASS()
class CART_API AMyCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AMyCharacter();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

    // ���̓A�N�V����
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* IMC_Player;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* MoveAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* LookAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* JumpAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* SpeedBoostAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* AttachToyAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* HoldYAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* YAction;


    // �J����
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* FollowCamera;

    // �X�s�[�h�ݒ�
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float NormalSpeed = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float BoostedSpeed = 900.0f;

    // ��������֘A
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Toy")
    float ToyAttachDistance = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Toy")
    TArray<AActor*> AttachedToys;

    // ��
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
    USoundBase* CollisionSound;

    // ��ԊǗ�
    bool bIsSpeedBoosted = false;
    bool bIsHoldingY = false;
    float HoldTime = 3.0f;
    FTimerHandle MovementDisableTimer;
    FTimerHandle HoldTimerHandle;

    // �ړ��Ǝ��_����
    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);
    void StartSpeedBoost();
    void StopSpeedBoost();

    // ��������̑���/���O��
    void HandleAttachToy();
    void UpdateAttachedToyPosition();
    void UpdateSpeedByTotalWeight();
    float CalculateSpeedWithWeight(float BaseSpeed) const;
    void UpdateMovementSpeed();

    // �ړ�����
    void DisableMovementForSeconds(float Seconds);
    void EnableMovement();

    // Y�{�^���������֘A
    void OnHoldYStart();
    void OnHoldYEnd();
    void TryTransferToysToMother();
    bool IsLookingAtMother(AActor*& OutMotherActor);

    // Timer�ɂ�钷��������
    FTimerHandle YButtonHoldTimer;
    bool bIsHoldingYButton = false;

    void OnYPressed();
    void OnYReleased();
};