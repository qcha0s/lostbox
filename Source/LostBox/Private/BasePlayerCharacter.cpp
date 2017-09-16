// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayerCharacter.h"


// Sets default values
ABasePlayerCharacter::ABasePlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasePlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Calculate Health Function
void ABasePlayerCharacter::CalculateHealth(float Delta)
{
	Health += Delta;
	CalculateDead();
}

// Calculate Dead Function
void ABasePlayerCharacter::CalculateDead()
{
	if (Health <= 0)
		isDead = true;
	else
		isDead = false;
}

// PostEditChangeProperty

#if WITH_EDITOR
void ABasePlayerCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	isDead = false;
	Health = 100;
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// did the changes kill this character?
	CalculateDead();
}


#endif