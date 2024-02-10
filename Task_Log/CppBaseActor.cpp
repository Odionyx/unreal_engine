	// Fill out your copyright notice in the Description page of Project Settings.

#include "CppBaseActor.h"

	// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	//
void ACppBaseActor::ShowActorInformation()
{
	int Enemy = rand()/555;
	bool Alive = static_cast <bool> (rand() % 2);
	
	UE_LOG(LogTemp, Display, TEXT("Name: %s"), *GetName());
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %i"), Enemy);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %i"), Alive);
}