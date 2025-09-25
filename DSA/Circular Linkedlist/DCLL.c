#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *prev_addr;
    int data;
    struct Node *next_addr;
}*start=NULL,*curr=NULL;

void create(int n) {
    struct Node *newnode = malloc(sizeof(struct Node));
    newnode->data = n;

    if (start == NULL) {
        newnode->next_addr = newnode;
        newnode->prev_addr = newnode;
        start = newnode;
    } else {
        struct Node *last = start->prev_addr;

        newnode->next_addr = start;
        newnode->prev_addr = last;

        last->next_addr = newnode;
        start->prev_addr = newnode;

        // Do NOT update start — keep the first node as start
    }
}

void display() {
    if (start == NULL) {
        printf("\nLinked List is Empty.....");
    } else {
        curr = start;
        while (1) {
            printf("|%u|%d|%u|-->", curr->prev_addr, curr->data, curr->next_addr);
            curr = curr->next_addr;
            if (curr == start) {
                break;
            }
        }
    }
}

void insertfirst(int n){
    struct Node *newnode;
    newnode=malloc(sizeof(struct Node));
    newnode->data=n;

    curr=start->next_addr;
    curr->prev_addr=newnode;
    newnode->prev_addr=start;
    newnode->next_addr=start->next_addr;
    start->next_addr=newnode;
}

int main(){
    int n;
    int ch,ct;
    while (1)
    {
        printf("\n1.Create\n2.Display\n3.Insert First\n4.Delete First\n5.Insert Middle\n6.Delete Middle");
        printf("\nEnter Your Choice: ");
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
            printf("\nEnter a Number to add at First: ");
            scanf("%d",&n);
            insertfirst(n);
            break;
        }
        printf("\nDo you want to Continue Press 1 or 2 for Exit..");
        scanf("%d",&ct);
        if (ct!=1)
        {
            break;
        }   
    }
    printf("\n----------Thank You-------------");   
}