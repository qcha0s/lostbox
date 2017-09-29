// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemyCharacter.h"


// Sets default values
ABaseEnemyCharacter::ABaseEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


// Calculate Health Function
void ABaseEnemyCharacter::CalculateHealth(float Delta)
{
	Health += Delta;
	CalculateDead();
}

// Calculate Dead Function
void ABaseEnemyCharacter::CalculateDead()
{
	if (Health <= 0)
		isDead = true;
	else
		isDead = false;
}

// PostEditChangeProperty

#if WITH_EDITOR
void ABaseEnemyCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	isDead = false;
	Health = 100;
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// did the changes kill this character?
	CalculateDead();
}


#endif