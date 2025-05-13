#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TitleMenuWidget.generated.h"

UCLASS()
class CART_API UTitleMenuWidget : public UUserWidget
{
    GENERATED_BODY()

protected:

    UFUNCTION()
    void OnStartClicked();

    UFUNCTION()
    void OnQuitClicked();

    UPROPERTY(meta = (BindWidget))
    class UButton* StartButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* QuitButton;

public:
    virtual void NativeConstruct() override;

};
