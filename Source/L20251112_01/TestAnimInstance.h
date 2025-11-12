// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TestAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class L20251112_01_API UTestAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Anim)
	float GroundSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Anim)
	bool bIsRunning = false;
};
