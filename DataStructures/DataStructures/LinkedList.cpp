#include "LinkedList.h"
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

int removeFromHead(Node* head)
{
	int isRemoved = 0;
	Node* temp = nullptr;
	if (head == nullptr || head->next == nullptr)
	{
		isRemoved = -1;
	}
	else
	{
		temp = head;
		while (temp->next->next != nullptr)
		{
			temp = temp->next;
		}
		delete temp->next;
		temp->next = nullptr;
	}
	return isRemoved;
}

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