// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"

#include "FXTriggerZone.generated.h"

UCLASS()
class JAMMACULATERECEPTION_API AFXTriggerZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFXTriggerZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* Collider;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AActor> PostiveBG;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AActor> NegativeBG;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Orientation")
	bool XYOrientation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Orientation")
	float XOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Orientation")
	float YOffset;

	UPROPERTY(BlueprintReadWrite)
	bool Transitioning;

};
