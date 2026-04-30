#include "LootGenerator.h"
#include "LootItemBase.h"
#include "LootFactory.h"
#include "LootMapConfig.h"

void ULootGenerator::SetPlayerLevel(int32 NewLevel)
{
    ExternalPlayerLevel = FMath::Max(1, NewLevel);
}

ULootItemBase* ULootGenerator::GenerateLoot()
{
    if (!MapConfig || !MapConfig->MapLootTable)
        return nullptr;

    TArray<FLootTableRow*> Rows;
    MapConfig->MapLootTable->GetAllRows(TEXT("LootRows"), Rows);

    if (Rows.Num() == 0)
        return nullptr;

    int32 TotalWeight = 0;

    for (FLootTableRow* Row : Rows)
    {
        if (Row)
        {
            TotalWeight += FMath::Max(1, Row->Weight);
        }
    }

    if (TotalWeight <= 0)
        return nullptr;

    int32 Roll = FMath::RandRange(1, TotalWeight);

    int32 Accumulated = 0;

    for (FLootTableRow* Row : Rows)
    {
        if (!Row) continue;

        Accumulated += FMath::Max(1, Row->Weight);

        if (Roll <= Accumulated)
        {
            return ULootFactory::CreateLoot(
                this,
                *Row,
                ExternalPlayerLevel);
        }
    }

    return nullptr;
}

ULootItemBase* ULootGenerator::GenerateLootUnique(
    const TSet<ELootType>& ExcludedTypes)
{
    if (!MapConfig || !MapConfig->MapLootTable)
        return nullptr;

    TArray<FLootTableRow*> Rows;
    MapConfig->MapLootTable->GetAllRows(TEXT("LootRows"), Rows);

    TArray<FLootTableRow*> FilteredRows;

    for (FLootTableRow* Row : Rows)
    {
        if (Row && !ExcludedTypes.Contains(Row->LootType))
        {
            FilteredRows.Add(Row);
        }
    }

    if (FilteredRows.Num() == 0)
        return GenerateLoot();

    int32 TotalWeight = 0;

    for (FLootTableRow* Row : FilteredRows)
    {
        TotalWeight += FMath::Max(1, Row->Weight);
    }

    int32 Roll = FMath::RandRange(1, TotalWeight);
    int32 Accumulated = 0;

    for (FLootTableRow* Row : FilteredRows)
    {
        Accumulated += FMath::Max(1, Row->Weight);

        if (Roll <= Accumulated)
        {
            return ULootFactory::CreateLoot(
                this,
                *Row,
                ExternalPlayerLevel);
        }
    }

    return nullptr;
}
ULootItemBase* ULootGenerator::GenerateLootByTypes(
    const TArray<ELootType>& AllowedTypes)
{
    if (!MapConfig || !MapConfig->MapLootTable)
        return nullptr;

    TArray<FLootTableRow*> Rows;
    MapConfig->MapLootTable->GetAllRows(TEXT("LootRows"), Rows);

    TArray<FLootTableRow*> FilteredRows;

    for (FLootTableRow* Row : Rows)
    {
        if (!Row) continue;

        if (AllowedTypes.Num() == 0 || AllowedTypes.Contains(Row->LootType))
        {
            FilteredRows.Add(Row);
        }
    }

    if (FilteredRows.Num() == 0)
        return nullptr;

    int32 TotalWeight = 0;

    for (FLootTableRow* Row : FilteredRows)
    {
        TotalWeight += FMath::Max(1, Row->Weight);
    }

    int32 Roll = FMath::RandRange(1, TotalWeight);
    int32 Accumulated = 0;

    for (FLootTableRow* Row : FilteredRows)
    {
        Accumulated += FMath::Max(1, Row->Weight);

        if (Roll <= Accumulated)
        {
            return ULootFactory::CreateLoot(
                this,
                *Row,
                ExternalPlayerLevel);
        }
    }

    return nullptr;
}