#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->size = size;
	q->arr = new unsigned int[size];
	q->alrIn = 0;
}

void cleanQueue(Queue* q)
{
	delete q->arr;
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->arr[q->alrIn] = newValue;
	q->alrIn++;
}

bool isFull(Queue* s)
{
	return s->alrIn >= s->size;
}

int dequeue(Queue* q) 
{
	int value = -1;
	if (isEmpty(q)) 
	{
		value = -1; 
	}
	else
	{
		value = moveLeftArr(q);
	}
	return value;
}

int moveLeftArr(Queue* q)
{
	int i = 0;
	int value = q->arr[0];
	q->alrIn--;
	for (i = 0; i < q->alrIn; i++)
	{
		q->arr[i] = q->arr[i + 1];
	}
	return value;
}

bool isEmpty(Queue* q) 
{
	return q->alrIn == 0;
}
