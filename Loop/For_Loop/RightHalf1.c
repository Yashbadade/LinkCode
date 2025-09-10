#include<stdio.h>

int main(){

    int i,j;

    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i ; j++)
        {
            printf("1 ",j);
        }
        printf("\n");
    }
    
}
// 1 
// 1 1
// 1 1 1
// 1 1 1 1
// 1 1 1 1 1