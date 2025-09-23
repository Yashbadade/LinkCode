#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node {
    int rollno;
    char name[50];
    float perct;
    struct Node *addr;
}*start=NULL,*curr=NULL;

void create(int rn,char na[],float per){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node));
    newnode->rollno=rn;
    strcpy(newnode->name,na);
    newnode->perct=per;

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
    if (start==NULL)
    {
        printf("\nEmpty Linked List....");
    }
    else{
    curr=start;
    while (curr!=NULL)
    {
        printf("|%d|%s|%.2f|%u|-->",curr->rollno,curr->name,curr->perct,curr->addr);
        curr=curr->addr;
    }
}
}

int main(){
    int ch,ct;
    while (1)
    {
    printf("\n1.Create\n2.Display\n3.Search\n4.Delete");
    printf("\nEnter your Choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        int rn;
        char na[50];
        float per;
        printf("\nEnter Roll Number,Name and Percentage of Student: ");
        scanf("%d%s%f",&rn,na,&per);
        create(rn,na,per);
        break;
    
    case 2:
        display();
        break;
    }
    printf("\nDo you want to continue Press 1 or Press 2 for Exit: ");
    scanf("%d",&ct);
    if (ct!=1)
    {
        break;
    }
    }
    printf("\n--------------THANK YOU----------------");
}