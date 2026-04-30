#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LootMapConfig.generated.h"

UCLASS(BlueprintType)
class LOOTSYSTEM_API ULootMapConfig : public UDataAsset
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere)
    class UDataTable* MapLootTable;

    UPROPERTY(EditAnywhere)
    int32 MinLootLevel = 1;

    UPROPERTY(EditAnywhere)
    int32 MaxLootLevel = 50;
};