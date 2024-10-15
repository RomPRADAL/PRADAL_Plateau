// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateParent.generated.h"
//#include "FSMManager.h"


/**
 * 
 */
UCLASS(Blueprintable)
class SUPERJEUDELOIE_API UStateParent : public UObject
{
	GENERATED_BODY()
protected :
	virtual void EnterState(AFSMManager stateMachine);
	virtual void Do(AFSMManager stateMachine);
	virtual void ExitState(AFSMManager stateMachine);
};
