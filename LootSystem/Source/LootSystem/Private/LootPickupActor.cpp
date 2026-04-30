#include "LootPickupActor.h"
#include "LootItemBase.h"

#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Engine.h"

ALootPickupActor::ALootPickupActor()
{
    PrimaryActorTick.bCanEverTick = true;

    // ===== Collision =====
    Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    RootComponent = Collision;

    Collision->InitSphereRadius(120.f);
    Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    Collision->SetCollisionResponseToAllChannels(ECR_Overlap);
    Collision->SetGenerateOverlapEvents(true);

    // ===== Mesh =====
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);

    // ===== Init =====
    ItemData = nullptr;
    OverlappingPlayer = nullptr;
}

void ALootPickupActor::BeginPlay()
{
    Super::BeginPlay();

    if (Collision)
    {
        Collision->OnComponentBeginOverlap.AddDynamic(
            this,
            &ALootPickupActor::OnBeginOverlap
        );

        Collision->OnComponentEndOverlap.AddDynamic(
            this,
            &ALootPickupActor::OnEndOverlap
        );
    }
}

void ALootPickupActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!OverlappingPlayer)
        return;

    APlayerController* PC =
        UGameplayStatics::GetPlayerController(GetWorld(), 0);

    if (!PC)
        return;

    if (PC->WasInputKeyJustPressed(EKeys::E))
    {
        Pickup();
    }
}

void ALootPickupActor::Initialize(ULootItemBase* Item)
{
    ItemData = Item;

    if (Mesh && ItemData && ItemData->WorldMesh)
    {
        Mesh->SetStaticMesh(ItemData->WorldMesh);
    }
}

void ALootPickupActor::OnBeginOverlap(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult)
{
    ACharacter* Character = Cast<ACharacter>(OtherActor);

    if (Character)
    {
        OverlappingPlayer = Character;

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(
                1,
                5.f,
                FColor::Yellow,
                TEXT("Press E to pick up")
            );
        }
    }
}

void ALootPickupActor::OnEndOverlap(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex)
{
    if (OtherActor == OverlappingPlayer)
    {
        OverlappingPlayer = nullptr;
    }
}

void ALootPickupActor::Pickup()
{
    if (!ItemData)
        return;

    FString Desc = ItemData->GetDescription();

    UE_LOG(LogTemp, Warning, TEXT("PICKED UP: %s"), *Desc);

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            5.f,
            FColor::Green,
            FString::Printf(TEXT("Picked: %s"), *Desc)
        );
    }

    Destroy();
}