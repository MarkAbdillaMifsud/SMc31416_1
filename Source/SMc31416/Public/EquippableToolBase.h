// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnhancedInputSubsystems.h"
#include "Animation/AnimBlueprint.h" 
#include "Components/SkeletalMeshComponent.h"
#include "EquippableToolBase.generated.h"

class AFPSCharacter;
class UInputAction;
class UInputMappingContext;

UCLASS()
class SMC31416_API AEquippableToolBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEquippableToolBase();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UAnimBlueprint> FirstPersonToolAnim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UAnimBlueprint> ThirdPersonToolAnim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<USkeletalMeshComponent> ToolMeshComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<AFPSCharacter> OwningCharacter;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UInputMappingContext> ToolMappingContext;

	UFUNCTION()
	virtual void Use();

	UFUNCTION()
	virtual void BindInputAction(const UInputAction* ActionToBind);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
