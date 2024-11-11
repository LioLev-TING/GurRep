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
	if (q->CurrentSpot < q->MaxSize)
	{
		q->tnQueue[q->CurrentSpot] = newValue;
		q->CurrentSpot++;
	}
}

int dequeue(Queue* q)
{
	if (q->CurrentSpot > 0)
	{
		int rItem = q->tnQueue[ZERO];
		for (int i = 1; i < q->MaxSize; i++)
		{
			q->tnQueue[i - 1] = q->tnQueue[i];
		}
		q->CurrentSpot--;
		return rItem;
	}
	return -1;

}
bool isEmpty(Queue* s)
{
	return s->CurrentSpot == 0;
}
bool isFull(Queue* s)
{
	return s->CurrentSpot == s->MaxSize;
}