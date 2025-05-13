// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovableObject.generated.h"

UCLASS()
class CART_API AMovableObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovableObject();

protected:
	//// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

	// ���b�V���R���|�[�l���g
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* MeshComponent;

public:	
	//// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
