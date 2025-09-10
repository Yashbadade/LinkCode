/*Divisible by*/
#include<stdio.h>

int main(){
    int no;
    printf("Enter Number:");
    scanf("%d",&no);

    if(no==0){
        printf("Enter number is invalid");
    }
    else if((no%3==0)&&(no%5==0)){
        printf("%d is Divisible by both 3 and 5",no);
    }
    else if(no%3==0){
        printf("%d is Divisible by only 3 ",no);
    }
    else if(no%5==0){
        printf("%d is Divisible by only 5 ",no);
    }
    else{
        printf("%d is not Divisible by 3 and 5 ",no);
    }
}
