// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplitScreenController.generated.h"

UCLASS()
class GCC528_GAMEDEV_API ASplitScreenController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplitScreenController();

	UFUNCTION(BlueprintCallable, meta = (WorldContext = world))
	static void DisableSplitScreen(UObject* world, bool disable);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
