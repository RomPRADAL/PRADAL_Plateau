// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Collectable.h"
#include "CollectManager.generated.h"

UCLASS()
class SUPERJEUDELOIE_API ACollectManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ACollectable*> CollectablesList;

	UFUNCTION(BlueprintCallable)
	void AddCollectable(ACollectable* pCollectable);

};
