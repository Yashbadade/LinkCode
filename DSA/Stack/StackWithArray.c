#include<stdio.h>
#define max 5

int stack[max];
int top=-1;

void push(int n){
    
    if (top==max-1)
    {
        printf("\nOops!!!Stack is Full.....");
    }
    else{
        top++;
        stack[top]=n;
        printf("%d is Push!!",n);
    }
}

void pop(){
    
    if (top==-1)
    {
        printf("\nStack is Empty....");
    }
    else{
        printf("%d is pop",stack[top]);
        stack[top]=0;
        top--;
    }
}

void display(){
    if (top==-1)
    {
        printf("\nStack is Empty....");
    }
    else{
        for ( int i = top; i>-1; i--)
        {
            printf("%5d ",stack[i]);
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
            printf("\nEnter a Element in Stack: ");
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
            printf("\nOops!!! Invalid Choice.....");
            break;
        }
        printf("\nDo you want to continue press 1 or 2 for exit..");
        scanf("%d",&ct);
    } while (ct==1);
    printf("\n---------THANK YOU-----------");
}