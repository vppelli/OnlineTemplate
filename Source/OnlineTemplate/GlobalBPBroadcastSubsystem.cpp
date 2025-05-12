// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalBPBroadcastSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "PDAEvents.h"

UGlobalBPBroadcastSubsystem* UGlobalBPBroadcastSubsystem::Get(UObject* WorldContext)
{
    if (UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContext))
    {
        return GameInstance->GetSubsystem<UGlobalBPBroadcastSubsystem>();
    }
    return nullptr;
}

void UGlobalBPBroadcastSubsystem::BroadcastMessage(TEnumAsByte<EMessageTypes> MessageTo, UPDAEvents* Data)
{
    if (MessageTo == EMessageTypes::BNONE)
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Message was Sent to NONE, you forgot to change this Value!"));
        }
        UE_LOG(LogTemp, Warning, TEXT("Message was Sent to NONE, you forgot to change this Value!"));
    }
    if (Data)
    {
        OnMessageReceived.Broadcast(MessageTo, Data);
    }
    else
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Data being sent was Invalid"));
        }
        UE_LOG(LogTemp, Warning, TEXT("Data being sent was Invalid"));
    }

}