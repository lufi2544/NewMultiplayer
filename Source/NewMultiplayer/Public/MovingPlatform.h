// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS(BlueprintType )
class NEWMULTIPLAYER_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()



public:

	AMovingPlatform();

	virtual void Tick(float DeltaSeconds) override;


	/* Moving Speed */
	UPROPERTY(EditAnywhere, Category = "PlatformBase",DisplayName = "Speed" , meta = (ClampMin = -3),meta = (ClampMax = 3), meta = (GetByRef))
		float fSpeed = 1;





private:


};
