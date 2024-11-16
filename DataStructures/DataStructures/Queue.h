#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

/* a queue contains positive integer values. */
typedef struct Queue
{
	// Complete the definition here
	unsigned int* arr;
	unsigned int size;
	unsigned int alrIn;
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);
int moveLeftArr(Queue* q);
#endif /* QUEUE_H */