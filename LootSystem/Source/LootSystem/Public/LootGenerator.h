#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LootTypes.h"
#include "LootGenerator.generated.h"

class ULootItemBase;
class ULootMapConfig;

UCLASS(Blueprintable, BlueprintType)
class LOOTSYSTEM_API ULootGenerator : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot")
    ULootMapConfig* MapConfig;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot")
    int32 ExternalPlayerLevel = 1;

    UFUNCTION(BlueprintCallable, Category = "Loot")
    void SetPlayerLevel(int32 NewLevel);

    UFUNCTION(BlueprintCallable, Category = "Loot")
    ULootItemBase* GenerateLoot();

    UFUNCTION(BlueprintCallable, Category = "Loot")
    ULootItemBase* GenerateLootUnique(
        const TSet<ELootType>& ExcludedTypes);

    ULootItemBase* GenerateLootByTypes(
        const TArray<ELootType>& AllowedTypes);
};