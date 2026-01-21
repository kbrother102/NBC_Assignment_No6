// Fill out your copyright notice in the Description page of Project Settings.


#include "KHBCharacter.h"
#include "KHBPlayerController.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AKHBCharacter::AKHBCharacter()
	:SprintAvailableTime(2.f),
	SprintCooldown(0.0f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300.f;
	SpringArmComp->bUsePawnControlRotation = true;


	
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	NormalSpeed = 200.f;
	SprintSpeedMultiplier = 1.7f;
	SprintSpeed = NormalSpeed * SprintSpeedMultiplier;

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;

}

// Called when the game starts or when spawned
void AKHBCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKHBCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GEngine->AddOnScreenDebugMessage(1, 1, FColor::Emerald,
		FString::Printf(TEXT("현재 : %f"), GetCharacterMovement()->MaxWalkSpeed));

	if (bIsSprint == true)
	{
		SprintAvailableTime -= DeltaTime;
		if (SprintAvailableTime < 0)
		{
			SprintAvailableTime = 0.f;
			bIsSprint = false;
			SprintCooldown = 0.4f;
		}
	}
	if (bIsSprint == false && SprintAvailableTime < 2)
	{

		SprintAvailableTime += DeltaTime * 0.5f;
		SprintCooldown -= DeltaTime*0.4;
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
		if (SprintCooldown < 0)
		{
			SprintCooldown = 0.f;
		}

		if (SprintAvailableTime > 2)
		{
			SprintAvailableTime = 2.f;
		}
	}

	GEngine->AddOnScreenDebugMessage(2, 1, FColor::Emerald,
		FString::Printf(TEXT("달리기가능 시간  %0.2f / 2"), SprintAvailableTime));
}

// Called to bind functionality to input
void AKHBCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (AKHBPlayerController* PlayerController = Cast<AKHBPlayerController>(GetController()))
		{
			//움직임
			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&AKHBCharacter::Move
				);
			}
			//점프시작
			if (PlayerController->JumpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Triggered,
					this,
					&AKHBCharacter::StartJump
				);
			}
			//점프끝
			if (PlayerController->JumpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Completed,
					this,
					&AKHBCharacter::StopJump
				);
			}
			//둘러보기
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&AKHBCharacter::Look
				);
			}
			//달리기
			if (PlayerController->SprintAction)
			{
				EnhancedInput->BindAction(
					PlayerController->SprintAction,
					ETriggerEvent::Triggered,
					this,
					&AKHBCharacter::StartSprint
				);
			}
			//달리기끝
			if (PlayerController->SprintAction)
			{
				EnhancedInput->BindAction(
					PlayerController->SprintAction,
					ETriggerEvent::Completed,
					this,
					&AKHBCharacter::StopSprint
				);
			}
		}
	}
}

void AKHBCharacter::Move(const FInputActionValue& value)
{
	if (!Controller) return;

	const FVector2D MoveInput = value.Get<FVector2D>();

	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		AddMovementInput(GetActorForwardVector(), MoveInput.X); //(방향, 크기)
	}
	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		AddMovementInput(GetActorRightVector(), MoveInput.Y); //(방향, 크기)
	}

}

void AKHBCharacter::StartJump(const FInputActionValue& value)
{
	if (value.Get<bool>())
	{
		Jump();
	}
}

void AKHBCharacter::StopJump(const FInputActionValue& value)
{
	if (!value.Get<bool>())
	{
		StopJumping();
	}
}

void AKHBCharacter::Look(const FInputActionValue& value)
{
	FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);

	//회전 확인용 로그
	//GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Black, FString::Printf(TEXT("%f / %f"), LookInput.X, LookInput.Y));
}

void AKHBCharacter::StartSprint(const FInputActionValue& value)
{
    if (SprintAvailableTime>0 && FMath::IsNearlyZero(SprintCooldown) )
    {
        if (GetCharacterMovement())
        {
            GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
			bIsSprint = true;
        }

    }


}

void AKHBCharacter::StopSprint(const FInputActionValue& value)
{
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
		bIsSprint = false;
	}
}

