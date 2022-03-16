// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "Demo_ReflectionMacros.generated.h"

/**
 * Demo class to help demonstrate reflection macro support
 */


// Show F1 help and QuickDoc for the macro, and for the Config specifier
// Add another specifier. Get completion, with QuickDoc in the completion list
UCLASS(Config=Game, Experimental)
class SHOOTERGAME_API UDemo_ReflectionMacros : public UObject
{
	GENERATED_BODY()

private:
	// QuickDoc for UPROPERTY and macro specifier
	// Add another specifier. Get completion, with QuickDoc in the completion list
	// UPROPERTY(Transient, BlueprintAssignable)
	// UAudioComponent* AudioComponent;

	// Comment out the UPROPERTY macro: UObject item without a macro won't be tracked by the object system and can be
	// garbage collected while still in use
	// UPROPERTY(Transient)
	// UShapeComponent* ShapeComponent;

public:
	// QuickDoc for UFUNCTION and macro specifiers
	// UFUNCTION(BlueprintCallable, Category=Behaviour)
	// void Jump();

	// UFUNCTION macro not applied to anything is redundant
	// Alt+Enter to remove
	// UFUNCTION()
};

// Inspection error: UCLASS must be assigned to a class
// UCLASS()
// struct FMyStruct
// {
// };

// Inspection error: USTRUCT must be assigned to a struct
// USTRUCT()
// class FMyClass
// {
// };

// Inspection error: Missing UCLASS declaration
// Alt+Enter to fix
// class UMyClass : public UObject
// {
	// GENERATED_BODY()
// };

// Inspection error: UCLASS must derive directly or indirectly, from UObject
// UCLASS()
// class UMyClassWithWrongBaseClass // : public UObject
// {
// };

// Inspection error: UCLASS must not derive from multiple UObject based classes
// UCLASS()
// class AMyClassWithMultipleBaseClasses : public AActor, UObject
// {
// };

// Inspection error: Interface must be empty
// UINTERFACE()
// class UMyInterface : public UInterface
// {
	// GENERATED_BODY()

// public:
	// // Delete these lines to fix warning
	// UPROPERTY()
	// int count;
// };


// Use UCLASS, USTRUCT, UENUM or UENUMCLASS Live Templates to quickly generate code with appropriate macros
// See the Live Templates page to edit the generated code

