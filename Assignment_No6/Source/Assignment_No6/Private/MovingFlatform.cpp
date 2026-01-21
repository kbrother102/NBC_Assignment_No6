// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingFlatform.h"
#include "Components/BoxComponent.h"
// Sets default values
AMovingFlatform::AMovingFlatform()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionComp->SetupAttachment(RootComponent);
	CollisionComp->SetCollisionProfileName("OverlapAllDynamic");
	StartLocation = GetActorLocation();
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AMovingFlatform::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
	MoveDirection = MoveDirection.GetSafeNormal();
}

// Called every frame
void AMovingFlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector CurLocation = GetActorLocation();
	float Distance = FVector::Dist(StartLocation, CurLocation);

	if (Distance >  MaxRange)
	{
		
		SetActorLocation(StartLocation + (MoveDirection * MaxRange));
		MoveDirection *= -1;
		return;
	}
	

	FVector NewLocation = CurLocation + (MoveSpeed * MoveDirection * DeltaTime);
	SetActorLocation(NewLocation);
}

void AMovingFlatform::Initial()
{
	float RandSpeed =FMath::FRandRange(25.f, 50.f);
	MoveSpeed = RandSpeed;
	float RandMaxRange = FMath::FRandRange(0.f, 100.f);
	MaxRange = 100;

	StartLocation = GetActorLocation();

	MoveDirection = FVector(FMath::RandRange(-1, 1), FMath::RandRange(-1, 1), 0);
	MoveDirection = MoveDirection.GetSafeNormal();
}

