/*  while  if */
#include<stdio.h>
int main(){
    int i,n;
    printf("\nENter a number:");
    scanf("%d",&n);
    i=1;
    while (i<=n/2)  
    {   
        if(n%i==0)
        printf("\n%d",i);
        i++;
    }
    printf("\n%d",n);
}
