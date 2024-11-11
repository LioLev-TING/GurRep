#include "Utils.h"

void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	initStack(s);
	for (int i = 0; i < size; i++) // Push values into the Stack at normal order
	{
		push(s, nums[i]);
	}
	for (int i = 0; i < size; i++)
	{
		nums[i] = pop(s); // Pop values from the Stack at a "reversed" order
	}
}

int* reverse10()
{ 
	int* arr = new int[TEN];
	for (int i = 0; i < TEN; i++)
	{
		cin >> arr[i]; // Get input for array
	}
	reverse(arr, TEN); // Reverse array
	return arr;
}
