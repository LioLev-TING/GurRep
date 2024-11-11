#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	s->Head = createIntNode(s->Head);
	intNode* step = s->Head;
	while (step->next != nullptr)
	{
		step = step->next;
	}
	step->data = element;
}

int pop(Stack* s)
{
	if (!isEmpty(s))
	{
		int r = 0;
		intNode* step = s->Head;
		while (step->next != nullptr)
		{
			step = step->next;
		}
		r = step->data;
		deleteFromEnd(s->Head);
	}
	return -1;
}

void initStack(Stack* s)
{
	s = new Stack;
	s->Head = new intNode;
	s->Head->data = 0;
	s->Head->next = nullptr;
}

void cleanStack(Stack* s)
{
	intNode* step = s->Head;
	intNode* next = s->Head;
	while (step->next != nullptr)
	{
		next = step->next;
		delete step;
		step = next;
	}
	delete next;
	delete s;
}

bool isEmpty(Stack* s)
{
	return s->Head == nullptr;
}

bool isFull(Stack* s)
{
	return false;
}
