#include<stdio.h>

int main(){
    int i,j;

    for ( i = 1; i <=5; i++)
    {

        for ( j = 1 ; j <=5; j++)
        {
            printf(i%2!=0?(j%2!=0? "1 ":"0 "):(j%2!=0? "0 ":"1 "));
        }
        printf("\n");
    }
    
}

// 1 0 1 0 1 
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
