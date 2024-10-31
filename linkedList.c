#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

LinkedList * createLinkedList() 
{
    LinkedList * lList;
    lList = (LinkedList *)malloc(sizeof(LinkedList));
    lList->head = NULL;
    return lList;
} 

void insert_Last(LinkedList * list, void * data)
{
    Node* nNode;
    Node* tNode;
    nNode = (Node*)malloc(sizeof(Node));
    nNode->data = data;
    nNode->next = NULL;

    if(list->head == NULL)
    {
        list->head = nNode;
        return;
    }

    tNode = list->head;
    while(tNode->next != NULL)
    {
        tNode = tNode->next;
    }
    tNode->next = nNode;
}

void * remove_Last(LinkedList * list)
{
    void* temp = NULL;
    Node* tNode;
    Node* tNode2;
    
    if(list->head != NULL)
    {
    tNode = list->head;
    }
    else 
    {
        while(tNode->next != NULL)
        {
          tNode2 = tNode;
          tNode = tNode->next;
        }
        temp = tNode->data;
        tNode2->next = NULL;
        free(tNode);
    }
    return temp;
}

void freeLinkedList(LinkedList * list, FnPtr fp)
{
    Node* tNode;
    Node* tNode2;
    tNode = list->head;
    while(tNode->next != NULL)
    {
        tNode2 = tNode->next;
        fp(tNode->data);
        free(tNode);
        tNode = tNode2;
    }
    free(list);
}

void free_Data(void* data)
{
    PrevArr * d;
    d = (PrevArr*) data;
    free(d->pArr);
    free(d->xArr);
}

