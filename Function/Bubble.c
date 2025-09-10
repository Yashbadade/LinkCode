#include<stdio.h>
#define max 20

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    } 
}

void bubblesort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[max];
    int n;
    printf("How many Number of Array you want: ");
    scanf("%d",&n);
    printf("\nEnter %d Elements in Array:",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // int len=sizeof(arr)/sizeof(arr[0]);
    printf("\nBefore Sorting: ");
    display(arr,n);
    bubblesort(arr,n);
    printf("\nAfter Sorting: ");
    display(arr,n);
}