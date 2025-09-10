#include<stdio.h>

int main(){
    int num1,num2,add;
    int *ptr1=&num1;
    int *ptr2=&num2;
    int *ptr3=&add;


    printf("Enter two Numbers: ");
    scanf("%d%d",ptr1,ptr2);
    *ptr3=*ptr1+*ptr2;

    printf("\nAddition of %d and %d is: %d",num1,num2,add);
    printf("\nAddition of %d and %d is: %d",*ptr1,*ptr2,*ptr3);
    printf("\nAddress of %d is %u and Address of %d is %u",*ptr1,ptr1,*ptr2,ptr2);
}