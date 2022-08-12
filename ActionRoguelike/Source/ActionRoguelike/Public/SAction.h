// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SAction.generated.h"

class UWorld;

USTRUCT()
struct FActionRepData //保证数据同时到达
{
	GENERATED_BODY()

public:

	UPROPERTY()
	bool bIsRunning;
	UPROPERTY()
	AActor* Instigator;
};

/**
 * 
 */
UCLASS(Blueprintable)//必须加上让他可以被蓝图继承
class ACTIONROGUELIKE_API USAction : public UObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(Replicated)
		USActionComponent* ActionComp;

	UFUNCTION(BlueprintCallable, Category = "Action")
		USActionComponent* GetOwningComponent() const;

	UPROPERTY(EditDefaultsOnly, Category = "Tags")
		FGameplayTagContainer GrantsTags;//tags 添加 当actor被 activated，当actor stop tags被移除

	UPROPERTY(EditDefaultsOnly, Category = "Tags")
		FGameplayTagContainer BlockedTags;//检查我们是否允许去执行 action can only start if owning actor has none of these tags applied

	UPROPERTY(ReplicatedUsing="OnRep_RepData")
		//bool bIsRunning;
		FActionRepData RepData;

	UFUNCTION()
		void OnRep_RepData();

public:

	void Initialize(USActionComponent* NewActionComp);

	UPROPERTY(EditDefaultsOnly, Category = "Action")
		bool bAuntoStart;

	UFUNCTION(BlueprintCallable, Category = "Action")
		bool IsRunning() const;

	UFUNCTION(BlueprintNativeEvent, Category = "Action")
		bool CanStart(AActor* Instigator);

	UFUNCTION(BlueprintNativeEvent, Category = "Action")
		void StartAction(AActor* Instigator);

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "Action")
		void StopAction(AActor* Instigator);

	/* Action nickname to start/stop without a reference to the object */
	UPROPERTY(EditDefaultsOnly, Category = "Action")
		FName ActionName;

	UWorld* GetWorld() const override;

	bool IsSupportedForNetworking() const override
	{
		return true;
	}
};
