#include <iostream>
#include "Queue.h"

int main1()
{
	Queue* q = new Queue;
	initQueue(q,1);
	enqueue(q, 2);
	dequeue(q);
	dequeue(q);
	return 0;
}