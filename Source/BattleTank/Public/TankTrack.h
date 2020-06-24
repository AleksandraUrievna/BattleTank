/// Copyright Embrace iT Ltd.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))

class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetThrottle(float Throttle);
	void DriveTrack();

	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 40000000;

private:
	UTankTrack();
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	void ApplySidewaysForce();

	float CurrentThrottle = 0;
};
