#include<stdio.h>

int main(){

    int i,j,k;

    for ( i = 1; i <=6; i++)
    {
        for ( j = 5; j>=i ; j--) //For Space
        {
            printf(" ");
        }
        for ( k=1 ; k <=i; k++) //for Star
        {
            printf("*");
        }
        printf("\n");
    }
    
}
