#ifndef UTILS_H
#define UTILS_H

using namespace std;
#include <iostream>
#include "Stack.h"

#define TEN 10

/*
Reverses an array using a Stack 
Input: An array of ints and the size of the array
Output: None
*/
void reverse(int* nums, unsigned int size);

/*
Gets input from the use into a Stack and returns an array with the numbers in the oppiste order
Input: None
Output: An array
*/
int* reverse10();

#endif // UTILS_H