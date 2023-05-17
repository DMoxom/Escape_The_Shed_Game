// Fill out your copyright notice in the Description page of Project Settings.


#include "SplitScreenController.h"

// Sets default values
ASplitScreenController::ASplitScreenController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplitScreenController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASplitScreenController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASplitScreenController::DisableSplitScreen(UObject* world, bool disable)
{
	if (world)
	{
		world->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(disable);
	}
}
