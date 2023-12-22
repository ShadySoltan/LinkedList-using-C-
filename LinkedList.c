#include "LinkedList.h"

void Add_Node_To_Head(int data)
{
    Node *current = (Node*)malloc(sizeof(Node));
    if(Head == NULL)
    {
        //Linked List is empty
        Head = current;
        Tail = current;
        Head->next = NULL;
        Tail->next = NULL;
        current->data = data;
    }
    else
    {
        current->data = data;
        current->next = Head;
        Head = current;
    }
}

void Add_Node_To_Tail(int data)
{
    Node *current = (Node*)malloc(sizeof(Node));
    if(Head==NULL)
    {
        //linkedList is empty
        Head = current;
        Tail = current;
        Head->next = NULL;
        Tail->next = NULL;
        current->data = data;
    }
    else
    {
        Tail->next = current;
        Tail = current;
        Tail->next = NULL;
        current->data = data;
    }
}

void Remove_From_Middle(int data)
{
    Node *prev, *current;
    prev = Head;
    current = Head->next;
    
    while (current != NULL)
    {
        if (current->data == data)
        {
            prev->next = current->next;
            free(current);
            break;
        }

        current = current->next;
        prev = prev->next;
    }
}

void Remove_From_Head(void)
{
    Node *Myhead;
    Myhead = Head;
    Head = Head->next;
    free(Myhead);
}

void Remove_From_Tail(void)
{
    Node *findTail,*findBeforeTail;
    findTail = Head->next;
    findBeforeTail = Head;
    while (findTail->next != NULL)
    {
        findTail = findTail->next;
        findBeforeTail = findBeforeTail->next;
    }
    free(findTail);
    findBeforeTail->next = NULL;
    Tail = findBeforeTail;
}

void Print_LinkedList(void)
{
    Node *temp;
    temp = Head;
    int i = 1;
    while(temp != NULL)
    {
        printf("Node %d: %d\n",i,temp->data);
        i++;
        temp = temp->next;
    }
}

int main()
{
    Add_Node_To_Head(5);
    Add_Node_To_Head(4);
    Add_Node_To_Tail(6);
    Print_LinkedList();
    printf("*******************\n");
    Remove_From_Middle(5);
    Remove_From_Tail();
    Print_LinkedList();
    return 0;
}