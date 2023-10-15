#ifndef SINGLY_LINKEDLIST_H
#define SINGLY_LINKEDLIST_H
#include "../STD_TYPES.h"

typedef struct node
{
    sint32 Info;
    struct node* Link;
}SNode_t;

void SingleList_DisplayList(SNode_t* Start);

uint8 SingleList_CountNodes(SNode_t* Start);

sint8 SingleList_Search(SNode_t* Start, sint32 Data);
//Returns position if found, and -1 if not found

SNode_t* SingleList_InsertAtBeginning(SNode_t* Start, sint32 Data);

void SingleList_InsertAtEnd(SNode_t* Start, sint32 Data);

SNode_t *SingleList_CreateList(void);

void SingleList_InsertAfter(SNode_t* Start, sint32 ValueAfter, sint32 Data);

SNode_t * SingleList_InsertBefore(SNode_t* Start, sint32 ValueBefore, sint32 Data);

SNode_t * SingleList_InsertAtPosition(SNode_t* Start, sint32 ValueBefore, sint32 Data);

SNode_t* SingleList_DeleteNode(SNode_t* Start, sint32 val);

#endif