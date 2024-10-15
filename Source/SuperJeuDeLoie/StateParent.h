// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateParent.generated.h"

/**
 * 
 */
UCLASS()
class SUPERJEUDELOIE_API UStateParent : public UObject
{
	GENERATED_BODY()
public :
	virtual void EnterState();
	virtual void Do();
	virtual void ExitState();
};
