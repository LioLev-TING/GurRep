#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	if (s->Head != nullptr) // Head not empty
	{
		s->Head = createIntNode(s->Head); // Add new node at the end for LIFO
		intNode* step = s->Head; // Create a new node that moves along the list
		while (step->next != nullptr) // Stop at last node
		{
			step = step->next;
		}
		step->data = element; // Give value for new node
	}
	else // Empty head, create a new one
	{
		s->Head = new intNode;
		s->Head->data = element;
		s->Head->next = nullptr;
	}
}

int pop(Stack* s)
{
	if (s->Head != nullptr && s->Head->next == nullptr) // One node
	{
		int r = s->Head->data;
		s->Head = nullptr;
		return r;
	}
	else if (!isEmpty(s)) // More than one node
	{
		int r = 0;
		intNode* step = s->Head;
		while (step->next != nullptr)
		{
			step = step->next;
		}
		r = step->data; // Save before deleting
		deleteFromEnd(s->Head);
		return r;
	}
	return -1; // No nodes
}

void initStack(Stack* s)
{
	s->Head = nullptr;
}

void cleanStack(Stack* s)
{
	if (!isEmpty(s)) // If the List isnt empty
	{
		intNode* step = s->Head;
		intNode* next = s->Head;
		while (step->next != nullptr) // Deletes every node after saving the one after
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
