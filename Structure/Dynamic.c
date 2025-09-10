#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int *ptr;
    int max;

    ptr=(int*)calloc(n,sizeof(int));
    if (ptr==NULL)
    {
        printf("Calloc Fail");
        return 0;
    }
    printf("Memmory Allocated");
    printf("\nEnter %d in elements:",n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    max=ptr[0];
    for (int i = 0; i < n; i++)
    {
        if (ptr[i]>max)
        {
            max=ptr[i];
        }   
    }
    printf("\nMaximum number is:%d",max);
    free(ptr);
}
