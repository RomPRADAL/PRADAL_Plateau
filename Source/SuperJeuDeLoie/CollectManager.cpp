// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectManager.h"

// Sets default values
ACollectManager::ACollectManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Score = 0;
	Pallier = 5;
	TimerDuration = 10.0f;
}

// Called when the game starts or when spawned
void ACollectManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollectManager::StartTimer()
{
	GetWorldTimerManager().SetTimer(Timer, this, &ACollectManager::TimerEnd, TimerDuration, false);
}

void ACollectManager::TimerEnd()
{
	CheckWin();
}

bool ACollectManager::CheckWin()
{
	bool vPallierAtteint = false;

	if (Score >= Pallier)
	{
		vPallierAtteint = true;
	}
	
	return vPallierAtteint;
}

void ACollectManager::AddCollectable(ACollectable* pCollectable)
{
	if (pCollectable)
	{
		CollectablesList.Add(pCollectable);
	}
}

void ACollectManager::AddToScore(int pValue)
{
	Score += pValue;
}

void ACollectManager::ResetGame()
{
	Score = 0;
}