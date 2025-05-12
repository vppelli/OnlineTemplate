// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SUIData.h"
#include "EGlobalListTypes.h"
#include "PDAEvents.generated.h"



UCLASS()
class ONLINETEMPLATE_API UPDAEvents : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/** Description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Structs")
	FSUIData DataValues;
};
