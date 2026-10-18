// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Data/ItemData.h"
#include "ItemDefinition.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class SMC31416_API UItemDefinition : public UDataAsset
{
	GENERATED_BODY()
	
	public:

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
		FName ID;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
		EItemType ItemType;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
		FItemText ItemText;

		UPROPERTY(EditAnywhere, Category = "Item Data")
		TSoftObjectPtr<UStaticMesh> WorldMesh;
};
