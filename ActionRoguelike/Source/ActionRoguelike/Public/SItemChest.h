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
	//���ã�ÿ����������仯�����ǿ�����unrealȥ����һ���������¾��ǵ����� ORLO���������ͬʱ �������������UFUNCTION����
	UPROPERTY(ReplicatedUsing = "OnRep_LidOpened", BlueprintReadOnly) //RepNotify
	bool bLidOpened;

	UFUNCTION()//�����ǲ�ȻUnreal�Ͳ�֪��ȥ�����ҵ����������
	void OnRep_LidOpened();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* LidMesh;

public:	
	// Sets default values for this actor's properties
	ASItemChest();

};
