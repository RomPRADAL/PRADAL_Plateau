// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectManager.h"

// Sets default values
ACollectManager::ACollectManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

void ACollectManager::AddCollectable(ACollectable* pCollectable)
{
	if (pCollectable)
	{
		CollectablesList.Add(pCollectable);
	}
}
