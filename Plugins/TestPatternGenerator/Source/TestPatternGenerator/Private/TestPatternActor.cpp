// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPatternActor.h"
#include "SocketSubsystem.h"


// Sets default values
ATestPatternActor::ATestPatternActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATestPatternActor::OnConstruction(const FTransform& Transform)
{
	bool bCanBindAll = true;
	TSharedPtr<class FInternetAddr> Addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, bCanBindAll);
	MyIP = Addr->ToString(false);
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

