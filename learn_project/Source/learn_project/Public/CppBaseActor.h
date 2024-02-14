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

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* Create Mesh */
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

protected:
	/*
	* Х	EditAnywhere Ц можно редактировать в архетипах и экземпл€рах;
	* Х	EditDefaultsOnly Ц можно редактировать в архетипах;
	* Х	EditInstanceOnly Ц можно редактировать в экземпл€рах;
	* Х	VisibleAnywhere Ц отображаетс€ во всех окнах свойств, но не может быть изменено;
	* Х	VisibleDefaultsOnly Ц отображаетс€ только в окнах свойств дл€ архетипов и не может быть изменено;
	* Х	VisibleInstanceOnly Ц отображаетс€ только в окнах свойств дл€ экземпл€ров и не может быть изменено;
	*/
	// Called when the game starts or when spawned 

	UPROPERTY(VisibleAnywhere)
	FString PlayerName = "TestActor";

	UPROPERTY(VisibleAnywhere)
	FVector InitialLocation;

	UPROPERTY(EditAnywhere)
	int EnemyNum = rand() / 512;

	UPROPERTY(EditAnywhere)
	bool IsAlive = true;

	UPROPERTY(EditAnywhere)
	float Amplitude = 8.0;

	UPROPERTY(EditAnywhere)
	float Frequency = 8.0;

	UPROPERTY(EditDefaultsOnly)
	float CurrentHealth = 100.0;

	/* method of complex amplitudes */
	UFUNCTION(BlueprintCallable)
	void SinMovement_Z();

	virtual void BeginPlay() override;

private:
	/* method UE_LOG */
	void ShowActorInformation();

};