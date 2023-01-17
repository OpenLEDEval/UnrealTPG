// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPatternActor.h"

// Sets default values
ATestPatternActor::ATestPatternActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestPatternActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestPatternActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

