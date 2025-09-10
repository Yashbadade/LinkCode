/*Enter and print 5 numbers in array*/

#include<stdio.h>
int main(){
int i;
int arr[5];

printf("Enter a 5 Numbers:");
for ( i = 0; i<5; i++)
{
    scanf("%d",&arr[i]);
}

for ( i = 0; i<5; i++)
{
    printf("\n%d \t %d \t %u",i,arr[i],&arr[i]);
}

printf("\nReverse Order is:");
for ( i = 4; i >=0; i--)
{
    printf("\n%d",arr[i]);
}
}
// Enter a 5 Numbers:10
// 20
// 30
// 40
// 50

// 0        10      2743072496
// 1        20      2743072500
// 2        30      2743072504
// 3        40      2743072508
// 4        50      2743072512
// Reverse Order is:
// 50
// 40
// 30
// 20
// 10
