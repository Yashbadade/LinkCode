#include<stdio.h>

int main(){
    int num,rev=0,digit,og;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("Original Number is:%d",num);

    while (num!=0)
    {
        digit=num%10; //Reminder 143%10=3  4 1
        rev=rev*10+digit; // 0*10+3=3  34 1
        num=num/10; //Quotient 143/10=14 1 0
    }
    printf("\nReverse of Number is:%d",rev);
}
