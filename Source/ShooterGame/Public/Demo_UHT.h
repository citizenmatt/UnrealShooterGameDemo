// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "Demo_UHT.generated.h"

/**
 *
 */
UCLASS()
class SHOOTERGAME_API UDemo_UHT : public UObject
{
	GENERATED_BODY()
public:

	// UHT error: Blueprint Property getter function GetHealth not found
	// UPROPERTY(BlueprintGetter=GetHealth)
	// int Health;

	// UHT error: Replicated functions cannot have return values
	// UFUNCTION(Client)
	// int32 GetHealth();
};

UCLASS()
class UMyClass2 : public UObject
{
	GENERATED_BODY()
public:

	// UHT error: 'BlueprintAssignable' is only allowed on multicast delegate properties
	// UPROPERTY(Transient, BlueprintAssignable)
	// UAudioComponent* AudioComponent;
};

UCLASS()
class UMyClass3 : public UObject
{
	GENERATED_BODY()
public:

	// UHT error: Unknown function specified 'Unknown Specifier'
	// UFUNCTION(UnknownSpecifier)
	// void DoJump();
};

USTRUCT()
struct FMyStruct2
{
	// Uncomment `private:`
	// UHT error: GENERATED_BODY must be in the public scope
// private:
	GENERATED_BODY()
};

USTRUCT()
struct FMyStruct
{
	GENERATED_BODY()

	// UHT error: USTRUCTs cannot contain UFUNCTIONs
	// UFUNCTION()
	// void DoJump();
};

// UHT error: Invalid BlueprintType enum base
// UENUM(BlueprintType)
// enum class EMyEnum : int32
// {
// };
