// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseEnemyCharacter.generated.h"

UCLASS()
class LOSTBOX_API ABaseEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseEnemyCharacter();
	// Give our character some health 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Characer")
		float Health = 100;

	//	 isDead Check
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Base Character")
		bool isDead = false;
	//  Calculate the Death Method
	virtual void CalculateDead();
	// Calculate The Characters Health Method
	UFUNCTION(BluePrintCallable, Category = "Base Character")
		virtual void CalculateHealth(float delta);
	// Make sure changes made in the editor are updated. 
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
