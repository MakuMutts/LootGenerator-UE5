#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LootTypes.h"
#include "LootItemBase.generated.h"

UCLASS(Blueprintable)
class LOOTSYSTEM_API ULootItemBase : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadOnly)
    FName ItemID;

    UPROPERTY(BlueprintReadOnly)
    ELootType LootType;

    UPROPERTY(BlueprintReadOnly)
    ELootRarity Rarity;

    UPROPERTY(BlueprintReadOnly)
    int32 Level;

    UPROPERTY(BlueprintReadOnly)
    UStaticMesh* WorldMesh;

    virtual FString GetDescription() const;
};