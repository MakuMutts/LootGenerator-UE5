#include "LootItemBase.h"

FString ULootItemBase::GetDescription() const
{
    return FString::Printf(TEXT("Item: %s | Level: %d"),
        *ItemID.ToString(), Level);
}