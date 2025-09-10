#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *addr;
}*start,*curr;

int main(){
    int n;
    int ct;

    struct Node *newnode;
    start=NULL;
    while (1)
    {
        printf("Enter any Number");
        scanf("%d",&n);
        newnode=malloc(sizeof(struct Node));
        newnode->data=n;
        newnode->addr=NULL;

        if (start==NULL)
        {
            start=newnode;
            printf("\nLinked List is Created....");
        }
        else{
            curr=start;
            while (curr->addr!=NULL)
            {
                curr=curr->addr;
            }
            curr->addr=newnode;
        }
        printf("\nDisplay....");
        curr=start;
        while (curr!=NULL)
        {
            printf("| %d | %u | -->",curr->data,curr->addr);
            curr=curr->addr;
        }
        printf("\nDo you want to continue Press 1");
        scanf("%d",&ct);
        if(ct!=1){
            break;
        }
    }
    printf("\nThank You......");
}