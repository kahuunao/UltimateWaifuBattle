// Fill out your copyright notice in the Description page of Project Settings.

#include "WaifuCharacter.h"

// Sets default values
AWaifuCharacter::AWaifuCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWaifuCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWaifuCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWaifuCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

