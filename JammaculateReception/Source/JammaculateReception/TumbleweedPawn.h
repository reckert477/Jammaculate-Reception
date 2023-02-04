// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "PaperSpriteComponent.h"

#include "TumbleweedPlayerController.h"

#include "TumbleweedPawn.generated.h"

UCLASS()
class JAMMACULATERECEPTION_API ATumbleweedPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATumbleweedPawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float RotationalSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float DriftSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float MaxRotationalSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float MaxVelocity;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	virtual void MoveByRotate(float Value);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		UPaperSpriteComponent* PlayerSprite;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		UCapsuleComponent* Collider;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	

	//UPROPERTY(EditDefaultsOnly)
	//UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere, Category = "Input")
	TSoftObjectPtr<UInputMappingContext> InputMapping;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* IA_MoveByRotate;

};
