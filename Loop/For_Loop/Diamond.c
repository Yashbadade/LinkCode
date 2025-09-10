#include<stdio.h>

int main(){
    int i,j,k;

    for ( i = 1; i<=6; i++)
    {
        for ( j = 5; j>=i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( i = 5; i>=1; i--)
    {
        for ( j = 5; j>=i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
