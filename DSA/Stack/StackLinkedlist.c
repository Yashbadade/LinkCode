#include<stdio.h>
#include<stdlib.h>

struct StackLinkedlist
{
    int data;
    struct StackLinkedlist *addr;
}*top=NULL,*temp=NULL;

void push(int n){
    struct StackLinkedlist *newnode;
    newnode=malloc(sizeof(struct StackLinkedlist));
    newnode->data=n;
    newnode->addr=NULL;

    if (top==NULL)
    {
        top=newnode;
    }
    else
    {
        newnode->addr=top;
        top=newnode;
    }
}

void pop(){
    if (top!=NULL)
    {
        temp=top;
        printf("|%d|%u| is Pop",temp->data,temp->addr);
        top=top->addr;
        temp->addr=NULL;
        free(temp);
    }
    else{
        printf("\nOops!! Stack is Empty...");
    }
}

void display(){
    if (top==NULL)
    {
        printf("\nOops!! Stack is Empty...");
    }
    else{
        temp=top;
        while (temp!=NULL)
        {
            printf("|%d|%u|-->",temp->data,temp->addr);
            temp=temp->addr;
        }
    }
}

int main(){
    int ch,ct;
    int n;
    do
    {
        printf("\n1.Push\n2.Pop\n3.Display");
        printf("\nEnter your Choice: ");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:
            printf("\nEnter a Number in Stack: ");
            scanf("%d",&n);
            push(n);
            break;
        
        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            printf("\nInvalid Choice....");
            break;
        }
        printf("\nDo you want to continue Press 1 or Press 2 for Exit...");
        scanf("%d",&ct);
    } while (ct==1);
    printf("\n---------THANK YOU----------");
}