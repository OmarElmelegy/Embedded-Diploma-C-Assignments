#include "../STD_TYPES.h"
#include <stdio.h>
#include <stdlib.h>

#include "SinglyLinkedList.h"

void SingleList_DisplayList(SNode_t* Start)
{
    if(Start == NULL){
        printf("Empty List\n");
    }
    else
    {
        SNode_t* ptr = Start;
        while (ptr)
        {
        printf("%d\t", ptr->Info);
        
        ptr = ptr->Link;
        }
    }
}

uint8 SingleList_CountNodes(SNode_t* Start)
{
    uint8 Counter = 0u;
    SNode_t* ptr = Start;

    while(ptr != NULL){
        Counter++;

        ptr = ptr->Link;
    }

    return Counter;
}

sint8 SingleList_Search(SNode_t* Start, sint32 Data)
{
    sint8 Position = 1;
    SNode_t* ptr = Start;

    while (ptr != NULL)
    {
        if(ptr->Info == Data){
            break;
        }
        Position++;
        ptr = ptr->Link;
    }
    if(ptr == NULL){
        Position = -1;
    }
    else
    {
        //Nothing Here "Misra or smth idk"
    }
    return Position;
}

SNode_t* SingleList_InsertAtBeginning(SNode_t* Start, sint32 Data)
{
    SNode_t * Temp = (SNode_t*)malloc(sizeof(SNode_t));
    Temp -> Info = Data;
    Temp -> Link = Start; //This Handles insertion at beginning, instertion in empty
    Start = Temp;

    return Start;
}

void SingleList_InsertAtEnd(SNode_t* Start, sint32 Data)
{
    SNode_t * Temp = (SNode_t*)malloc(sizeof(SNode_t));
    Temp -> Info = Data;
    /*Now we need a pointer that points to the last node*/
    while (ptr->Link != NULL)
    {
        ptr = ptr-> Link;
    }
    ptr -> Link = Temp;
    Temp -> Link = NULL;
}

SNode_t *SingleList_CreateList(void)
{
    uint32 i, n;
    SNode_t *Start = NULL;

    printf("Enter Number of Nodes: ");
    scanf("%d", &n);
    if(n == 0){
        /*Invalid Input*/
        return NULL;
    }
    else{
        sint32 data;
        printf("Enter the 1st element: ");
        scanf("%d",&data);
        Start = SingleList_InsertAtBeginning(Start, data);
        for (i = 1; i < n; i++)
        {
            printf("Enter next data element :");
            scanf("%d", &data);
            SingleList_InsertAtEnd(Start, data);
        }
    }
    return Start;
}

void SingleList_InsertAfter(SNode_t* Start, sint32 ValueAfter, sint32 Data){
    SNode_t* p = Start;
    while(p != NULL){
        if(p->Info == ValueAfter)
            break;
            p = p->Link;
    }
    if(p == NULL){
        printf("\nValue not found\n");
    }
    else{
        SNode_t* Temp = (SNode_t*)malloc(sizeof(SNode_t));
        Temp ->Info = Data;
        Temp->Link= p->Link;
        p->Link = Temp;
    }
}

SNode_t * SingleList_InsertBefore(SNode_t* Start, sint32 ValueBefore, sint32 Data){
    if(Start == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        SNode_t* Temp = (SNode_t*)malloc(sizeof(SNode_t));
        while (p -> Link != NULL)
        {
            if (p->Link->Info == Data)
                break;
            p = p->Link;
        }
        if(p->Link == NULL)
        {
            //Not Found
        }
        else
        {
            Temp->Link = p->Link;
            p->Link = Temp;
        }
    }
    /* Check Case: Insertion before the 1st Node,
    in this case call insert at beginning */
    return Start;
}

SNode_t * SingleList_InsertAtPosition(SNode_t* Start, sint8 Position, sint32 Data)
{
/* If position is K, get pointer that points to K-1*/
    uint32 i = 0;
    SNode_t* p = Start;
    for(i = 1; (p!=NULL) && (i<Position-1); i++)
        p = p->Link;
    if(p == NULL){
        /*Invalid Position*/
    }
    else{
        SNode_t *Temp = (SNode_t *)malloc(sizeof(SNode_t));
        Temp->Data = Data;
        Temp->Link = p->Link;
        p->Link = Temp;
        /*This actually is valid if we insert at last position,
        we should do a case for insertion at position 1 thus call insert at beginning*/
    }
    return Start;
}

SNode_t* SingleList_DeleteNode(SNode_t* Start, sint32 val)
{
    if(Start == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        SNode_t* Temp;
        if(Start->Info == val)
        {
            /*Deletion of first node or the only node*/
            Temp = Start;
            Start = Start -> Link;
            free(Temp);
        }
        else
        {
            /*Deletion in between or at the end*/
            SNode_t* ptr = Start;
            while (ptr->Link != NULL)
            {
                if(ptr->Link->Info == val)
                {
                    break;
                }
                ptr = ptr ->Link;
            }
            if(ptr->Link == NULL)
            {
                printf("\nValue not found\n");
            }
            else
            {
                /*Value is found*/
                Temp = ptr->Link;
                ptr->Link = Temp->Link;
                free(Temp);
            }
        }
    }
    return Start;
}