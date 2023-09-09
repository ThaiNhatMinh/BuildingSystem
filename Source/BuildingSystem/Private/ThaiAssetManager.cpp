// Fill out your copyright notice in the Description page of Project Settings.


#include "ThaiAssetManager.h"

UThaiAssetManager& UThaiAssetManager::Get()
{
	check(GEngine);

	UThaiAssetManager* MyAssetManager = Cast<UThaiAssetManager>(GEngine->AssetManager);
	return *MyAssetManager;
}

void UThaiAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
}
