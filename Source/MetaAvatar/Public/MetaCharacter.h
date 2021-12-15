// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "OpenCVHelper.h"
OPENCV_INCLUDES_START
#undef check // the check macro causes problems with opencv headers
#include "opencv2/core.hpp"
OPENCV_INCLUDES_END

#include "GameFramework/Character.h"

#include "MetaCharacter.generated.h"

UCLASS()
class METAAVATAR_API AMetaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMetaCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
