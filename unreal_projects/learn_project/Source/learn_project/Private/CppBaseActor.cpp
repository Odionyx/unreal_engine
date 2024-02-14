// Fill out your copyright notice in the Description page of Project Settings.

#include "CppBaseActor.h"
#include "Engine/Engine.h" /* For print screen */

// Sets default values
ACppBaseActor::ACppBaseActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/* Create Mesh */
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

	/*  */
	SetRootComponent(Mesh);

}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{	
	Super::BeginPlay();

	ShowActorInformation();

	InitialLocation = GetActorLocation();
}

/* method of complex amplitudes */
void ACppBaseActor::SinMovement_Z()
{
	/*
	* z = Amplitude × sin(Frequency × Time) + z0
	*/
	//InitialLocation = GetActorLocation();

	InitialLocation.Z += Amplitude * (FMath::Sin(Frequency * GetGameTimeSinceCreation()));

	SetActorLocation(InitialLocation);

}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/* Log */
void ACppBaseActor::ShowActorInformation()
{
	GEngine->AddOnScreenDebugMessage(1, 15.f, FColor::Green,
		TEXT("Welcome!"), true, FVector2D(2.0f, 2.0f));

	UE_LOG(LogTemp, Display, TEXT("The Actor's name is %s"), *GetName());
	UE_LOG(LogTemp, Display, TEXT("Enemy = %i"), EnemyNum);
	UE_LOG(LogTemp, Display, TEXT("Alive is %s"), (IsAlive ? TEXT("true") : TEXT("false")));

}