/// Copyright Embrace iT Ltd.
#pragma once

#include "Engine.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class UTankAimingComponent;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Setup")
	float AcceptanceRadius = 8000;
private:
	virtual void BeginPlay() override;
	virtual void SetPawn(APawn* InPawn) override;
	virtual void Tick(float DeltaSeconds) override;
	
	UFUNCTION()
	void OnPossedTankDeath();
};

