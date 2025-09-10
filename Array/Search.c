#include<stdio.h>

int main(){

    int arr[5];
    int i;
    int search;
    int flag=0;

    printf("Enter a five numbers in Array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);}
        printf("\nEnter a number to Search:");
        scanf("%d",&search);
        
        for(i=0;i<5;i++){
        if (arr[i]==search)
        {
            flag=1;
            break;
        }
    }
    
    if (flag)
    {
        printf("\nElement %d found at %d index!!!!",arr[i],i);
    }
    else{
        printf("\nElement does not Found!!!");
    }
    
}