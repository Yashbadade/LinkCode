#include<stdio.h>
#define max 20

int main(){
    int arr[max];
    int i,j,k,n,ch,flag,temp,search,ct;
    
while(1){
    printf("\n1.Create Array\n2.Display Array\n3.Searching\n4.Sorting\n5.Insert Element\n6.Delete Element");
    printf("\nEnter your Choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    //Creating Array//
        printf("\nHow many Number of Array u want:");
        scanf("%d",&n);

        printf("\nEnter %d numbers in Array",n);
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        break;
    
    case 2:
    //Display Of Array Elements//
        for ( i = 0; i < n; i++)
        {
            printf("%5d",arr[i]);
        }
    break;

    case 3:
    //Searching//
        flag=0;
        printf("\nEnter a number to Search from Array:");
        scanf("%d",&search);
        
        for(i=0;i<n;i++){
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
    break;

    case 4:
    //Sorting//
        for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("\nAfter %d round \n",(i+1));
        for ( k = 0; k < n-1; k++)
        {
            printf("%5d",arr[k]);
        }
    }
    printf("\nAfter Final Round.....\n");
    for ( i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    break;
    
    }
    printf("\nDo you want to continue press 1 and press 2 to stop");
    scanf("%d",&ct);
    if (ct!=1)
    {
        break;
    }
    }
    printf("\n--------Thank You--------");
}