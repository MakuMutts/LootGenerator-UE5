#pragma once

#include "LootItemBase.h"
#include "WeaponLootItem.generated.h"

UCLASS()
class LOOTSYSTEM_API UWeaponLootItem : public ULootItemBase
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadOnly)
    float Damage;

    UPROPERTY(BlueprintReadOnly)
    float FireRate;

    virtual FString GetDescription() const override;
};