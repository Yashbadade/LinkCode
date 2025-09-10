/*Positive And Negative*/
#include<stdio.h>

int main(){
    int no;

    printf("Enter number:");
    scanf("%d",&no);
    
    if(no>0){
        printf("Enter number is Positive");
    }
    else if(no==0)
    {
        printf("Enter number is 0");
    }
    else{
        printf("Enter number is Negative");
    }
}
