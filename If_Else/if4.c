/*Greater than 3 numbers*/
#include<stdio.h>

int main(){
    int no1,no2,no3;

    printf("Enter  3 numbers:");
    scanf("%d%d%d",&no1,&no2,&no3);

    if((no1>no2)&&(no1>no3)){
        printf("%d is Greater than %d and %d",no1,no2,no3);
    }
    else if((no2>no1)&&(no2>no3)){
        printf("%d is Greater than %d and %d",no2,no1,no3);
    }
    else if((no3>no1)&&(no3>no2)){
        printf("%d is Greater than %d and %d",no3,no1,no2);
    }
    else if((no1==no2)&&(no1>no3)){
        printf("%d and %d is equal and Greater than %d",no1,no2,no3);
    }
    else if((no1==no3)&&(no1>no2)){
        printf("%d and %d is equal and Greater than %d",no1,no3,no2);
    }
    else if((no2==no3)&&(no2>no1)){
        printf("%d and %d is equal and Greater than %d",no2,no3,no1);
    }
    else{
        printf("All numbers are Equal");
    }
}
