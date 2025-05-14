#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MyCharacter.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class CART_API AMyCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AMyCharacter();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);
    void StartSpeedBoost();
    void StopSpeedBoost();

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

    // --- スピード制御 ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float NormalSpeed = 600.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float BoostedSpeed = 30000.f;

    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

    UPROPERTY(EditAnywhere, Category = "Sound")
    USoundBase* CollisionSound;

    bool bIsSpeedBoosted = false;
};