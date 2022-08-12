// Fill out your copyright notice in the Description page of Project Settings.


#include "SAttributeComponent.h"
#include "SGameModeBase.h"
#include "Net/UnrealNetwork.h"

static TAutoConsoleVariable<float> CVarDamageMultiplier(TEXT("su.DamageMultiplier"), 1.0f, TEXT("Gloabal Damage Modifier for Attribute Component."), ECVF_Cheat);

// Sets default values for this component's properties
USAttributeComponent::USAttributeComponent()
{
	MaxHealth = 100.0f;

	Health = MaxHealth;

	Mana = 50.0f;

	MaxMana = 100.0f;

	SetIsReplicatedByDefault(true);
}

bool USAttributeComponent::Kill(AActor* InstigatorActor)
{
	return ApplyHealthChange(InstigatorActor, -GetHealthMax());
}

bool USAttributeComponent::IsAlive() const
{
	return Health > 0.0f;
}

bool USAttributeComponent::IsFullHealth() const
{
	return Health == MaxHealth;
}

float USAttributeComponent::GetHealthMax() const
{
	return MaxHealth;
}

float USAttributeComponent::GetHealth() const
{
	return Health;
}

bool USAttributeComponent::ApplyHealthChange(AActor* InstigatorActor, float Delta)
{

	if (!GetOwner()->CanBeDamaged() && Delta < 0.0f)
	{
		return false;
	}

	if (Delta < 0.0f)
	{
		float DamageMultiplier = CVarDamageMultiplier.GetValueOnGameThread();

		Delta *= DamageMultiplier;
	}

	float OldHealth = Health;
	float NewHealth = FMath::Clamp(Health + Delta, 0.0f, MaxHealth);//引入新变量让我们在本地计算伤害

	float ActualDelta = NewHealth - OldHealth;//检查我们的delta 看我们是否需要做出改变

	if (GetOwner()->HasAuthority())//我们改变只能在服务端改变
	{
		Health = NewHealth;
		if (ActualDelta != 0.0f)
		{
			//OnHealthChanged.Broadcast(InstigatorActor, this, Health, ActualDelta);
			MulticastHealthChanged(InstigatorActor, Health, ActualDelta);
		}

		//Died
		if (ActualDelta < 0.0f && Health == 0.0f)
		{
			ASGameModeBase* SGM = GetWorld()->GetAuthGameMode<ASGameModeBase>();//gamemode只在服务端有
			if (SGM)
			{
				SGM->OnActorKilled(GetOwner(), InstigatorActor);
			}
		}
	}

	return ActualDelta != 0;
}

float USAttributeComponent::GetMana() const
{
	return Mana;
}

bool USAttributeComponent::ApplyManaChange(AActor* InstigatorActor, float Delta)
{
	float OlaMana = Mana;
	
	Mana = FMath::Clamp(Mana + Delta, 0.0f, MaxMana);

	float ActualDelta = Mana - OlaMana;
	if (ActualDelta != 0.0f)
	{
		OnManaChanged.Broadcast(InstigatorActor, this, Mana, ActualDelta);
	}

	return ActualDelta != 0.0f;
}

USAttributeComponent* USAttributeComponent::GetAttributes(AActor* FromActor)
{
	if (FromActor)
	{
		return Cast<USAttributeComponent>(FromActor->GetComponentByClass(USAttributeComponent::StaticClass()));
	}

	return nullptr;
}

bool USAttributeComponent::IsActorAlive(AActor* Actor)
{
	USAttributeComponent* AttributeComponent = USAttributeComponent::GetAttributes(Actor);
	if (AttributeComponent)
	{
		return AttributeComponent->IsAlive();
	}
	return false;
}


void USAttributeComponent::MulticastHealthChanged_Implementation(AActor* InstigatorActor, float NewHealth, float Delta)
{
	OnHealthChanged.Broadcast(InstigatorActor, this, NewHealth, Delta);
}

void USAttributeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USAttributeComponent, Health);
	DOREPLIFETIME(USAttributeComponent, MaxHealth);
	//这个意思是当maxhealth变化时只有owner才能看见他的变化 作用可以优化
	//DOREPLIFETIME_CONDITION(USAttributeComponent, MaxHealth, COND_OwnerOnly);
}