#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
typedef struct Node
{
    unsigned int data;
    Node* next;
}Node;

void addToHead(Node* head, unsigned int value);

void removeFromHead(Node* head);

void printList(Node* head);

#endif // LINKEDLIST_H