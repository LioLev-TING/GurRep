#ifndef QUEUE_H
#define QUEUE_H

#define ZERO 0

/* a queue contains positive integer values. */
typedef struct Queue
{
	int* tnQueue;
	int MaxSize;
	int CurrentSpot;
	
} Queue;

/*
Initializes a Queue based on size
Input: A pointer to a Queue and the size of the Queue
Output: A new Queue
*/
void initQueue(Queue* q, unsigned int size);

/*
Deletes the Queue
Input: Pointer to a Queue
Output: None
*/
void cleanQueue(Queue* q);


/*
Adds a new value to the first avalible spot it the Queue
Input: A Queue and a value
Output: None
*/
void enqueue(Queue* q, unsigned int newValue);

/*
Removes the item that was in the Queue for the most time and fixes the Queue accordingly
Input: A Queue
Output: The value of the first item in the Queue FIFO
*/
int dequeue(Queue* q); // return element in top of queue, or -1 if empty


/*
Checks if the Queue is empty
Input: A Queue
Output: True or False (is the Queue empty?)
*/
bool isEmpty(Queue* s);

/*
Checks if the Queue is full
Input: A Queue
Output: True or False (is the Queue full?)
*/
bool isFull(Queue* s);

#endif /* QUEUE_H */