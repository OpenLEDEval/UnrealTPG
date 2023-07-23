// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestPatternActor.generated.h"

UCLASS(Blueprintable)
class TESTPATTERNGENERATOR_API ATestPatternActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestPatternActor();

	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category=TestPattern)
	FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=TestPattern)
	FString MyIP;
};
