/*Count Even and Odd digits from Number*/
#include<stdio.h>

int main(){
    int num,digit,even=0,odd=0;

    printf("\nEnter a Number:");
    scanf("%d",&num);

    while (num!=0)
    {
        digit=num%10;
        if (digit%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        num=num/10;
    }
    printf("\nEven Count are %d",even);
    printf("\nOdd Count are %d",odd);
}