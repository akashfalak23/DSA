#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

//Call By Value
void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->",first->data);
        first = first -> next;   
    }
    printf("NULL \n");
    
}

int Count(PNODE first)
{
    int iCount = 0;
    while (first != NULL)
    {
        iCount++;
        first = first -> next;   
    }
    return iCount;
}

//Call by Address

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if (*first == NULL)     //LL is empty
    {
       (*first) = newn; 
    }
    else
    {
        newn -> next = (*first);
        (*first) = newn;
    }
    
    
}

void InsertLast(PPNODE first,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if (*first == NULL)     //LL is empty
    {
       *first = newn; 
    }
    else
    {
        
    }
}

void InsertAtPos(PPNODE first,int no,int pos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first,int pos)
{}

int main()
{   
    PNODE head = NULL;
    int iRet = 0;
   

    InsertFirst(&head,75);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet =Count(head);

    printf("Number of nodes are : %d\n",iRet);


    InsertLast(&head,21);
    InsertAtPos(&head,51,5);

    DeleteFirst(&head);
    DeleteLast(&head);
    DeleteAtPos(&head,5);

    return 0;
}