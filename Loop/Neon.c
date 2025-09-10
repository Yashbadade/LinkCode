#include<stdio.h>

int main(){
    int num,sqr,sum=0,og;
    printf("Enter a number:");
    scanf("%d",&num);

    sqr=num*num;
    printf("\nSquare of Number is:%d",sqr);

    while (sqr!=0)
    {
        sum=sum+(sqr%10);
        sqr=sqr/10;
    }
    printf("\nSum of Square is:%d",sum);
    if(sum==num){
        printf("\nEntered Number is Neon!!!!");
    }
    else{
        printf("\nEntered Number is not Neon!!!!");
    }
}
