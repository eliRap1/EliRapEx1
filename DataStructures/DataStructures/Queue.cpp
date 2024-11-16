#include "Queue.h"

/*
this func initiate the queue by alocating an arr of the size
input: strucrt queue and size of the queue
output: none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->size = size;
	q->arr = new unsigned int[size];
	q->alrIn = 0;
}

/*
this func remove the arr | input:none outputL:none
*/
void cleanQueue(Queue* q)
{
	delete q->arr;
}

/*
this func adds a value to the queue
input: struct queue and the new Value
output:none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	q->arr[q->alrIn] = newValue;
	q->alrIn++;
}
/*
* check if full | input: struct queue output: true if the queue is full
*/
bool isFull(Queue* s)
{
	return s->alrIn >= s->size;
}

/*
this func removes the first element from the queue
input:struct queue
output: -1 if the queue is empty if not the value of the removed element
*/
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

/*
this func moves one element left in the arr
input:struct queue
output: value of thr removed element
*/
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
/*
* check if empty | input: struct queue output: true if the queue is empty
*/
bool isEmpty(Queue* q) 
{
	return q->alrIn == 0;
}
