#include<stdio.h>
int main(){
    int arr[10];
    int i;
    int sum=0;
    int even=0;
    int odd=0;
    int evensum=0;
    int oddsum=0;

    printf("Enter ten numbers in array\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

        if(arr[i]%2==0){
            even++;
            evensum=evensum+arr[i];

        }
        else{
            odd++;
            oddsum=oddsum+arr[i];
        }
    }
    
    printf("\nSum of Array is:%d",sum);
    printf("\nTotal Even Numbers are:%d",even);
    printf("\nSum of Even Numbers:%d",evensum);
    printf("\nTotal Odd numbers are:%d",odd);
    printf("\nSum of Odd Numbers:%d",oddsum);
    
} 
// Enter ten numbers in array
// 10
// 23
// 32
// 45
// 44
// 66
// 67
// 88
// 65
// 43

// Sum of Array is:483
// Total Even Numbers are:5
// Sum of Even Numbers:240
// Total Odd numbers are:5
// Sum of Odd Numbers:243