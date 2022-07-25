// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementcomponent.h"
#include "Camera/CameraComponent.h"
#include "SInteractionComponent.h"
#include "SAttributeComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASCharacter::ASCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);


	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);

	InterationComp = CreateDefaultSubobject<USInteractionComponent>("InterationComp");
	
	AttributeComp = CreateDefaultSubobject<USAttributeComponent>("AttributeComp");

	GetCharacterMovement()->bOrientRotationToMovement = true;//�ý�ɫ�������������ķ����ƶ�

	bUseControllerRotationYaw = false;
}

void ASCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	AttributeComp->OnHealthChanged.AddDynamic(this, &ASCharacter::OnHealthChanged);
}


// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);
	

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Lookup", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &ASCharacter::PrimaryAttack);
	PlayerInputComponent->BindAction("BlackholeAttack", IE_Pressed, this, &ASCharacter::BlackholeAttack);
	PlayerInputComponent->BindAction("DashAttack", IE_Pressed, this, &ASCharacter::DashAttack);

	PlayerInputComponent->BindAction("PrimaryInteract", IE_Pressed, this, &ASCharacter::PrimaryInteract);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASCharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ASCharacter::StopJumping);

}

void ASCharacter::MoveForward(float value)
{
	FRotator ControlRot = GetControlRotation();//yaw Y�� pitch x�� Roll z��
	ControlRot.Pitch = 0.0f;//�������ǳ������ƶ���������x��z��
	ControlRot.Roll = 0.0F;
	AddMovementInput(ControlRot.Vector(), value);
}

void ASCharacter::MoveRight(float value)
{
	FRotator ControlRot = GetControlRotation();//yaw Y�� pitch x�� Roll z��
	ControlRot.Pitch = 0.0f;//�������ǳ������ƶ���������x��z��
	ControlRot.Roll = 0.0F;//ue��x����ǰ�� y���ұ� z���ϱ�
	FVector RightVector = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);
	AddMovementInput(RightVector, value);
}

void ASCharacter::Jump()
{
	Super::Jump();
	//��Ծʱ�ĳ�ʼ�ٶ�(˲ʱ��ֱ���ٶ�)��
	GetCharacterMovement()->JumpZVelocity = 500.0f;
	//������ʱ����ɫ���Կ��Ʋ����ƶ���������0 =û�п��ƣ�1 =��MaxWalkSpeed������ٶ�����ȫ���ơ�
	GetCharacterMovement()->AirControl = 0.15f;

}

void ASCharacter::PrimaryAttack()//��������
{
	PlayAnimMontage(PrimaryAttackAnim);
	StartAttackEffect(1);
	GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &ASCharacter::PrimaryAttack_TimeElapsed, 0.2f);//0.2f��ִ��PrimaryAttack_TimeElapsed
	
	//GetWorldTimerManager().ClearTimer(TimeHandle_PrimaryAttack);����������� ��Ȼ�ڹ�����ʹ������������Խ���������

}

void ASCharacter::PrimaryAttack_TimeElapsed()
{
	SpawnProjectile(MagicProjectileclass, 1);
}


void ASCharacter::BlackholeAttack()
{
	PlayAnimMontage(BlackholeAttackAnim);
	StartAttackEffect(2);
	GetWorldTimerManager().SetTimer(TimerHandle_BlackholeAttack, this, &ASCharacter::BlackholeAttack_TimeElapsed, 0.2f);//0.2f��ִ��PrimaryAttack_TimeElapsed

}

void ASCharacter::BlackholeAttack_TimeElapsed()
{	
	SpawnProjectile(BlackholeProjectileclass, 2);
}

void ASCharacter::DashAttack()
{
	PlayAnimMontage(DashAttackAnim);
	StartAttackEffect(1);
	GetWorldTimerManager().SetTimer(TimerHandle_DashAttack, this, &ASCharacter::DashAttack_TimeElapsed, 0.2f);
}

void ASCharacter::DashAttack_TimeElapsed()
{
	SpawnProjectile(DashProjectileclass, 1);
}

void ASCharacter::StartAttackEffect(int Hand)
{
	FName HandSocketName;
	switch (Hand)
	{
	case 1:
		HandSocketName = "Muzzle_01";

	case 2:
		HandSocketName = "Muzzle_02";

	case 3:
		HandSocketName = "Muzzle_03";

	default:
		HandSocketName = "Muzzle_01";
	}

	UGameplayStatics::SpawnEmitterAttached(CastingEffect, GetMesh(), HandSocketName, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::SnapToTarget);

}



void ASCharacter::SpawnProjectile(TSubclassOf<AActor> ClassToSpawn, int Hand)
{
	if (ensureAlways(ClassToSpawn))
	{
		FVector HandLocation;
		switch (Hand)
		{
			case 1:
				HandLocation = GetMesh()->GetSocketLocation("Muzzle_01");
			
			case 2:
				HandLocation = GetMesh()->GetSocketLocation("Muzzle_02");

			case 3:
				HandLocation = GetMesh()->GetSocketLocation("Muzzle_03");

			default:
				HandLocation = GetMesh()->GetSocketLocation("Muzzle_01");
		}
		
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Instigator = this;

		FCollisionShape Shape;
		Shape.SetSphere(20.0f);

		// Ignore Player
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);

		//block ����
		FCollisionObjectQueryParams ObjParams;
		ObjParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		ObjParams.AddObjectTypesToQuery(ECC_WorldStatic);
		ObjParams.AddObjectTypesToQuery(ECC_Pawn);

		FVector TraceStart = CameraComp->GetComponentLocation();

		// endpoint far into the look-at distance (not too far, still adjust somewhat towards crosshair on a miss)
		FVector TraceEnd = CameraComp->GetComponentLocation() + (GetControlRotation().Vector() * 5000);

		FHitResult Hit;
		if (GetWorld()->SweepSingleByObjectType(Hit, TraceStart, TraceEnd, FQuat::Identity, ObjParams, Shape, Params))
		{
			TraceEnd = Hit.ImpactPoint;
		}

		// find new direction/rotation from Hand pointing to impact point in world.
		FRotator ProjRotation = FRotationMatrix::MakeFromX(TraceEnd - HandLocation).Rotator();

		FTransform SpawnTM = FTransform(ProjRotation, HandLocation);
		GetWorld()->SpawnActor<AActor>(ClassToSpawn, SpawnTM, SpawnParams);
	}

}

void ASCharacter::PrimaryInteract()
{
	if(InterationComp)
		InterationComp->PrimaryInteract();
}

void ASCharacter::OnHealthChanged(AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta)
{
	if (NewHealth <= 0.0f && Delta <= 0.0f)
	{
		APlayerController* PC = Cast<APlayerController>(GetController());
		DisableInput(PC);
	}
}
