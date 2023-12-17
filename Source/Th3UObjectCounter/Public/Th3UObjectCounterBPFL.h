/* SPDX-License-Identifier: MPL-2.0 */

#pragma once

#include <CoreMinimal.h>
#include <Kismet/BlueprintFunctionLibrary.h>

#include "Th3UObjectCounterBPFL.generated.h"

UCLASS()
class TH3UOBJECTCOUNTER_API UTh3UObjectCounterBPFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Th3 UObject Counter")
	static int32 GetObjectArrayNum();

	UFUNCTION(BlueprintCallable, Category = "Th3 UObject Counter")
	static int32 GetObjectArrayCapacity();
};
