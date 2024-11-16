#include "Stack.h"

/*
this func adds to the end of the linked list
input: struct node and the value to add to the struct output:none
*/
void push(Stack* s, unsigned int element)
{
	addToHead(s->linked, element);
}

/*
this func removes from the end of the linked list
input: struct node
output:the value we removed
*/
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

/*
* check if empty | input: struct stack output: true if the stack is empty
*/
bool isEmpty(Stack* s)
{
	return s->linked == nullptr || s->linked->next == nullptr;
}

/*
* 	// A linked-list-based stack is never full unless memory runs out.
*/
bool isFull(Stack* s)
{
	return false;
}

/*
this func prints all the list
input: struct node
output:none
*/
void printStack(Stack* s)
{
	printList(s->linked);
}