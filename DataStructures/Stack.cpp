#include "Stack.h"

int pop(Stack* s)
{
	intNode* step = s->Head;
	int r = 0;
	while (step->next != nullptr)
	{
		step = step->next;
	}
	r = step->data;
	s->Head = deleteFromEnd(s->Head);
	return r;
}

Stack* push(int n)
{
	return nullptr;
}


