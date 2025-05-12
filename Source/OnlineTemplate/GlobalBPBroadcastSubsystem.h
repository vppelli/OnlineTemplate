// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EGlobalListTypes.h"
#include "GlobalBPBroadcastSubsystem.generated.h"

class UPDAEvents;


// Declare a delegate that passes a UPDAEvents*
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGlobalMessage, TEnumAsByte<EMessageTypes>, MessageTo, UPDAEvents*, Data);

UCLASS()
class ONLINETEMPLATE_API UGlobalBPBroadcastSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
    static UGlobalBPBroadcastSubsystem* Get(UObject* WorldContext);

    // Expose's the delegate to Blueprints, Delegate for Messages
    UPROPERTY(BlueprintAssignable, Category = "Global Messaging")
    FOnGlobalMessage OnMessageReceived;

    // Enum for Delegate Messages
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global Messaging", meta = (DisplayName = "MessageTo", MakeStructureDefaultValue = "NewEnumerator0"))
    TEnumAsByte<EMessageTypes> EMessage;

    // All Functions that Broadcast Messages

    // Function to send messages, callable from Blueprints
    UFUNCTION(BlueprintCallable, Category = "Global Messaging")
    void BroadcastMessage(TEnumAsByte<EMessageTypes> MessageTo, UPDAEvents* Data);
};
