// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementcomponent.h"
#include "Camera/CameraComponent.h"
#include "SInteractionComponent.h"
#include "SAttributeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SActionComponent.h"

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

	ActionComp = CreateDefaultSubobject<USActionComponent>("ActionComp");

	GetCharacterMovement()->bOrientRotationToMovement = true;//�ý�ɫ�������������ķ����ƶ�
	bUseControllerRotationYaw = false;	

	TimeToHitParamName = "TimeToHit";

}

void ASCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	AttributeComp->OnHealthChanged.AddDynamic(this, &ASCharacter::OnHealthChanged);
}

FVector ASCharacter::GetPawnViewLocation() const//�����ߴ��������� ������
{
	return CameraComp->GetComponentLocation();
}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Lookup", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ASCharacter::SprintStart);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ASCharacter::SprintStop);

	PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &ASCharacter::PrimaryAttack);
	PlayerInputComponent->BindAction("BlackholeAttack", IE_Pressed, this, &ASCharacter::BlackholeAttack);
	PlayerInputComponent->BindAction("DashAttack", IE_Pressed, this, &ASCharacter::DashAttack);

	PlayerInputComponent->BindAction("PrimaryInteract", IE_Pressed, this, &ASCharacter::PrimaryInteract);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASCharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ASCharacter::StopJumping);

}

void ASCharacter::HealSelf(float Amount /* Default 100 */)
{
	AttributeComp->ApplyHealthChange(this, Amount);
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

void ASCharacter::SprintStart()
{
	ActionComp->StartActionByName(this, "Sprint");
}

void ASCharacter::SprintStop()
{
	ActionComp->StopActionByName(this, "Sprint");
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
	ActionComp->StartActionByName(this, "PrimaryAttack");
}

void ASCharacter::BlackholeAttack()
{
	ActionComp->StartActionByName(this, "BlackholeAttack");
}

void ASCharacter::DashAttack()
{
	ActionComp->StartActionByName(this, "DashAttack");
}

void ASCharacter::PrimaryInteract()
{
	if(InterationComp)
		InterationComp->PrimaryInteract();
}

void ASCharacter::OnHealthChanged(AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta)
{

	if (Delta < 0.0f)
	{
		GetMesh()->SetScalarParameterValueOnMaterials(TimeToHitParamName, GetWorld()->TimeSeconds);

		float ManaDelta = FMath::Abs(Delta);
		AttributeComp->ApplyManaChange(InstigatorActor, ManaDelta);
	}

	if (NewHealth <= 0.0f && Delta <= 0.0f)
	{
		APlayerController* PC = Cast<APlayerController>(GetController());
		DisableInput(PC);

		SetLifeSpan(5.0f);
	}
}
