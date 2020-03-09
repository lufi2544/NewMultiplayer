// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "UObject/Object.h"


AMovingPlatform::AMovingPlatform() 
{

	PrimaryActorTick.bCanEverTick = true;


	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);

}

void AMovingPlatform::Tick(float DeltaSeconds)
{

	Super::Tick(DeltaSeconds);


	if(HasAuthority() )
	{
		SetActorLocation(FVector(GetActorLocation().X + 1 * fSpeed, GetActorLocation().Y, GetActorLocation().Z));
	
	}

	

	//UE_LOG(LogTemp,Error,TEXT("%s"),*GetActorLocation().ToString());



}
