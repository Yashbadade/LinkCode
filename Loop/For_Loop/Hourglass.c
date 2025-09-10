#include<stdio.h>

int main(){
    int i,j,k;
    
    for ( i = 6; i>=1; i--)
    {
        for ( j = 5; j>=i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for ( i = 2; i<=6; i++)
        {
            for ( j = 5; j>=i; j--)
            {
                printf(" ");
            }
            for ( k = 1; k<=i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    
}
