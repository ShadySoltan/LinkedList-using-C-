#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node *Head=NULL,*Tail=NULL;

void Add_Node_To_Head(int data);
void Add_Node_To_Tail(int data);
void Remove_From_Middle(int data);
void Remove_From_Head(void);
void Remove_From_Tail(void);
void Print_LinkedList(void);

#endif