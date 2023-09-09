// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "ThaiAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGSYSTEM_API UThaiAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:

	UThaiAssetManager() = default;

	// Returns the AssetManager singleton object.
	static UThaiAssetManager& Get();

protected:

	virtual void StartInitialLoading() override;
};
