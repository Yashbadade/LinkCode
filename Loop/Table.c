#include<stdio.h>

int main(){
    int i;
    int n;
    i=1;
    printf("\nEnter Number:");
    scanf("%d",&n);

    while (i<=10)
    {
        printf("\n %d x %d = %d",n,i,n*i);
        i++;
    }
    printf("\n------Thank You-------");
}
