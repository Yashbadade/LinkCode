#include<stdio.h>
#define max 5

int Queue[max];
int front=-1;
int rare=0;

void enqueue(int n){
    if (rare==max)
    {
        printf("\nOops!!Queue is Full...");
    }
    else{
        Queue[rare]=n;
        printf("\n%d is Enqueue",n);
        rare++;
    }
}

void dequeue(){
    if (front==rare)
    {
        printf("\nQueue is Empty...");
    }
    else{
        front++;
        printf("%d  is Dequeued...",Queue[front]);
        Queue[front]=0;
    }
}

void display(){
    if (front==rare)
    {
        printf("\nQueue is Empty...");
    }
    else{
        for (int i = front+1; i < rare; i++)
        {
            printf("\n%d",Queue[i]);
        }
    }
}

int main(){
    int ct,ch;
    int n;

    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display");
        printf("\nEnter your Choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter Element in Queue: ");
            scanf("%d",&n);
            enqueue(n);
            break;
        
        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        }
        printf("\nDo you want to Continue Press 1 or Press 2 for Exit...");
        scanf("%d",&ct);
    } while (ct==1);
    printf("\n--------------THANK YOU----------------");
}