/*Sum of Digit - 123 = 1+2+3=6 */
#include<stdio.h>

int main(){
    // int num,digit,sum=0;
    // printf("Enter a Number:");
    // scanf("%d",&num);

    // while (num!=0)
    // {
    //     digit=num%10; //Reminder
    //     sum=sum+digit;
    //     num=num/10; //Quotient
    // }
    // printf("\nSum is:%d",sum);

    int num,sum=0;

    printf("Enter a number:");
    scanf("%d",&num);

    while (num!=0)
    {
        sum=sum+(num%10);
        num=num/10; //Quotient
    }
    printf("\nSum of Digit is:%d",sum);
}
