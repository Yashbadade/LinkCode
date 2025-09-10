#include<stdio.h>

int main(){
    int arr[10];
    int i;
    int ref;
    int greater=0;
    int smaller=0;

    printf("Enter ten Numbers in Array:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a Number from array to compare:\n");
    scanf("%d",&ref);
    for ( i = 0; i < 10; i++)
    {
        if (ref>arr[i])
        {
            smaller++;
        }
        else{
            greater++;
        }
    }
    printf("\n%d numbers are greater than %d",greater,ref);
    printf("\n%d numbers are Smaller than %d",smaller,ref);
}