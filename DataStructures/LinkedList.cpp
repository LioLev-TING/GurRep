#include "LinkedList.h"

intNode* createIntNode(intNode* Head)
{
	intNode* newNode = new intNode;
	newNode->data = 0;
	newNode->next = nullptr;
	if (Head == nullptr)
	{
		return newNode;
	}
	intNode* step = Head;
	while (step->next != nullptr)
	{
		step = step->next;
	}
	step->next = newNode;
	return Head;
}

intNode* deleteFromEnd(intNode* Head)
{
	if (Head != nullptr)
	{
		if (Head->next == nullptr)
		{
			delete Head;
			return nullptr;
		}
		intNode* step = Head;
		while (step->next->next != nullptr)
		{
			step = step->next;
		}
		delete step->next;
		step->next = nullptr;
		return Head;
	}
	return nullptr;
}

