// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SExplosiveBarrel.generated.h"

UCLASS()
class ACTIONROGUELIKE_API ASExplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASExplosiveBarrel();

protected:

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* MeshComp;
	UPROPERTY(EditAnywhere)
		class URadialForceComponent* ForceComp;

	virtual void PostInitializeComponents() override;

	//�������UFUNCTION��Ϊ��Ҫ��Event��
	UFUNCTION()
		void OnActionHit(UPrimitiveComponent * HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult &Hit);
};
