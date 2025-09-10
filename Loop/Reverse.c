#include<stdio.h>

int main(){
    int num,digit;

    printf("Enter number:");
    scanf("%d",&num);

    while (num!=0)
    {
        digit=num%10;//Reminder is mod
        printf("%d\n",digit);
        num=num/10;//Quotient
    }
}
