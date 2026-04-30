#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootPickupActor.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class ULootItemBase;
class ACharacter;

UCLASS()
class LOOTSYSTEM_API ALootPickupActor : public AActor
{
    GENERATED_BODY()

public:
    ALootPickupActor();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // ===== Components =====

    UPROPERTY(VisibleAnywhere)
    USphereComponent* Collision;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;

    // ===== Data =====

    UPROPERTY()
    ULootItemBase* ItemData;

    UPROPERTY()
    ACharacter* OverlappingPlayer;

    // ===== Overlap =====

    UFUNCTION()
    void OnBeginOverlap(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult);

    UFUNCTION()
    void OnEndOverlap(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex);

    // ===== Logic =====

    void Pickup();

public:
    void Initialize(ULootItemBase* Item);
};