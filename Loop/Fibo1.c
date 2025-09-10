#include<stdio.h>

int main(){

    int a=1,n,first=0,second=1,third;

    printf("Enter nth value:");
    scanf("%d",&n);
    // 0 1 1 2 3 5 8 13 21 34
    while (a<=n)
    
    {
        printf("%d ",first);
        third=first+second;
        first=second;
        second=third;
        a++;
    }
    
}
