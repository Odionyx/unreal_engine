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
	* �	EditAnywhere � ����� ������������� � ��������� � �����������;
	* �	EditDefaultsOnly � ����� ������������� � ���������;
	* �	EditInstanceOnly � ����� ������������� � �����������;
	* �	VisibleAnywhere � ������������ �� ���� ����� �������, �� �� ����� ���� ��������;
	* �	VisibleDefaultsOnly � ������������ ������ � ����� ������� ��� ��������� � �� ����� ���� ��������;
	* �	VisibleInstanceOnly � ������������ ������ � ����� ������� ��� ����������� � �� ����� ���� ��������;
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