#include<stdio.h>
#define max 20
int main(){
    int mat1[max][max],mat2[max][max],mat3[max][max];
    int i,j;
    int r1,c1,r2,c2;

    printf("Enter how many Rows and Column in Matrix 1:");
    scanf("%d%d",&r1,&c1);

    printf("Enter how many Rows and Column in Matrix 2:");
    scanf("%d%d",&r2,&c2);

    if(r1==r2||c1==c2){
    printf("\nEnter an Elements in Matrix 1");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            scanf("%5d",&mat1[i][j]);
        }
    }

    printf("\nEnter an Elements in Matrix 2");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            scanf("%5d",&mat2[i][j]);
        }
    }

    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    printf("\n---------------ADDITION---------------\n");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            printf("%5d",mat3[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("\nInvalid Row or Column Entered.......");
}   
}

// Enter how many Rows and Column in Matrix 1:2
// 2
// Enter how many Rows and Column in Matrix 2:2
// 2

// Enter an Elements in Matrix 1 
// 5 5

// Enter an Elements in Matrix 2
// 5 5
// 5
// 5

// ---------------ADDITION---------------
//    10   10
//    10   10