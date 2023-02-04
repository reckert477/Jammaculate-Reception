// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "JammaculateReceptionGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class JAMMACULATERECEPTION_API AJammaculateReceptionGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	void InitGameState() override;

};


