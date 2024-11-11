#include "LinkedList.h"

intNode* createIntNode(intNode* Head)
{
	intNode* newNode = new intNode; // Creates the new node to add
	newNode->data = 0;
	newNode->next = nullptr;
	if (Head == nullptr) // Empty LinkedList
	{
		return newNode;
	}
	intNode* step = Head; // New node that runs through the list
	while (step->next != nullptr) // Stops at the last element
	{
		step = step->next;
	}
	step->next = newNode;
	return Head;
}

intNode* deleteFromEnd(intNode* Head)
{
	if (Head != nullptr) // Head is not yet empty
	{
		if (Head->next == nullptr) // Head is the only node
		{
			delete Head;
			return nullptr;
		}
		intNode* step = Head; // New node that runs through the list
		while (step->next->next != nullptr) // Stops before the last node
		{
			step = step->next;
		}
		delete step->next; // Deletes the last node
		step->next = nullptr; // Sets the pointer of the node before to null
		return Head;
	}
	return nullptr; // Head is empty, return null
}

