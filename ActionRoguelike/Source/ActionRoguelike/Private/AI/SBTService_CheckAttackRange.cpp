// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SBTService_CheckAttackRange.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

void USBTService_CheckAttackRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	//��� AI�� Ŀ��֮��ľ���
	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (ensure(BlackboardComp))
	{
		AActor* TargetActor = Cast<AActor>(BlackboardComp->GetValueAsObject("TargetActor"));
		if (TargetActor)
		{
			AAIController * MyController = OwnerComp.GetAIOwner();
			if (ensure(MyController))
			{
				APawn* AIPawn = MyController->GetPawn();
				if (ensure(AIPawn))
				{
					float DistanceBetween = FVector::Distance(TargetActor->GetActorLocation(), AIPawn->GetActorLocation());

					bool bWithinRange = DistanceBetween < 2000.0f;

					bool beHasLOS = false;
					if (bWithinRange)
					{
						beHasLOS = MyController->LineOfSightTo(TargetActor); //ֻ���ڵ�����赲
						BlackboardComp->SetValueAsBool(InSight.SelectedKeyName, beHasLOS);
					}
					BlackboardComp->SetValueAsBool(AttackRangeKey.SelectedKeyName, (bWithinRange && beHasLOS));
				}
			}
			
		}
	}
}