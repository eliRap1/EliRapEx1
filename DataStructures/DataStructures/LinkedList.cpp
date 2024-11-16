#include "LinkedList.h"

/*
this func adds to the end of the linked list
input: struct node and the value to add to the struct output:none
*/
void addToHead(Node* head, unsigned int value)
{
	Node* temp = head;
	Node* newNode = new Node();
	newNode->next = nullptr;
	newNode->data = value;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}

/*
this func removes from the end of the linked list
input: struct node
output:the value we removed
*/
int removeFromHead(Node* head)
{
	int theElement = 0;
	Node* temp = nullptr;
	if (head == nullptr || head->next == nullptr)
	{
		theElement = -1;
	}
	else
	{
		temp = head;
		while (temp->next->next != nullptr)
		{
			temp = temp->next;
		}
		theElement = temp->next->data;
		delete temp->next;
		temp->next = nullptr;
	}
	return theElement;
}
/*
this func prints all the list
input: struct node
output:none
*/
void printList(Node* head)
{
	Node* temp = nullptr;
	if (head == nullptr)
	{
		std::cout << "List is empty." << std::endl;
	}
	else
	{
		temp = head;
		while (temp->next != nullptr)
		{
			std::cout << temp->data << "\n" << std::endl;
			temp = temp->next;
		}
	}
}