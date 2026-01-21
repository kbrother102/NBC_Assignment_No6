// Fill out your copyright notice in the Description page of Project Settings.


#include "KHBLevelScriptActor.h"
#include "MovingFlatform.h"
void AKHBLevelScriptActor::BeginPlay()
{
    //float RandX = FMath::FRandRange(-300.f, 850.f);
    //float RandY = FMath::FRandRange(1170.f, 1750.f);
    //FVector RandLocation = FVector(RandX, RandY, 0);
    
    
    for (int i = 0; i < 10; i++)
    {
        float RandX = FMath::FRandRange(-300.f, 850.f);
        float RandY = FMath::FRandRange(1170.f, 1750.f);
        FVector RandLocation = FVector(RandX, RandY, 0);
        AMovingFlatform* RandomFlatform = GetWorld()->SpawnActor<AMovingFlatform>(Movingclass, RandLocation, FRotator(0));
        RandomFlatform->Initial();
        
    }


    
}
