// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGamePlayInterface.h"
#include "SItemChest.generated.h"


class UStaticMeshComponent;



UCLASS()
class ACTIONROGUELIKE_API ASItemChest : public AActor, public ISGamePlayInterface
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		float TargetPitch;

	void Interact_Implementation(APawn* InstigatorPawn);


protected:
	//作用，每当这个函数变化，我们可以让unreal去调用一个函数如下就是调用了 ORLO这个函数，同时 这个函数必须是UFUNCTION（）
	UPROPERTY(ReplicatedUsing = "OnRep_LidOpened", BlueprintReadOnly) //RepNotify
	bool bLidOpened;

	UFUNCTION()//必须标记不然Unreal就不知道去哪里找到这个函数了
	void OnRep_LidOpened();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* LidMesh;

public:	
	// Sets default values for this actor's properties
	ASItemChest();

};
