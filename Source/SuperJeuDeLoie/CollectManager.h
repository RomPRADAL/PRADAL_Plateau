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

	FTimerHandle Timer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimerDuration;

	UFUNCTION(BlueprintCallable)
	void StartTimer();
	
	UFUNCTION(BlueprintCallable)
	void TimerEnd();

	UFUNCTION(BlueprintCallable)
	bool CheckWin();

	//Fonction a implémenter en bp pour pouvoir atteindre facilement le score du gars
	UFUNCTION(BlueprintImplementableEvent)
	void WinScoreAction();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ACollectable*> CollectablesList;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Score;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Pallier;

	UFUNCTION(BlueprintCallable)
	void AddCollectable(ACollectable* pCollectable);

	UFUNCTION(BlueprintCallable)
	void AddToScore(int Value);

	UFUNCTION(BlueprintCallable)
	void ResetGame();

};
