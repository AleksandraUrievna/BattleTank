/// Copyright Embrace iT Ltd.


#include "TankAIController.h"
#include "BattleTank.h"
#include "TankAimingComponent.h"
#include "Tank.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	if (InPawn)
	{
		auto PossessedTank = Cast<ATank>(InPawn);
		if (!ensure(PossessedTank)) { return; }

		// Subscribe our local method to the tank's death event
		PossessedTank->OnDeath.AddUniqueDynamic(this, &ATankAIController::OnPossedTankDeath);
	}
}

void ATankAIController::OnPossedTankDeath()
{
	if (!ensure(GetPawn())) { return; }
	GetPawn()->DetachFromControllerPendingDestroy();
}

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// TODO Move towards the player

		// Aim towards the player
		auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
		auto ControlledTank= GetPawn();
		auto AimingComponent = ControlledTank->FindComponentByClass<UTankAimingComponent>();
		
		if (!ensure(PlayerTank && ControlledTank)) { return; }
			MoveToActor(PlayerTank, AcceptanceRadius);
			AimingComponent->AimAt(PlayerTank->GetActorLocation());

			if (AimingComponent->GetFiringState() == EFiringState::Locked)
			{
				AimingComponent->Fire();
			}
}
