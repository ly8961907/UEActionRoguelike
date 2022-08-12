// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SInteractionComponent.generated.h"

class USWorldUserWidget;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONROGUELIKE_API USInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	void PrimaryInteract();

protected:

	//	Reliable - will always arrive eventually, request will be re sent unless be acknowledgment was received
	// 就像tcp ip 他会不断向他发送请求直到收到回复
	// unreliable - not guaranteed packet can get lost 
	// 就像udp 不关心是不是到达
	UFUNCTION(Server, Reliable)
	void ServerInteract(AActor * InFocus);

	void FindBestInteractable();

	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	AActor* FocusedActor;

	UPROPERTY(EditDefaultsOnly, Category = "Trace")
		float TraceDistance;

	UPROPERTY(EditDefaultsOnly, Category = "Trace")
		float TraceRadius;

	UPROPERTY(EditDefaultsOnly, Category = "Trace")
		TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<USWorldUserWidget> DefaultWidgetClass;

	UPROPERTY()
		USWorldUserWidget* DefaultWidgetInstance;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Sets default values for this component's properties
	USInteractionComponent();
		
};
