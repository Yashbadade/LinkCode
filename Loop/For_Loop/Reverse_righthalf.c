#include<stdio.h>

int main(){
    int i,j;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = i ; j <=5; j++)
        {
            // printf("%d ",j);
            // printf("%d ",i);
            printf(j%2==0? "0 ":"1 ");
        }
        printf("\n");
    }
    
}

// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

// 1 1 1 1 1 
// 2 2 2 2   
// 3 3 3     
// 4 4       
// 5

// 1 0 1 0 1 
// 0 1 0 1   
// 1 0 1     
// 0 1       
// 1