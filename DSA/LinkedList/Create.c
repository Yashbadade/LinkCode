#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *addr;
} *start, *curr;

void create(int n)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node *));
    newnode->data = n; // 1 3
    newnode->addr = NULL;

    if (start == NULL)
    {
        start = newnode; // 1 1000
    }
    else
    {
        curr = start; // 1 1000 //
        while (curr->addr != NULL)
        {
            curr = curr->addr;
        }
        curr->addr = newnode; // 2000
    }
}

void display()
{
    curr = start;
    while (curr != NULL)
    {
        printf("| %d | %u | -->", curr->data, curr->addr);
        curr = curr->addr;
    }
}

void insertfirst(int n){
    struct node *newnode;
    newnode = malloc(sizeof(struct node *));
    newnode->data = n; 
    newnode->addr = start;
    start=newnode;
}

void insertmiddle(int n,int loc){
    struct node *prev,*next,*newnode;
    newnode = malloc(sizeof(struct node *));
    newnode->data = n; 
    newnode->addr = NULL;

    prev=NULL;
    next=start;
    int cnt=1;
    while (cnt<loc)
    {
        prev=next;
        next=next->addr;
        cnt++;
    }
    prev->addr=newnode;
    newnode->addr=next;
}

void deletefirst(int n){
    
    curr=start;
    start=start->addr;
    curr->addr=NULL;
    free(curr);
    printf("\nFirst Node Deleted Successfully!!");
}

void deletemiddle(int loc){
    struct node *prev,*next;
    prev=NULL;
    next=start;
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
    printf("\n Node Deleted Successfully!!");      
}

int main()
{
    while (1)
    {
        int n,loc;
        int ct;
        int ch;

        printf("\n1.Create\n2.Display\n3.Insert First node\n4.Insert middle\n5.Delete First Node\n6.Delete Middle Node");
        printf("\nEnter your Choice:");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter any Number:");
            scanf("%d", &n);
            create(n);
            break;

        case 2:
            display();
            break;

        case 3:
            printf("\nEnter new Number to be inserted at Start");
            scanf("%d",&n);
            insertfirst(n);
            break;

        case 4:
            printf("\nEnter new Number and location to be inserted ");
            scanf("%d%d",&n,&loc);
            insertmiddle(n,loc);
            break;

        case 5:
            deletefirst(n);
            break;

        case 6:
            printf("\nEnter location of node you want to delete");
            scanf("%d",&loc);
            deletemiddle(loc);
            break;
        }

        printf("\nDo you want to continue press 1 or Press 2 for Exit...");
        scanf("%d", &ct);
        if (ct != 1)
        {
            break;
        }
    }
    printf("\n---------Thank You--------------");
}