// Fill out your copyright notice in the Description page of Project Settings.

#include "SMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "SAttributeComponent.h"
#include "SGameplayFunctionLibrary.h"
#include "SActionComponent.h"
#include "SActionEffect.h"

// Sets default values
ASMagicProjectile::ASMagicProjectile()//���캯��
{
	SphereComp->SetSphereRadius(20.0f);
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ASMagicProjectile::OnActorOverlap);

	DamageAmount = 20.0f;
}



void ASMagicProjectile::OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != GetInstigator())//��ֹ�������Լ��� ���Բ����Լ�����
	{

		static FGameplayTag Tag = FGameplayTag::RequestGameplayTag("Statuse.Parrying");//����static����ֻ���һ��

		USActionComponent* ActionComp = Cast<USActionComponent>(OtherActor->GetComponentByClass(USActionComponent::StaticClass()));
		if (ActionComp && ActionComp->ActiveGameplayTags.HasTag(ParryTag))
		{
			MoveComp->Velocity = -MoveComp->Velocity;//����

			SetInstigator(Cast<APawn>(OtherActor));//�����������������ӵ�

			return;
		}

		if (USGameplayFunctionLibrary::ApplyDirectionalDamage(GetInstigator(), OtherActor, DamageAmount, SweepResult))
		{
			Explode();

			if (ActionComp)
			{
				ActionComp->AddAction(GetInstigator(), BurningActionClass);
			}
		}
	}
}


