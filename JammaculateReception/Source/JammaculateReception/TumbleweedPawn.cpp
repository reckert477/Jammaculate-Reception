// Fill out your copyright notice in the Description page of Project Settings.


#include "TumbleweedPawn.h"

// Sets default values
ATumbleweedPawn::ATumbleweedPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("PlayerSprite"));
	RootComponent = PlayerSprite;

	Collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));

	//PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));

	Collider->SetupAttachment(PlayerSprite);
	//PlayerCamera->SetupAttachment(PlayerSprite);
	
}

// Called when the game starts or when spawned
void ATumbleweedPawn::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* InputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			if (!InputMapping.IsNull())
			{
				InputSystem->AddMappingContext(InputMapping.LoadSynchronous(), 0);
			}
		}
	}
	
}

// Called every frame
void ATumbleweedPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATumbleweedPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponet = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//EnhancedInputComponet->BindAction(IA_MoveByRotate, ETriggerEvent::Triggered, this, &ATumbleweedPawn::MoveByRotate);
	}

}

void ATumbleweedPawn::MoveByRotate(float Value)
{
	//FRotator NewRotation = GetActorRotation();
	 
}

