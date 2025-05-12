#include "DelegateManager.h"


void UDelegateManager::RegisterGlobalEvent(uint8 EventKey)
{
	if (!GlobalEventMap.Contains(EventKey))
	{
		GlobalEventMap.Add(EventKey);
	}
}

// Return True if all events registered successfully, return false if there was a problem
bool UDelegateManager::RegisterAllGlobalEvent(UEnum* EnumClass)
{
	if (!EnumClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("EnumClass is null."));
		return false;
	}

	bool bAllSuccessful = true;

	const int32 NumEnums = EnumClass->NumEnums();

	for (int32 i = 0; i < NumEnums - 1; ++i) // Skip hidden _MAX entry if exists
	{
		uint8 EnumValue = static_cast<uint8>(EnumClass->GetValueByIndex(i));
		FString EnumDisplayName = EnumClass->GetNameStringByValue(EnumValue);

		if (GlobalEventMap.Contains(EnumValue))
		{
			UE_LOG(LogTemp, Warning, TEXT("Event already registered: %s"), *EnumDisplayName);
			bAllSuccessful = false;
			continue;
		}

		RegisterGlobalEvent(EnumValue);
	}

	RegisteredEnums = EnumClass;
	return bAllSuccessful;
}

void UDelegateManager::TriggerGlobalEvent(uint8 EventKey, const FDelegatePayload& EventValue)
{
	if (FGlobalDelegate* Delegate = GlobalEventMap.Find(EventKey))
	{
		Delegate->Broadcast(EventValue);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Attempted to trigger unregistered event %d"), EventKey);
	}
}

void UDelegateManager::BindGlobalEvent(uint8 EventKey, UObject* ClassToBind, FName FunctionNameToBind)
{
	if (!ClassToBind)
	{
		UE_LOG(LogTemp, Warning, TEXT("No class was Specified."));
		return;
	}

	UFunction* FoundFunction = ClassToBind->FindFunction(FunctionNameToBind);
	if (!FoundFunction)
	{
		UE_LOG(LogTemp, Warning, TEXT("Function %s not found on %s."), *FunctionNameToBind.ToString(), *ClassToBind->GetName());
		return;
	}
	
	FScriptDelegate ScriptDelegate;
	ScriptDelegate.BindUFunction(ClassToBind, FunctionNameToBind);

	FGlobalDelegate& Delegate = GlobalEventMap.FindOrAdd(EventKey);
	Delegate.Add(ScriptDelegate);
}

FText UDelegateManager::GetRegisteredEventName(uint8 EventValue) const
{
	if (RegisteredEnums)
	{
		FText EventName = RegisteredEnums->GetDisplayNameTextByValue(EventValue);
		if (EventName.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("There is no event with event value: %d."), EventValue);
			return FText();
		}

		return EventName;
	}

	UE_LOG(LogTemp, Warning, TEXT("No Events have been registered!"));
	return FText();
}

TArray<FText> UDelegateManager::GetAllRegisteredEventNames() const
{
	TArray<FText> DisplayNames;

	if (!RegisteredEnums)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Events have been registered!"));
		return DisplayNames;
	}

	for (const auto& Pair : GlobalEventMap)
	{
		int32 EnumIndex = RegisteredEnums->GetIndexByValue(Pair.Key);
		if (EnumIndex != INDEX_NONE)
		{
			DisplayNames.Add(RegisteredEnums->GetDisplayNameTextByIndex(EnumIndex));
		}
	}

	return DisplayNames;
}

bool UDelegateManager::IsKeyRegistered(uint8 EventKey) const
{
	return GlobalEventMap.Contains(EventKey);
}