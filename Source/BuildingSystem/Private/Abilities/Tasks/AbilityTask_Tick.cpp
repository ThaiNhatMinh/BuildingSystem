// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Tasks/AbilityTask_Tick.h"

UAbilityTask_Tick* UAbilityTask_Tick::TickTask(UGameplayAbility* OwningAbility)
{
	UAbilityTask_Tick* MyObj = NewAbilityTask<UAbilityTask_Tick>(OwningAbility);
	MyObj->bTickingTask = true;
	return MyObj;
}

void UAbilityTask_Tick::TickTask(float DeltaTime)
{
	Super::TickTask(DeltaTime);
	if (ShouldBroadcastAbilityTaskDelegates())
		OnTick.Broadcast(DeltaTime);
}
