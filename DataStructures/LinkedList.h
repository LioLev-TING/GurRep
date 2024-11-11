#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct intNode
{
	int data;
	struct intNode* next;
} intNode;

/*
Adds a new node to the end of a Linked list, if no nodes in list, create head
Input: Head of a LinkedList
Output: The head of a LinkedList with a new node at the end
*/
intNode* createIntNode(intNode* Head);

/*
Function removes the last node from a linked list
Input: Head of a LinkedList
Output: The head of the linked list without the last node
*/
intNode* deleteFromEnd(intNode* Head);

#endif /* LINKED_LIST_H */