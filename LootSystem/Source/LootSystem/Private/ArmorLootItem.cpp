#include "ArmorLootItem.h"

FString UArmorLootItem::GetDescription() const
{
    FString RarityStr = StaticEnum<ELootRarity>()->GetNameStringByValue((int64)Rarity);
    return FString::Printf(TEXT("Armor | Defense: %.1f | Rarity: %s"), Defense, *RarityStr);
}