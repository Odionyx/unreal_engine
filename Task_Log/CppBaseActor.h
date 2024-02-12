// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class LEARN_PROJECT_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBaseActor();

private:
	/* Method UE_LOG */
	void ShowActorInformation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	FString PlayerName = "TestActor";

	UPROPERTY(EditAnywhere)
	int EnemyNum = rand()/512;

	UPROPERTY(EditDefaultsOnly)
	float CurrentHealth = 100.0;

	UPROPERTY(EditInstanceOnly)
	bool IsAlive = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
