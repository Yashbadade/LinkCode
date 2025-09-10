#include<stdio.h>

int main(){
    int i,j,k;

    for ( i = 6; i >=1; i--)
    {
        for ( j = 6; j >=i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <=(i*2-1); k++)
        {
            if(k==1||k==(i*2-1)||i==6){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}

