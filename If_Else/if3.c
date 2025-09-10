/*Even or odd*/
#include<stdio.h>

int main(){
    int no;

    printf("Enter Number:");
    scanf("%d",&no);

    if(no==0)
    {
        printf("Given number is zero");
    }
    else if(no%2!=0){
        printf("Given number is odd");
    }
    else{
        printf("Given number is even ");
    }
}