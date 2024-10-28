/* SPDX-License-Identifier: MPL-2.0 */

#include "Th3UObjectCounterBPFL.h"

int32 UTh3UObjectCounterBPFL::GetObjectArrayNum()
{
	return GUObjectArray.GetObjectArrayNumMinusAvailable();
}

int32 UTh3UObjectCounterBPFL::GetObjectArrayCapacity()
{
	return GUObjectArray.GetObjectArrayCapacity();
}
