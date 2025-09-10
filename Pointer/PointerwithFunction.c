#include<stdio.h>
#define max 20

int* create(){
    int l;
    int ptr;
    static int arr[max];
    printf("how many numbers of array you want:");
    scanf("%d",&l);
    printf("\nEnter a Elements in Array:");
    arr[0]=l;
    for (int i = 1; i <=l; i++)
    {
    scanf("%d",&arr[i]);        
    }  
    return arr;
}
void display(int *ptr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }  
}
int search(int *ptr,int n,int e){
    for ( int i = 0; i < 5; i++)
    {
        if (*(ptr+i)==e)
        {
            return 1;
        }
    }
    printf("\nElement not found...");
    return 0;
}

void sort(int *ptr,int n){
    int i,j;
    for (int i = 0; i <n-1; i++)
    {
        for (int j =i+1; j <n ; j++)
        {
            if ((ptr[i])>(ptr[j]))
            {
                int temp=(ptr[i]);
                (ptr[i])=(ptr[j]);
                (ptr[j])=temp;
            }   
        }  
    }
    printf("\nSorted Array is:");
    for ( int i = 0; i <n; i++)
    {
        printf(" %d",(ptr[i]));
    } 
}
int main(){
    int *ptr,e,found,ch,ct;
    while (1)
    {
    printf("\nArray Operations\n1.Create\n2.Display\n3.Search\n4.Sorting");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    ptr=create();
    break;

    case 2:
    display(ptr,5);
    break;

    case 3:
        printf("\nEnter a Element to Search in array: ");
        scanf("%d",&e);

        found=search(ptr,5,e);
        if (found){
        printf("\nElement %d is Found...",e);
        }
    break;

    case 4:
        sort(ptr,5);
    break;
    }
    printf("\nDo you want to Continue Press 1 or Press 2 for Exit...");
    scanf("%d",&ct);
    if (ct!=1)
    {
        break;
    }
    
}
}