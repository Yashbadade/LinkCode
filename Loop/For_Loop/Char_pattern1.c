#include<stdio.h>

int main(){
    int ch=65;
    int i,j;
    for ( i = 1; i <=5 ; i++)
    {
        for ( j = 1; j<= i; j++)
        {
            // printf("%c ",(char)(ch));
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    
}

// A 
// B C     
// D E F   
// G H I J 
// K L M N O