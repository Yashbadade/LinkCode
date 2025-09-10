#include<stdio.h>

int main(){
    int i,j,k;
    char ch;

    for ( i = 1; i <=5; i++)
    {
        for ( j = i; j<5; j++)
        {
            printf(" ");
        }
        ch='A';
        for ( k = 0; k <(2*i-1); k++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }    
}

//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI