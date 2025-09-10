#include<stdio.h>

int main(){

    int a=1,n;
    printf("\nEnter a Number:");
    scanf("%d",&n);

    do
    {
        printf("\n%d",n);
        n--;
    } while (n>=a);
    
}
