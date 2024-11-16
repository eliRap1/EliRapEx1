#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
typedef struct Node
{
    int data;
    Node* next;
}Node;

void addToHead(Node* head, int value);

void removeFromHead(Node* head);

void printList(Node* head);

#endif // LINKEDLIST_H