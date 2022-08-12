// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SAICharacter.generated.h"

class UUserWidget;

UCLASS()
class ACTIONROGUELIKE_API ASAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASAICharacter();

protected:

	class USWorldUserWidget* ActiveHealthBar;

	//AI受到攻击时显示的材料
	UPROPERTY(VisibleAnywhere, Category = "Effects")
		FName TimeToHitParamName;

	/* Key for AI Blackboard 'TargetActor' */
	UPROPERTY(VisibleAnywhere, Category = "Effects")
		FName TargetActorKey;

	UPROPERTY(EditDefaultsOnly, Category = "UI")//1
		TSubclassOf<UUserWidget> HealthBarWidgetClass;

	//当AI第一次看见玩家时会显示的窗口
	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<UUserWidget> SpottedWidgetClass;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class UPawnSensingComponent* PawnSensingComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USAttributeComponent* AttributeComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USActionComponent* ActionComp;

	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetTargetActor(AActor* NewTarget);

	UFUNCTION(BlueprintCallable, Category = "AI")
		AActor* GetTargetActor() const;

	virtual void PostInitializeComponents() override;

	UFUNCTION()
		void OnPawnSeen(APawn* Pawn);

	UFUNCTION()
		void OnHealthChanged(AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta);

};
