#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DelegatePayload.h"
#include "DelegateManager.generated.h"

// Declare example global delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGlobalDelegate,const FDelegatePayload&, Payload);

UCLASS(Blueprintable)
class ONLINETEMPLATE_API UDelegateManager : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:

    /** Register a Global Event 
    * 
    @note EventKey uses your Enum List*/
    UFUNCTION(BlueprintCallable, Category = "Delegate Manager")
    void RegisterGlobalEvent(uint8 EventKey);

    /** Register all Global Event by enum class
    *
    @note EventKey uses your Enum List*/
    UFUNCTION(BlueprintCallable, Category = "Delegate Manager")
    bool RegisterAllGlobalEvent(UEnum* EnumClass);

    /** Trigger a Global Event
    * 
    @note Sends the Event to a EventKey thats registered */
    UFUNCTION(BlueprintCallable, Category = "Delegate Manager")
    void TriggerGlobalEvent(uint8 Key, const FDelegatePayload& EventValue);

    /** Bind a Global Event
    * 
    @note Receive's the Event from EventKey's that where triggered */
    UFUNCTION(BlueprintCallable, Category = "Delegate Manager")
    void BindGlobalEvent(uint8 EventKey, UObject* ClassToBind, FName FunctionNameToBind);

    /** Gets a Registered Events by Name */
    UFUNCTION(BlueprintCallable, Category = "Delegate Manager")
    FText GetRegisteredEventName(uint8 EventValue) const;

    /** Gets all Registered Events by Name */
    UFUNCTION(BlueprintCallable, Category = "Delegate Manager")
    TArray<FText> GetAllRegisteredEventNames() const;

    /** Check all registered Keys */
    UFUNCTION(BlueprintCallable, Category = "Delegate Manager")
    bool IsKeyRegistered(uint8 EventKey) const;

private:
    TMap<uint8, FGlobalDelegate> GlobalEventMap;
    UEnum* RegisteredEnums = nullptr;
};