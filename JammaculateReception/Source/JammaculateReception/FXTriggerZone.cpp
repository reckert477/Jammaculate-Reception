// Fill out your copyright notice in the Description page of Project Settings.


#include "FXTriggerZone.h"

// Sets default values
AFXTriggerZone::AFXTriggerZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	RootComponent = Collider;

	XYOrientation = true;
	// Size of sprite in pixels times 10
	XOffset = -31250;
	YOffset = 25000;
	SpawnDepth = -10000;

	Transitioning = false;

}

// Called when the game starts or when spawned
void AFXTriggerZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFXTriggerZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

