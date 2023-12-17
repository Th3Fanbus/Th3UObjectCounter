/* SPDX-License-Identifier: MPL-2.0 */

#include "Th3UObjectCounterBPFL.h"

int32 UTh3UObjectCounterBPFL::GetObjectArrayNum()
{
	/* Requires header edit in UObject/UObjectArray.h to make this FUObjectArray befriend this class */
	return GUObjectArray.GetObjectItemArrayUnsafe().Num() - GUObjectArray.ObjAvailableList.Num();
}

int32 UTh3UObjectCounterBPFL::GetObjectArrayCapacity()
{
	return GUObjectArray.GetObjectItemArrayUnsafe().Capacity();
}
