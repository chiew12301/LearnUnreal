// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Http.h"
#include "LearnUnrealGameMode.generated.h"

UCLASS(minimalapi)
class ALearnUnrealGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALearnUnrealGameMode();

	virtual void StartPlay() override;
private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
};



