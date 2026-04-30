#pragma once

#include "LootItemBase.h"
#include "ArmorLootItem.generated.h"

UCLASS()
class LOOTSYSTEM_API UArmorLootItem : public ULootItemBase
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadOnly)
    float Defense;

    virtual FString GetDescription() const override;
};