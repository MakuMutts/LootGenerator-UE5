#pragma once

#include "CoreMinimal.h"
#include "LootTypes.h"
#include "LootFactory.generated.h"

class ULootItemBase;
struct FLootTableRow;

UCLASS()
class LOOTSYSTEM_API ULootFactory : public UObject
{
    GENERATED_BODY()

public:

    static ULootItemBase* CreateLoot(
        UObject* Outer,
        const FLootTableRow& Row,
        int32 PlayerLevel);

private:

    static ELootRarity RollRarity();
};