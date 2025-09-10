#include<stdio.h>
#define max 20

int main(){
    int mat1[max][max],mat2[max][max],mat3[max][max]={0};
    int i,j,k;
    int r1,c1,r2,c2;

    printf("\nEnter number of Rows and Column in matrix 1:");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter number of Rows and Column in matrix 2:");
    scanf("%d%d",&r2,&c2);

    if(c1==r2){
    printf("\nEnter Elements in Matrix 1:");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("Enter Elements in Matrix 2:");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    for ( i = 0; i < r1; i++)
    {
        for ( k = 0; k < c2; k++)
        {
            for ( j = 0; j < c1; j++)
            {
                mat3[i][k]=mat3[i][k]+(mat1[i][j]*mat2[j][k]);
            }
        }
    }

    printf("\n----------------MULTIPLICATION--------------------\n");
    for ( i = 0; i < r1; i++)
    {
        for ( k = 0; k < c2; k++)
        {
            printf("%5d",mat3[i][k]);
        }
        printf("\n");
    }
}
else{
    printf("\nINVALID........");
}
}

// Enter number of Rows and Column in matrix 1: 4 5

// Enter number of Rows and Column in matrix 2:5 6

// Enter Elements in Matrix 1:
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// Enter Elements in Matrix 2:
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6

// ----------------MULTIPLICATION--------------------
//    15   30   45   60   75   90
//    15   30   45   60   75   90
//    15   30   45   60   75   90
//    15   30   45   60   75   90