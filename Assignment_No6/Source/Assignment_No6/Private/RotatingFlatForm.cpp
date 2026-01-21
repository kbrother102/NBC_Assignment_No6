// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingFlatForm.h"

// Sets default values
ARotatingFlatForm::ARotatingFlatForm()
	:bIsStop(false)
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARotatingFlatForm::BeginPlay()
{
	Super::BeginPlay();
	
	
}



// Called every frame
void ARotatingFlatForm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FRotator CurRot = GetActorRotation();
	//if (FMath::Abs(CurRot.Pitch) > 5.f)
	//{
	//	bCanStop = true;
	//}
	//
	//if (bCanStop ==true && FMath::IsNearlyZero(CurRot.Pitch, 3.f) && bIsStop == false) //
	//{
	//	
	//	bIsStop = true;
	//	
	//	StopTime = RTimer;
	//	
	//	bCanStop = false;
	//}
	//if (bIsStop == true) // 타이머
	//{
	//	StopTime -= DeltaTime;
	//	if (StopTime < 0)
	//	{
	//		bIsStop = false;
	//		RotDirection *= -1;
	//	}
	//}
	//if (bIsStop == false)
	//{
	//	FRotator AddRot = RotDirection * RotSpeed * DeltaTime;
	//	AddActorLocalRotation(AddRot);
	//}


	//****************************************
	//FTimerHandle과 SetTimer를 이용한 회전 구현
	//****************************************
	FRotator CurRot = GetActorRotation();

	

	if(bIsStop ==true)
	{
		return;
	}

	if (bIsStop == false)
	{
		FRotator AddRot = RotDirection * RotSpeed * DeltaTime;
		AddActorLocalRotation(AddRot);
	}

	if(FMath::IsNearlyZero(CurRot.Pitch, RotSpeed * DeltaTime) && bIsStop == false && bCanStop==true)
	{
		bIsStop = true;
		bCanStop = false;
		GetWorld()->GetTimerManager().SetTimer(Resting, this,
			&ARotatingFlatForm::Resuming, RTimer, false);
		if (RotDirection.Pitch < 0)
		{
			SetActorRotation(FRotator(180, 0 , 0));
		}
		else if (RotDirection.Pitch > 0)
		{
			SetActorRotation(FRotator(0, 0, 0));
		}
	}
	//짐벌락............
	if (FMath::Abs(CurRot.Pitch) > 5.f)
	{
		bCanStop = true;
	}

}

void ARotatingFlatForm::Resuming()
{
	RotDirection *= -1;
	bIsStop = false;
	
	GetWorld()->GetTimerManager().ClearTimer(Resting);
	//AddActorLocalRotation(RotDirection * RotSpeed * 0.001);
}