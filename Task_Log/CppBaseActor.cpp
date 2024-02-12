// Fill out your copyright notice in the Description page of Project Settings.

#include "CppBaseActor.h"

// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/* Log */
void ACppBaseActor::ShowActorInformation()
{
	GEngine->AddOnScreenDebugMessage(1, 15.f, FColor::Green, 
		TEXT("Welcome!"), true, FVector2D (2.0f, 2.0f));

	UE_LOG(LogTemp, Warning, TEXT("The Actor's name is %s"), *GetName());
	UE_LOG(LogTemp, Warning, TEXT("Enemy = %i"), EnemyNum);
	UE_LOG(LogTemp, Warning, TEXT("Alive is %s"), (IsAlive ? TEXT("true") : TEXT("false")));

}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();
	ShowActorInformation();
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}