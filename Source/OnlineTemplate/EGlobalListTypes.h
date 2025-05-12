// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EGlobalListTypes.generated.h"

// Dummy struct to force Unreal to generate the header
USTRUCT(BlueprintType)
struct FGameEnumsHelper
{
    GENERATED_BODY()
};

// Enum for UI Classes
UENUM(BlueprintType)
enum EMenuTypes : uint8
{
    /** None for Hud class */
    UI_NONE            UMETA(DisplayName = "NONE"),
    /** MainMenu widget */
    UI_MainMenu        UMETA(DisplayName = "MainMenu"),
    /** Menu widget */
    UI_Menu            UMETA(DisplayName = "Menu"),
    /** Settings widget */
    UI_Settings        UMETA(DisplayName = "Settings"),
    /** SaveGame widget */
    UI_SaveGame        UMETA(DisplayName = "SaveGame"),
    /** Map widget */
    UI_Map             UMETA(DisplayName = "Map"),
    /** Invetory widget */
    UI_Inventory       UMETA(DisplayName = "Inventory")
};

// Enum for Character Classes
UENUM(BlueprintType)
enum ECharacterTypes : uint8
{
    CH_Warrior     UMETA(DisplayName = "Warrior"),
    CH_Mage        UMETA(DisplayName = "Mage"),
    CH_Rogue       UMETA(DisplayName = "Rogue"),
    CH_Archer      UMETA(DisplayName = "Archer")
};

// Enum for World Classes
UENUM(BlueprintType)
enum EWorldTypes : uint8
{
    W_Easy        UMETA(DisplayName = "Easy"),
    W_Normal      UMETA(DisplayName = "Normal"),
    W_Hard        UMETA(DisplayName = "Hard"),
    W_Nightmare   UMETA(DisplayName = "Nightmare")
};

// Enum for Broadcasts
UENUM(BlueprintType)
enum EMessageTypes : uint8
{
    /** Message to NONE, DefaultValue to notify if you forgot to set up MessageType */
    BNONE        UMETA(DisplayName = "NONE"),
    /** Message to UI Delegates widget */
    BUI          UMETA(DisplayName = "UI"),
    /** Message to Character Delegates */
    BCharacter   UMETA(DisplayName = "Character"),
    /** Message to Input Delegates */
    BInputs      UMETA(DisplayName = "Input"),
    /** Message to World Delegates */
    BWorld       UMETA(DisplayName = "World")
};

UENUM()
enum class EDataTypes : uint8
{
    BOOLEAN     UMETA(DisplayName = "BOOLEAN"),
    INT32		UMETA(DisplayName = "INT32"),
    INT64		UMETA(DisplayName = "INT64"),
    FLOAT       UMETA(DisplayName = "FLOAT"),
    BYTE		UMETA(DisplayName = "BYTE"),
    VECTOR      UMETA(DisplayName = "VECTOR"),
    ROTATOR     UMETA(DisplayName = "ROTATOR"),
    TRANSFORM   UMETA(DisplayName = "TRANSFORM"),
    OBJECT      UMETA(DisplayName = "OBJECT"),
    CHARACTER   UMETA(DisplayName = "CHARACTER"),
    CONTROLLER  UMETA(DisplayName = "CONTROLLER"),
    ACTOR		UMETA(DisplayName = "ACTOR"),
    STRING      UMETA(DisplayName = "STRING"),
    NAME		UMETA(DisplayName = "NAME"),
    TEXT		UMETA(DisplayName = "TEXT"),
};
enum class EPositionTypes : uint8
{
    FIRST			UMETA(DisplayName = "1"),
    SECOND			UMETA(DisplayName = "2"),
    THIRD			UMETA(DisplayName = "3"),
    FOURTH			UMETA(DisplayName = "4")
};