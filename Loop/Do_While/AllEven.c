#include<stdio.h>

int main(){
    int n,a=1;

    printf("\nEnter a number:");
    scanf("%d",&n);

    do
    {
        if (a%2==0)
        {
            printf("%d\n",a);
            a++;
        }
    } while (a<=n);
    
}
