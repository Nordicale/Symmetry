// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SimCharacter.h"

// Sets default values
ASimCharacter::ASimCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASimCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASimCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASimCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

