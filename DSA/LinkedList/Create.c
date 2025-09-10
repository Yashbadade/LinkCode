#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *addr;
}*start,*curr;

void create(int n){
    struct node *newnode;
    newnode=malloc(sizeof(struct node*));
    newnode->data=n;//1 3
    newnode->addr=NULL;

    if (start==NULL)
    {
        start=newnode;//1 1000
    }
    else{
        curr=start;//1 1000 // 
        while (curr->addr!=NULL)
        {
            curr=curr->addr;
        }
        curr->addr=newnode;//2000
    }
}

void display(){
    curr=start;
    while (curr!=NULL)
    {
         printf("| %d | %u | -->",curr->data,curr->addr);
        curr=curr->addr;
    }
}

int main(){
    while (1)
    {
        int n;
        int ct;
        printf("\nEnter any Number:");
        scanf("%d",&n);
        create(n);
        display();
        printf("\nDo you want to continue press 1 or Press 2 for Exit...");
        scanf("%d",&ct);
        if (ct!=1)
        {
            break;
        }
    }
    printf("\n---------Thank You--------------");
}