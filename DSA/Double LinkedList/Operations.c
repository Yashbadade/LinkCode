#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *addr_next;
    struct Node *addr_prev;
}*start=NULL,*curr=NULL,*prev,*next;

void create(int n){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node*));
    newnode->data=n;
    newnode->addr_next=NULL;
    newnode->addr_prev=NULL;

    if (start==NULL)
    {
        start=newnode;
    }
    else{
        curr=start;
        while (curr->addr_next!=NULL)
        {
            curr=curr->addr_next;
        }
        curr->addr_next=newnode;
        newnode->addr_prev=curr;
    }
}

void display(){
    curr=start;
    while(curr!=NULL){
        printf("|%u|%d|%u|-->",curr->addr_prev,curr->data,curr->addr_next);
        curr=curr->addr_next;
    }
}

void insertfirst(int newval){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node*));
    newnode->data=newval;
    newnode->addr_next=start;
    newnode->addr_prev=NULL;

    if (start!=NULL)
    {
        start->addr_prev=newnode;
        start=newnode;
        printf("\nNode Inserted at First....");
    }
    else{
    start=newnode;
    printf("\nNode Inserted at First....");
    }
}

void insertmiddle(int newval,int loc){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node*));
    newnode->data=newval;

    prev=NULL;
    curr=start;
    int cnt=1;
    while (cnt<loc)
    {   
        prev=curr;
        curr=curr->addr_next;
        cnt++;
    }
    newnode->addr_prev=prev;
    newnode->addr_next=curr;
    prev->addr_next=newnode;
    curr->addr_prev=newnode;
}

void deletefirst(){
    curr=start;
    start=curr->addr_next;
    curr->addr_next=NULL;
    free(curr);
    printf("\nFirst Node is Deleted.....");
}

void deletemiddle(int loc){
    prev=NULL;
    next=start;
    int cnt=1;
    while (cnt<loc)
    {
        prev=next;
        next=next->addr_next;
        cnt++;
    }
    prev->addr_next=next->addr_next;
    free(next);
    printf("\nNode Deleted Successfully");
}

int main(){
    int n;
    int ch,ct;
    int newval,loc;
    while (1)
    {
    
    printf("\n1.Create\n2.Display\n3.Insert First Node\n4.Insert Middle Node\n5.Delete First Node\n6.Delete Middle Node");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\nEnter a Number:");
        scanf("%d",&n);
        create(n);
        break;
    
    case 2:
        display();
        break;

    case 3:
        printf("\nEnter a New value to insert at First of Double Linkedlist:");
        scanf("%d",&newval);
        insertfirst(newval);
        break;

    case 4:
        printf("\nEnter a New value and Location to insert new node:");
        scanf("%d%d",&newval,&loc);
        insertmiddle(newval,loc);
        break;

    case 5:
        deletefirst();
        break;

    case 6:
        printf("\nEnter a Location of node to be Deleted: ");
        scanf("%d",&loc);
        deletemiddle(loc);
        break;
    }
    printf("\nDo you want to continue press 1 or Press 2 for Exit");
    scanf("%d",&ct);
    if (ct!=1)
    {
        break;
    }
}
    printf("\n--------Thank You---------");
}