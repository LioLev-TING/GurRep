#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

typedef struct Stack
{
	intNode* Head;
} Stack;

/*
Enters a new value at the "start" of the Stack LIFO
Input: A Stack pointer and a new value (int)
Output: None
*/
void push(Stack* s, unsigned int element);

/*
Pops the last item that entred the Stack out of it and returns the value
Input: A Stack pointer
Output: The value of the last element in the Stack
*/
int pop(Stack* s); // Return -1 if stack is empty


/*
Initializes a new Stack
Input: A Stack pointer
Output: None
*/
void initStack(Stack* s);

/*
Deletes all items from the Stack
Input: A Stack
Output: None
*/
void cleanStack(Stack* s);


/*
Checks if the Stack is empty
Input: A stack
Output: True or False (is the Stack empty?)
*/
bool isEmpty(Stack* s);

/*
Checks if the Stack is full (It is not)
Input: A Stack
Output: True or False (is the Stack full? (No, It doesnt have a limit therfore it can never be true therefore it will always return false therefore it is useless therefore i only made it because you had it in your h file))
*/
bool isFull(Stack* s);

#endif // STACK_H