#include<stdio.h>
int main(){
    // int arr[3][3]={
    //                 {10,20,30},
    //                 {40,50,60},
    //                 {70,80,90}
    // };
    int arr[3][3];
    int i,j;

    printf("Enter an Elements in Matrix");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%5d",&arr[i][j]);
        }
    }
    
    printf("\n---------------MATRIX----------------\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    } 
}

// Enter an Elements in Matrix
// 10 20 30
// 40 50 60
// 70 80 90

// ---------------MATRIX----------------
//    10   20   30
//    40   50   60
//    70   80   90