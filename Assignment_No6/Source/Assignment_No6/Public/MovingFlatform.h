// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingFlatform.generated.h"

class UBoxComponent;
UCLASS()
class ASSIGNMENT_NO6_API AMovingFlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingFlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="FlatForm|Component")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FlatForm|Component")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlatForm|Component")
	UBoxComponent* CollisionComp;

	FVector StartLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlatForm|Property")
	FVector MoveDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlatForm|Property")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlatForm|Property")
	float MaxRange;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Initial();

private:

};
