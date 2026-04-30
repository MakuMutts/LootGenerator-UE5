#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootTypes.h"
#include "LootSpawnPoint.generated.h"

class ALootPickupActor;

UCLASS()
class LOOTSYSTEM_API ALootSpawnPoint : public AActor
{
    GENERATED_BODY()

public:
    ALootSpawnPoint();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot")
    TSubclassOf<ALootPickupActor> PickupClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot")
    float SpawnChance = 1.f;

    // какие типы разрешены на этой точке
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot")
    TArray<ELootType> AllowedLootTypes;
};