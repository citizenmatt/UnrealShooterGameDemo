// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "Demo_RPC.generated.h"

UCLASS()
class SHOOTERGAME_API UDemo_RPC : public UObject
{
	GENERATED_BODY()

	int GetHealth();

	// Uncomment RPC function. Currently has no implementation
	// Alt+Enter to generate definition in Demo_RPC.cpp
	// Will generate ClientGameStarted_Implementation
	// UFUNCTION(Reliable, Client)
	// void ClientGameStarted();

	// Uncomment RPC method declaration. Currently has no implementation
	// Alt+Enter will generate both _Implementation and _Validation methods
	// Once generated:
	// * Use gutter icon to navigate
	// * Use Alt+Enter -> ServerSetRunning has related functions to navigate
	// * Use Navigate To (via Alt+Enter) to navigate to related functions
	// * Use Go To Definition to navigate to related functions
	// UFUNCTION(Reliable, Server, WithValidation)
	// void ServerSetRunning(bool bNewRunning, bool bToggle);

	// Uncomment RPC method declaration and inline definition of _Implementation
	// Related _Validate function is missing. Alt+Enter to generate
	// Once generated:
	// * Rename method declaration - related functions are also renamed
	// * Rename one of the related functions - RPC function will also be renamed
	// * Change signature (via Refactor This in Alt+Menu) and add a parameter. Related functions will also be updated
	//   (e.g. int32 Delay)
	// UFUNCTION(Reliable, Server, WithValidation)
	// void ServerSetTimer(int32 Duration);
	// void ServerSetTimer_Implementation(int32 Duration) { }
};
