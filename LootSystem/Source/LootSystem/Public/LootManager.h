#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootManager.generated.h"

UCLASS()
class LOOTSYSTEM_API ALootManager : public AActor
{
    GENERATED_BODY()

public:

    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere)
    TSubclassOf<class ULootGenerator> LootGeneratorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot")
    int32 ExternalPlayerLevel = 1;
};