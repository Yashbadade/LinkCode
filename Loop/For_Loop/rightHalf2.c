#include<stdio.h>

int main(){
    int i,j,n=5;

    for ( i = 1; i <=n; i++)
    {
        int num=i;
        for ( j = 1; j <=i; j++)
        {
            printf("%d ",num);
            num=num+(n-j);
        }
        printf("\n");
    }
    
}