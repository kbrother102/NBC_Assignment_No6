// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "KHBCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class ASSIGNMENT_NO6_API AKHBCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKHBCharacter();

	//스프링암과 카메라 달기
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION() // 에디터에 존재만 알려주기
	void Move(const FInputActionValue& value); // 입력 밸류 타입( 1D, 2D,...)
	UFUNCTION()
	void StartJump(const FInputActionValue& value);  // 딸깍은 왠만하면 눌렀을때와 뗐을때 나눠주기
	UFUNCTION()
	void StopJump(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void StartSprint(const FInputActionValue& value);
	UFUNCTION()
	void StopSprint(const FInputActionValue& value);

private:
	float NormalSpeed;
	float SprintSpeedMultiplier;
	float SprintSpeed;
	float SprintAvailableTime;
	float SprintCooldown;
	bool bIsSprint;
};
