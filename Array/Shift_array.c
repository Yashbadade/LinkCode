#include<stdio.h>
#define max 20
int main(){
    int arr[max];
    int n,temp,i,j,k;

    printf("Enter How many Number of array you want:\n");
    scanf("%d",&n);

    printf("\nEnter %d numbers in Array",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements are:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\t//Array is Created....//");
    for ( k = 0; k <n; k++)
    {
        i=n-1;
        temp=arr[i];
        for ( j = i-1; j >= 0; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
        printf("\n");
        for ( i = 0; i < n; i++)
        {
            printf("%5d",arr[i]);
        }
    }
    printf("\t//Shifting of elements is done..//");
}

// Enter How many Number of array you want:
// 5

// Enter 5 numbers in Array 10 20 30 40 50

// Array Elements are:
//    10   20   30   40   50               //Array is Created.....//
//    50   10   20   30   40
//    40   50   10   20   30
//    30   40   50   10   20
//    20   30   40   50   10
//    10   20   30   40   50       //Shifting of elements is done..//