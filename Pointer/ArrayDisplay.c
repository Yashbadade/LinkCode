#include<stdio.h>

int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr;
    int sum=0;
    ptr=&arr[0];

    printf("\n %u : %d ",ptr+0,*(ptr+0));
    printf("\n %u : %d ",ptr+1,*(ptr+1));
    printf("\n %u : %d ",ptr+2,*(ptr+2));
    printf("\n %u : %d ",ptr+3,*(ptr+3));
    printf("\n %u : %d ",ptr+4,*(ptr+4));
    printf("\n-------------------------------------------------");
    printf("\n---------------Forward Display-------------------");
    printf("\n-------------------------------------------------");
    for (int i = 0; i < 5; i++)
    {
        printf("\n %u : %d ",ptr+i,*(ptr+i));
    }
    printf("\n-------------------------------------------------");
    printf("\n---------------Reverse Display-------------------");
    printf("\n-------------------------------------------------");
    for (int i = 4; i>=0; i--)
    {
        printf("\n %u : %d ",ptr+i,*(ptr+i));
    }
    printf("\n-------------------------------------------------");
    printf("\n-------------------Addition----------------------");
    printf("\n-------------------------------------------------");    
    for (int i = 0; i <5; i++)
    {
    
        sum=sum+*(ptr+i);
    }
    printf("\nAddition of Elements is: %d",sum);
}