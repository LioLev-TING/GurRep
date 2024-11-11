#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	if (s->Head != nullptr)
	{
		s->Head = createIntNode(s->Head);
		intNode* step = s->Head;
		while (step->next != nullptr)
		{
			step = step->next;
		}
		step->data = element;
	}
	else
	{
		s->Head = new intNode;
		s->Head->data = element;
		s->Head->next = nullptr;
	}
}

int pop(Stack* s)
{
	if (s->Head != nullptr && s->Head->next == nullptr)
	{
		int r = s->Head->data;
		s->Head = nullptr;
		return r;
	}
	else if (!isEmpty(s))
	{
		int r = 0;
		intNode* step = s->Head;
		while (step->next != nullptr)
		{
			step = step->next;
		}
		r = step->data;
		deleteFromEnd(s->Head);
		return r;
	}
	return -1;
}

void initStack(Stack* s)
{
	s->Head = nullptr;
}

void cleanStack(Stack* s)
{
	if (!isEmpty(s))
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
	}
}

bool isEmpty(Stack* s)
{
	return s->Head == nullptr;
}

bool isFull(Stack* s)
{
	return false;
}
