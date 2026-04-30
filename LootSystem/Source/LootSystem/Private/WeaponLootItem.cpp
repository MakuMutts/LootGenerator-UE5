#include "WeaponLootItem.h"

FString UWeaponLootItem::GetDescription() const
{
    FString RarityStr = StaticEnum<ELootRarity>()->GetNameStringByValue((int64)Rarity);
    return FString::Printf(TEXT("Weapon | Damage: %.1f | FireRate: %.1f | Rarity: %s"),
        Damage, FireRate, *RarityStr);
}