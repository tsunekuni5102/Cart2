#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MyCharacter.generated.h"

class USoundBase;
class UInputMappingContext;
class UInputAction;
class UCameraComponent;


UCLASS()
class CART_API AMyCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AMyCharacter();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);
    void StartSpeedBoost();
    void StopSpeedBoost();
    void HandleAttachToy();
    void UpdateAttachedToyPosition();
    void UpdateSpeedByTotalWeight();
    void UpdateMovementSpeed();

    float CalculateSpeedWithWeight(float BaseSpeed) const;

    UPROPERTY()
    TArray<AActor*> AttachedToys;

    //// Toyアタッチ処理用
    //UPROPERTY()
    //AActor* AttachedToy = nullptr;

    UPROPERTY(EditAnywhere, Category = "Toy")
    float ToyAttachDistance = 500.0f;

    // プレイヤーのカメラ（BPでアサインする）
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera")
    UCameraComponent* FollowCamera;

    // --- 入力を無効にする処理 ---
    void DisableMovementForSeconds(float Seconds);
    void EnableMovement();
    FTimerHandle MovementDisableTimer;

    // --- Enhanced Input 関連 ---
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

    //UPROPERTY()
    //TArray<AActor*> AttachedToys;
    // --- スピード制御 ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float NormalSpeed = 1200.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float BoostedSpeed = 2400.f;

    UPROPERTY(EditAnywhere, Category = "Sound")
    USoundBase* CollisionSound;

    bool bIsSpeedBoosted = false;
};