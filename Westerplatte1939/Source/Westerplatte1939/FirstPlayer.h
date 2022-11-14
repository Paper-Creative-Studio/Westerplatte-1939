// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "FirstPlayer.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;
UCLASS()
class WESTERPLATTE1939_API AFirstPlayer : public ACharacter
{
	GENERATED_BODY()
		

public:
	// Sets default values for this character's properties
	AFirstPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	



protected:
	//funkcje
	void MoveForward(float axis);
	void MoveRight(float axis);
	void Interact();

public:
	//zmienne
	//UCameraComponent* Playercamera;
	
};
