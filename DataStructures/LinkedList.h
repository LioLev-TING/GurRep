#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct intNode
{
	int data;
	struct intNode* next;
} intNode;

intNode* createIntNode(intNode* Head);
intNode* deleteFromEnd(intNode* Head);

#endif /* LINKED_LIST_H */