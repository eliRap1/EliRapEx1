#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->num = size;
	q->next = nullptr;
}

void cleanQueue(Queue* q)
{
	Queue* current = q->next;
	Queue* temp = current;
	while (current != nullptr)
	{
		temp = current;
		current = current->next;
		delete(temp);
	}
	q->next = nullptr;
}

void enqueue(Queue* q, unsigned int newValue)
{
	Queue* newNode = nullptr;
	if (isFull(q)) 
	{
		std::cout << "Queue is full"  << std::endl;
	}
	else
	{
		newNode = new Queue();
		newNode->num = newValue;
		newNode->next = nullptr;
		Queue* temp = q;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

bool isFull(Queue* s)
{
	bool isFull = false;
	int size = 0;
	Queue* temp = s->next;
	while (temp != nullptr) 
	{
		size++;
		temp = temp->next;
	}
	if (size >= s->num)
	{
		isFull = true;
	}
	return isFull;
}

int dequeue(Queue* q) 
{
	int value = -1;
	Queue* frontNode = nullptr;
	if (isEmpty(q)) 
	{
		value = -1; 
	}
	else
	{
		frontNode = q->next;
		value = frontNode->num;
		q->next = frontNode->next;
		delete frontNode;
	}
	return value;
}

bool isEmpty(Queue* q) 
{
	return q->next == nullptr;
}
