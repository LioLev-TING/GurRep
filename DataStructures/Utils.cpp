#include "Utils.h"

void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	initStack(s);
	for (int i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (int i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
}

int* reverse10()
{ 
	int* arr = new int[TEN];
	for (int i = 0; i < TEN; i++)
	{
		cin >> arr[i];
	}
	reverse(arr, TEN);
	return arr;
}
