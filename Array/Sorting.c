
/*Bubble Sorting*/
#include<stdio.h>

int main(){
    int arr[5];
    int i,j,k,temp;

    printf("Enter 5 Numbers in array:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 5-1; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("\nAfter %d round \n",(i+1));
        for ( k = 0; k < 5-1; k++)
        {
            printf("%5d",arr[k]);
        }
    }
    printf("\nAfter Final Round.....\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d",arr[i]);
    }
}