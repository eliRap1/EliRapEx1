#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	addToHead(s->linked, element);
}

int pop(Stack* s)
{
	return removeFromHead(s->linked);
}
void initStack(Stack* s)
{
	s->linked = new Node;
	s->linked->next = nullptr;
	s->linked->data = 0;
}

void cleanStack(Stack* s)
{
	Node* current = s->linked->next;
	Node* temp = current;
	while (current != nullptr)
	{
		temp = current;
		current = current->next;
		delete(temp);
	}
	s->linked->next = nullptr;
}

bool isEmpty(Stack* s)
{
	return s->linked == nullptr || s->linked->next == nullptr;
}

bool isFull(Stack* s)
{
	// A linked-list-based stack is never full unless memory runs out.
	return false;
}

void printStack(Stack* s)
{
	printList(s->linked);
}