// Fill out your copyright notice in the Description page of Project Settings.


#include "ThaiPlayerState.h"

AThaiPlayerState::AThaiPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UThaiAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
}

UAbilitySystemComponent* AThaiPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
