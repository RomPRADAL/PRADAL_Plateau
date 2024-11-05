// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MemoryCard.generated.h"

UCLASS()
class SUPERJEUDELOIE_API AMemoryCard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMemoryCard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsClickable=true;
	
	void TurnCard();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
