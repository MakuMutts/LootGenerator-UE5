#pragma once


#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/StaticMesh.h"

#include "LootTypes.generated.h"

UENUM(BlueprintType)
enum class ELootType : uint8
{
    Weapon,
    Armor,
    Consumable
};

UENUM(BlueprintType)
enum class ELootRarity : uint8
{
    Common,
    Rare,
    Epic,
    Legendary
};

USTRUCT(BlueprintType)
struct FLootTableRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    FName ItemID;

    UPROPERTY(EditAnywhere)
    ELootType LootType;

    UPROPERTY(EditAnywhere)
    TSubclassOf<class ULootItemBase> ItemClass;

    UPROPERTY(EditAnywhere)
    int32 Weight = 1;

    UPROPERTY(EditAnywhere)
    float MinValue = 10.f;

    UPROPERTY(EditAnywhere)
    float MaxValue = 20.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMesh* WorldMesh;
};