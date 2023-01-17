// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestPatternActor.generated.h"

class UPostProcessComponent;

UCLASS(Blueprintable)
class TESTPATTERNGENERATOR_API ATestPatternActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestPatternActor();

	virtual void Tick(float DeltaTime) override;
protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere, Category=TestPattern)
	FLinearColor Color;
};
