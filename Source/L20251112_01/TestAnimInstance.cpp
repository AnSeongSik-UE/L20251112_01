// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TestCharacter.h"

void UTestAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ACharacter* Character = Cast<ACharacter>(TryGetPawnOwner());
	if (Character)
	{
		GroundSpeed = Character->GetCharacterMovement()->Velocity.Size2D();
	}

	ATestCharacter* TestCharacter = Cast<ATestCharacter>(TryGetPawnOwner());
	if (TestCharacter)
	{
		bIsRunning = TestCharacter->bIsRunning;
	}
}
