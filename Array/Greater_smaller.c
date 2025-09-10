/*Find minimum and maximum value from array*/
#include<stdio.h>
int main(){
    int arr[10];
    int i,max,min;

    printf("Enter ten Numbers in Array:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for ( i = 0; i < 10; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    printf("\nMax Number from Array is:%d",max);
    printf("\nMIN Number from Array is:%d",min);
}