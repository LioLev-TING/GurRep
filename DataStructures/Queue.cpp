#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->CurrentSpot = ZERO;
	q->MaxSize = size;
	q->tnQueue = new int[size];
}

void cleanQueue(Queue* q)
{
	delete[] q->tnQueue;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (q->CurrentSpot < q->MaxSize) // Checks is its possible to add a new element
	{
		q->tnQueue[q->CurrentSpot] = newValue;
		q->CurrentSpot++; // Continues to the next index in the array
	}
}

int dequeue(Queue* q)
{
	if (q->CurrentSpot > 0) // Not empty
	{
		int rItem = q->tnQueue[ZERO];
		for (int i = 1; i < q->MaxSize; i++) // Runs through the entire array and moves it back since the last element is now gone
		{
			q->tnQueue[i - 1] = q->tnQueue[i];
		}
		q->CurrentSpot--; // Moves the index back by one
		return rItem;
	}
	return -1; // Empty

}
bool isEmpty(Queue* s)
{
	return s->CurrentSpot == 0;
}
bool isFull(Queue* s)
{
	return s->CurrentSpot == s->MaxSize;
}