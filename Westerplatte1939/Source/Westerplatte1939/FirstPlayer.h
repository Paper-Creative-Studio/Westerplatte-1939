// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "firstplayer.generated.h"

UCLASS()
class WESTERPLATTE1939_API Afirstplayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Afirstplayer();
	
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
};
