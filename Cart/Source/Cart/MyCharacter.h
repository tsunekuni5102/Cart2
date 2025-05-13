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

    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
  /*  virtual void Tick(float DeltaTime) override;*/

protected:
    // 入力アクション
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* LookAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* JumpAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* SpeedBoostAction;

    // 入力マッピングコンテキスト
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputMappingContext* IMC_Player;

    // 移動速度
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float NormalSpeed = 600.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float BoostedSpeed = 2400.f;

    // スピードブーストフラグ
    bool bIsSpeedBoosted = false;

    // 入力関数
    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);
    void StartSpeedBoost();
    void StopSpeedBoost();
};