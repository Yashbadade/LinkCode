#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *addr;
}*start=NULL,*curr=NULL,*p1,*p2,*p3;


void create(int n){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node));
    newnode->data=n;
    newnode->addr=NULL;

    if (start==NULL)
    {
        start=newnode;
    }
    else{
        curr=start;
        while (curr->addr!=NULL)
        {
            curr=curr->addr;
        }
        curr->addr=newnode;
    }
}

void display(){
    curr=start;
    while (curr!=NULL)
    {
        printf("|%d|%u|-->",curr->data,curr->addr);
        curr=curr->addr;
    }
}

void reverse(){
    p1=start;
    p2=p1->addr;
    p3=p2->addr;
    while (p3!=NULL)
    {
       p2->addr=p1;
       p1=p2;
       p2=p3;
       p3=p3->addr;
    }
    p2->addr=p1;
    start->addr=NULL;
    start=p2;
    printf("\nLinked list is Reversed...");
}

int main(){
    int n;
    int ch,ct;
    while (1)
    {
        printf("\n1.Create\n2.Display\n3.Reverse");
        printf("\nEnter your Choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter a Number in Linked List: ");
            scanf("%d",&n);
            create(n);
            break;
        
        case 2:
            display();
            break;

        case 3:
            reverse();
            break;
        }
        printf("\nDo you want to continue Press 1 or Press 2 for Exit: ");
        scanf("%d",&ct);
        if (ct!=1)
        {
            break;
        }   
    }
    printf("\n--------Thank You--------");
}