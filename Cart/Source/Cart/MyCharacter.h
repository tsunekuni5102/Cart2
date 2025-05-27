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

    // 入力アクション
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


    // カメラ
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* FollowCamera;

    // スピード設定
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float NormalSpeed = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float BoostedSpeed = 900.0f;

    // おもちゃ関連
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Toy")
    float ToyAttachDistance = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Toy")
    TArray<AActor*> AttachedToys;

    // 音
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
    USoundBase* CollisionSound;

    // 状態管理
    bool bIsSpeedBoosted = false;
    bool bIsHoldingY = false;
    float HoldTime = 3.0f;
    FTimerHandle MovementDisableTimer;
    FTimerHandle HoldTimerHandle;

    // 移動と視点操作
    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);
    void StartSpeedBoost();
    void StopSpeedBoost();

    // おもちゃの装着/取り外し
    void HandleAttachToy();
    void UpdateAttachedToyPosition();
    void UpdateSpeedByTotalWeight();
    float CalculateSpeedWithWeight(float BaseSpeed) const;
    void UpdateMovementSpeed();

    // 移動制御
    void DisableMovementForSeconds(float Seconds);
    void EnableMovement();

    // Yボタン長押し関連
    void OnHoldYStart();
    void OnHoldYEnd();
    void TryTransferToysToMother();
    bool IsLookingAtMother(AActor*& OutMotherActor);

    // Timerによる長押し処理
    FTimerHandle YButtonHoldTimer;
    bool bIsHoldingYButton = false;

    void OnYPressed();
    void OnYReleased();
};