// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateParent.generated.h"

UCLASS(Blueprintable)
class SUPERJEUDELOIE_API UStateParent : public UObject
{
	GENERATED_BODY()
protected :
	virtual void EnterState(class AFSMManager* stateMachine);
	virtual void Do(class AFSMManager* stateMachine);
	virtual void ExitState(class AFSMManager* stateMachine);
};
