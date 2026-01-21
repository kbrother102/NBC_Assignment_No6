// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "KHBLevelScriptActor.generated.h"


class AMovingFlatform;
/**
 * 
 */
UCLASS()
class ASSIGNMENT_NO6_API AKHBLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

protected:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="KHB")
	TSubclassOf<AMovingFlatform> Movingclass;
};
