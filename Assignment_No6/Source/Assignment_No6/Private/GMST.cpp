// Fill out your copyright notice in the Description page of Project Settings.


#include "GMST.h"
#include "KHBCharacter.h"
#include "KHBPlayerController.h"

AGMST::AGMST()
{
    DefaultPawnClass = AKHBCharacter::StaticClass();
    PlayerControllerClass = AKHBPlayerController::StaticClass();
}
