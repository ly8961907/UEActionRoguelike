// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SAICharacter.generated.h"



UCLASS()
class ACTIONROGUELIKE_API ASAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASAICharacter();

protected:

	class USWorldUserWidget* ActiveHealthBar;

	UPROPERTY(VisibleAnywhere, Category = "Effects")
		FName TimeToHitParamName;

	UPROPERTY(EditDefaultsOnly, Category = "UI")//1
		TSubclassOf<UUserWidget> HealthBarWidgetClass;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class UPawnSensingComponent* PawnSensingComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USAttributeComponent* AttributeComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USActionComponent* ActionComp;

	void SetTargetActor(AActor* NewTarget);

	virtual void PostInitializeComponents() override;


	UFUNCTION()
		void OnPawnSeen(APawn* Pawn);

	UFUNCTION()
		void OnHealthChanged(AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta);

};
