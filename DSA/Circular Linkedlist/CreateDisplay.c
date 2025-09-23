#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *addr;
}*start=NULL,*curr=NULL,*prev=NULL,*next=NULL;

void create(int n){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node));
    newnode->data=n;
    newnode->addr=NULL;

    if (start==NULL)
    {
        start=newnode;
        newnode->addr=start;
    }
    else{
        newnode->addr=start->addr;
        start->addr=newnode;
        start=newnode;
    }
}

void display(){
    if (start==NULL)
    {
        printf("\nLinked List is Empty....");
    }
    else{
   curr=start->addr;
   while (curr!=start)
   {
        printf("|%d|%u|-->",curr->data,curr->addr);
        curr=curr->addr;
   }
        printf("|%d|%u|-->",curr->data,curr->addr);
}
}

void insertfirst(int n){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node));
    newnode->data=n;

    newnode->addr=start->addr;
    start->addr=newnode;
    printf("\nNew Node inserted at First...");
}

void deletefirst(){
    curr=start->addr;
    start->addr=curr->addr;
    curr->addr=NULL;
    free(curr);
    printf("\nFirst Node Deleted....");
}

void insertmiddle(int n, int loc){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node));
    newnode->data=n;
    newnode->addr=NULL;

    curr=start->addr;
    int cnt=1;
    while (cnt<loc-1)
    {
        curr=curr->addr;
        cnt++;
    }
    newnode->addr=curr->addr;
    curr->addr=newnode;
    printf("\nNode Inserted Successfully....");
}

void deletemiddle(int loc){
    next=start->addr;
    int cnt=1;
    while (cnt<loc)
    {
        prev=next;
        next=next->addr;
        cnt++;
    }
    prev->addr=next->addr;
    next->addr=NULL;
    free(next);
    printf("\nNode Deleted Successfully.....");
}

int main(){
    int n,loc;
    int ct,ch;
    while (1)
    {
        printf("\n1.Create\n2.Display\n3.Insert First\n4.Delete First\n5.Insert Middle\n6.Delete Middle");
        printf("\nEnter your Choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter a Number: ");
            scanf("%d",&n);
            create(n);
            break;
        
        case 2:
            display();
            break;

        case 3:
            printf("\nEnter a Number: ");
            scanf("%d",&n);
            insertfirst(n);
            break;

        case 4:
            deletefirst();
            break;

        case 5:
            printf("\nEnter a Number and Location to insert node: ");
            scanf("%d%d",&n,&loc);
            insertmiddle(n,loc);
            break;

        case 6:
            printf("\nEnter location of node to Delete: ");
            scanf("%d",&loc);
            deletemiddle(loc);
            break;
        }
        printf("\nDo you want to Continue Press 1 or 2 for Exit...");
        scanf("%d",&ct);
        if (ct!=1)
        {
            break;
        }  
    }
    printf("\n-----------THANK YOU-------------");
}