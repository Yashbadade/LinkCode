#include<stdio.h>
#define max 20

int main(){
    int arr[max];
    int evenarr[max];
    int oddarr[max];
    int i,j,k,n,evencnt,oddcnt,evensum,oddsum;
    evencnt=0;
    evensum=0;
    oddcnt=0;
    oddsum=0;
    j=0;
    k=0;
    
    printf("Enter How many Number of Array you want:\n");
    scanf("%d",&n);

    printf("\nEnter %d numbers in Array:\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            evenarr[j]=arr[i];
            j++;
            evensum=evensum+arr[i];
            evencnt++;
        }
        else{
            oddarr[k]=arr[i];
            k++;
            oddsum=oddsum+arr[i];
            oddcnt++;
        }
    }
    printf("\nTotal even Numbers are %d and Sum of even number is %d\n",evencnt,evensum);
        for ( i = 0; i < j; i++)
    {
        printf("%5d",evenarr[i]);
    }
    printf("\nTotal odd Numbers are %d and Sum of odd number is %d\n",oddcnt,oddsum);
    for ( i = 0; i < k; i++)
    {
        printf("%5d",oddarr[i]);
    }
}