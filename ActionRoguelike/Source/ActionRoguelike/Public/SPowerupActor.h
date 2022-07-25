// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGameplayInterface.h"
#include "SPowerupActor.generated.h"


UCLASS()
class ACTIONROGUELIKE_API ASPowerupActor : public AActor , public ISGamePlayInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerupActor();

	void Interact_Implementation(APawn* InstigatorPawn) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
		class USphereComponent* SphereComp;

	UPROPERTY(EditAnywhere, Category = "Powerup")
		float RespawnTime;

	UFUNCTION()
		void ShowPowerup();

	void HideAndCooldownPowerup();
		
	void SetPowerupState(bool bNewIsActive);

	FTimerHandle TimerHandle_RespawnTimer;

};
