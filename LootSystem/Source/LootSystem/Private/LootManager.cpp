#include "LootManager.h"
#include "LootGenerator.h"
#include "LootSpawnPoint.h"
#include "LootPickupActor.h"
#include "LootItemBase.h"
#include "LootTypes.h"
#include "Kismet/GameplayStatics.h"

void ALootManager::BeginPlay()
{
    Super::BeginPlay();

    ULootGenerator* Generator =
        NewObject<ULootGenerator>(this, LootGeneratorClass);

    if (!Generator)
        return;

    int32 FinalLevel = ExternalPlayerLevel;

    APawn* PlayerPawn =
        UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    if (PlayerPawn)
    {
        static const FName LevelPropertyName(TEXT("PlayerLevel"));

        FProperty* LevelProperty =
            PlayerPawn->GetClass()->FindPropertyByName(LevelPropertyName);

        if (FIntProperty* IntProp =
            CastField<FIntProperty>(LevelProperty))
        {
            FinalLevel =
                IntProp->GetPropertyValue_InContainer(PlayerPawn);
        }
    }

    Generator->SetPlayerLevel(FinalLevel);

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            8.f,
            FColor::Yellow,
            FString::Printf(
                TEXT("PLAYER LEVEL: %d"),
                FinalLevel));
    }

    TArray<AActor*> SpawnPoints;
    UGameplayStatics::GetAllActorsOfClass(
        GetWorld(),
        ALootSpawnPoint::StaticClass(),
        SpawnPoints);

    for (AActor* Actor : SpawnPoints)
    {
        ALootSpawnPoint* Spawn =
            Cast<ALootSpawnPoint>(Actor);

        if (!Spawn)
            continue;

        if (FMath::FRand() > Spawn->SpawnChance)
            continue;

        ULootItemBase* Item =
            Generator->GenerateLootByTypes(
                Spawn->AllowedLootTypes);

        if (!Item)
            continue;

        ALootPickupActor* Pickup =
            GetWorld()->SpawnActor<ALootPickupActor>(
                Spawn->PickupClass,
                Spawn->GetActorLocation(),
                FRotator::ZeroRotator);

        if (Pickup)
        {
            Pickup->Initialize(Item);

            FString Desc = Item->GetDescription();

            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(
                    -1,
                    10.f,
                    FColor::Green,
                    FString::Printf(TEXT("SPAWNED: %s"), *Desc));
            }


            UE_LOG(LogTemp, Warning, TEXT("SPAWNED LOOT: %s"), *Desc);
        }
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(
                -1,
                5.f,
                FColor::Green,
                FString::Printf(
                    TEXT("Loot: %s | Level: %d"),
                    *Item->ItemID.ToString(),
                    Item->Level));
        }
    }

}