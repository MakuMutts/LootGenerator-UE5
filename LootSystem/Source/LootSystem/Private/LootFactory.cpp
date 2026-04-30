#include "LootFactory.h"
#include "WeaponLootItem.h"
#include "ArmorLootItem.h"
#include "LootItemBase.h"
#include "Math/UnrealMathUtility.h"

ULootItemBase* ULootFactory::CreateLoot(
    UObject* Outer,
    const FLootTableRow& Row,
    int32 PlayerLevel)
{
    ELootRarity Rarity = RollRarity();

    int32 BaseValue = FMath::FRandRange(Row.MinValue, Row.MaxValue);
    float LevelMultiplier = 1.0f + PlayerLevel * 0.1f;

    float RarityMultiplier = 1.0f;

    switch (Rarity)
    {
    case ELootRarity::Rare:
        RarityMultiplier = 1.2f;
        break;

    case ELootRarity::Epic:
        RarityMultiplier = 1.5f;
        break;

    case ELootRarity::Legendary:
        RarityMultiplier = 2.0f;
        break;

    default:
        break;
    }

    float FinalValue = BaseValue * LevelMultiplier * RarityMultiplier;

    ULootItemBase* ResultItem = nullptr;

    if (Row.LootType == ELootType::Weapon)
    {
        UWeaponLootItem* Weapon = NewObject<UWeaponLootItem>(Outer);

        Weapon->ItemID = Row.ItemID;
        Weapon->LootType = Row.LootType;
        Weapon->Rarity = Rarity;
        Weapon->WorldMesh = Row.WorldMesh;
        Weapon->Level = BaseValue;

        Weapon->Damage = FinalValue;
        Weapon->FireRate = FMath::FRandRange(0.5f, 3.0f);

        ResultItem = Weapon;
    }
    else if (Row.LootType == ELootType::Armor)
    {
        UArmorLootItem* Armor = NewObject<UArmorLootItem>(Outer);

        Armor->ItemID = Row.ItemID;
        Armor->LootType = Row.LootType;
        Armor->Rarity = Rarity;
        Armor->WorldMesh = Row.WorldMesh;
        Armor->Level = BaseValue;

        Armor->Defense = FinalValue;

        ResultItem = Armor;
    }

    return ResultItem;
}

ELootRarity ULootFactory::RollRarity()
{
    float Roll = FMath::FRandRange(0.f, 1.f);

    if (Roll < 0.60f)
        return ELootRarity::Common;

    if (Roll < 0.85f)
        return ELootRarity::Rare;

    if (Roll < 0.97f)
        return ELootRarity::Epic;

    return ELootRarity::Legendary;
}