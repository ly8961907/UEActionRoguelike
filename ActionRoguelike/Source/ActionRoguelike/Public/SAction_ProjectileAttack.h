// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SAction.h"
#include "SAction_ProjectileAttack.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROGUELIKE_API USAction_ProjectileAttack : public USAction
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, Category = "Attack")
		TSubclassOf<AActor> Projectileclass;


	UPROPERTY(EditAnywhere, Category = "Attack")
		class UAnimMontage* AttackAnim;


	UPROPERTY(EditAnywhere, Category = "Attack")
		FName HandSocketName;

	/* Particle System played during attack animation */
	UPROPERTY(EditAnywhere, Category = "Attack")
		class UParticleSystem* CastingEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
		float AttackAnimDelay;

	UFUNCTION()
		void AttackDelay_Elapsed(ACharacter* InstigatorCharacter);



public:

	virtual void StartAction_Implementation(AActor* Instigator) override;

	USAction_ProjectileAttack();

};
