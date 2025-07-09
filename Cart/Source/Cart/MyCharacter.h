#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ToyGoalManager.h"
#include "InputActionValue.h"
#include "MyCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UCameraComponent;
class USoundBase;
class AToy;
class AMotherCharacter;

class UToyGoalListWidget;
class AToyGoalManager;

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

    // 無敵状態
    UPROPERTY(BlueprintReadOnly, Category = "State")
    bool bIsInvincible = false;

    // カメラ
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* FollowCamera;

    // スピード設定
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float NormalSpeed = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float BoostedSpeed = 1800.0f;

    // おもちゃ関連
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Toy")
    float ToyAttachDistance = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Toy")
    TArray<AActor*> AttachedToys;

    // 音
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
    USoundBase* CollisionSound;

    // UI
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UToyGoalListWidget> ToyGoalWidgetClass;

    UPROPERTY()
    UToyGoalListWidget* ToyGoalWidgetInstance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ToyGoal")
    AToyGoalManager* ToyGoalManagerInstance;

    // 状態管理
    bool bIsSpeedBoosted = false;
    bool bIsHoldingY = false;
    float HoldTime = 3.0f;
    FTimerHandle MovementDisableTimer;
    FTimerHandle HoldTimerHandle;
    FTimerHandle InvincibleTimerHandle;

    // 移動
    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);
    void StartSpeedBoost();
    void StopSpeedBoost();

    // おもちゃ
    void HandleAttachToy();
    void UpdateAttachedToyPosition();
    void UpdateSpeedByTotalWeight();
    float CalculateSpeedWithWeight(float BaseSpeed) const;
    void UpdateMovementSpeed();

    // 移動制御
    void DisableMovementForSeconds(float Seconds);
    void EnableMovement();

    // 無敵
    void StartInvincibility(float Duration);
    void EndInvincibility();

    // Yボタン
    void OnHoldYStart();
    void OnHoldYEnd();
    void TryTransferToysToMother();
    bool IsLookingAtMother(AActor*& OutMotherActor);

    FTimerHandle YButtonHoldTimer;
    bool bIsHoldingYButton = false;

    void OnYPressed();
    void OnYReleased();
};