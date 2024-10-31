#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct LLNode
{
    void * data;
    struct LLNode * next;
}Node;

typedef struct
{
    Node * head;
}LinkedList;

typedef void (*FnPtr)(void * data);
LinkedList * createLinkedList();
void insert_Last(LinkedList * list, void * data);
void * remove_Last(LinkedList * list);
void freeLinkedList(LinkedList * list, FnPtr fp);
void freeData(void*);

#endif
