// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

UCLASS()
class ACTIONROGUELIKE_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

protected:


	UPROPERTY(EditAnywhere, Category = "Attack")
		TSubclassOf<AActor> MagicProjectileclass;

	UPROPERTY(EditAnywhere, Category = "Attack")
		TSubclassOf<AActor> BlackholeProjectileclass;

	UPROPERTY(EditAnywhere, Category = "Attack")
		TSubclassOf<AActor> DashProjectileclass;

	UPROPERTY(EditAnywhere, Category = "Attack")
		class UAnimMontage* PrimaryAttackAnim;

	UPROPERTY(EditAnywhere, Category = "Attack")
		class UAnimMontage* BlackholeAttackAnim;

	UPROPERTY(EditAnywhere, Category = "Attack")
		class UAnimMontage* DashAttackAnim;

	/* Particle System played during attack animation */
	UPROPERTY(EditAnywhere, Category = "Attack")
		class UParticleSystem* CastingEffect;

	FTimerHandle TimerHandle_PrimaryAttack;
	FTimerHandle TimerHandle_BlackholeAttack;
	FTimerHandle TimerHandle_DashAttack;

public:

	UPROPERTY(VisibleAnywhere)
		class USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere)
		class UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere)
		class USInteractionComponent* InterationComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USAttributeComponent* AttributeComp;

	void MoveForward(float value);

	void MoveRight(float value);

	virtual void Jump() override;

	void PrimaryAttack();

	void PrimaryAttack_TimeElapsed();

	void BlackholeAttack();

	void BlackholeAttack_TimeElapsed();

	void DashAttack();

	void DashAttack_TimeElapsed();

	void StartAttackEffect(int Hand);

	void PrimaryInteract();

	// Re-use spawn logic between attacks
	void SpawnProjectile(TSubclassOf<AActor> ClassToSpawn, int Hand);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PostInitializeComponents() override;

	UFUNCTION()
		void OnHealthChanged(AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta);
};
