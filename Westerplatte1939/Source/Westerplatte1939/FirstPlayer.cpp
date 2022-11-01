// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPlayer.h"

// Sets default values
AFirstPlayer::AFirstPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFirstPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

// Called to bind functionality to input
void AFirstPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AFirstPlayer::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AFirstPlayer::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("TurnAround"), this, &AFirstPlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AFirstPlayer::AddControllerPitchInput);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AFirstPlayer::Jump);

}
void AFirstPlayer::MoveForward(float axis)
{
	AddMovementInput(GetActorForwardVector() * axis);
}

void AFirstPlayer::MoveRight(float axis)
{
	AddMovementInput(GetActorRightVector() * axis);
}

