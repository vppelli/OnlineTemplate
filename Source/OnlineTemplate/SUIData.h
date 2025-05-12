
#pragma once

#include "CoreMinimal.h"
#include "EGlobalListTypes.h"
#include "SUIData.generated.h"

/** Structure of UI Data */
USTRUCT(BlueprintType)
struct FSUIData
{
	GENERATED_BODY()

public:
	/** Name of the Widget to use */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "EUIMenu", MakeStructureDefaultValue = "NewEnumerator0"))
	TEnumAsByte<EMenuTypes> EUIMenu;
	/** Character */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
	bool Boolean;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    int32 Int;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    int64 Long;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    uint8 Byte;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    float Float;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    FVector Vector;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    FRotator Rotator;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    FTransform Transform;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    UObject* Object;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    FString String;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    FName Name;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    FText Text;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    TArray<UObject*> ArrayOfObject;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    TArray<FString> ArrayOfString;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    TArray<FName> ArrayOfName;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
    TArray<FText> ArrayOfText;
};