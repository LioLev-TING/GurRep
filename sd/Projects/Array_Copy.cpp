#include "Array_Copy.h"

void copyArray(int* originalArray, int endPoint, int* newArray, int newLength)
{
	for (int i = 0; i <= endPoint || i <= newLength; i++)
	{
		newArray[i] = originalArray[i];
	}
}