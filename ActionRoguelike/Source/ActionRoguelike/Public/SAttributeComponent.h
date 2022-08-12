// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SAttributeComponent.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChanged, AActor*, InstigatorActor, USAttributeComponent*, OwningComp, float, NewHealth, float, Delta);
// 
// Alternative: Share the same signature with generic names
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttributeChanged, AActor*, InstigatorActor, USAttributeComponent*, OwningComp, float, NewValue, float, Delta);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONROGUELIKE_API USAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	static USAttributeComponent* GetAttributes(AActor* FromActor);

	UFUNCTION(BlueprintCallable, Category = "Attributes", meta = (DisplayName = "IsAlive"))
	static bool IsActorAlive(AActor* Actor);

	USAttributeComponent();

protected:

	// EditAnywhere - edit in BP editor and per-instance in level.
	// VisibleAnywhere - 'read-only' in editor and level. (Use for Components)
	// EditDefaultsOnly - hide variable per-instance, edit in BP editor only
	// VisibleDefaultsOnly - 'read-only' access for variable, only in BP editor (uncommon)
	// EditInstanceOnly - allow only editing of instance (eg. when placed in level)
	// --
	// BlueprintReadOnly - read-only in the Blueprint scripting (does not affect 'details'-panel)
	// BlueprintReadWrite - read-write access in Blueprints
	// --
	// Category = "" - display only for detail panels and blueprint context menu.

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
		float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
		float MaxHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
		float Mana;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
		float MaxMana;

	UFUNCTION(NetMulticast, Reliable) //@FIXME :mark as unreliable once we moved the 'state' out of scharacter
	void MulticastHealthChanged(AActor* InstigatorActor, float NewHealth, float Delta);

public:	

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		bool Kill(AActor *InstigatorActor);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		bool IsAlive() const;//ÈÃº¯ÊýÖ»¿É¶Á

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		bool IsFullHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		float GetHealthMax() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		bool ApplyHealthChange(AActor * InstigatorActor, float Delta);

	UPROPERTY(BlueprintAssignable, Category = "Attributes")
		FOnAttributeChanged OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "Attributes")
		FOnAttributeChanged OnManaChanged;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		float GetMana() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		bool ApplyManaChange(AActor* InstigatorActor, float Delta);
};
