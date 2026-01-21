// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingFlatForm.generated.h"

struct FTimerHandle;
UCLASS()
class ASSIGNMENT_NO6_API ARotatingFlatForm : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingFlatForm();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FlatForm|Component")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FlatForm|Component")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="FlatForm|Property")
	FRotator RotDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlatForm|Property")
	float RotSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlatForm|Property")
	float RTimer;
    //float StopTime;
    bool bIsStop;
	bool bCanStop;
	
	
	FTimerHandle Resting;
private:
	void Resuming();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
