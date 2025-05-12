
#pragma once

#include "CoreMinimal.h"
#include "DelegatePayload.generated.h"

USTRUCT(BlueprintType)
struct ONLINETEMPLATE_API FDelegatePayload
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UObject*> Objects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> Integers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> Floats;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Strings;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<bool> Booleans;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> Vectors;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> Rotators;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> Transforms;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Names;
};