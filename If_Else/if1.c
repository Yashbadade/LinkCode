/*Greater Than 2 NUmbers*/
#include<stdio.h>
int main(){
    int no1,no2;

    printf("Enter two number:");
    scanf("%d%d",&no1,&no2);

    if(no1>no2)
    {
        printf("%d is Greater than %d", no1,no2);
    }
    else if(no2>no1){
        printf("%d is Greater than %d", no2,no1);
    }
    else{
        printf("Both numbers are Equal");
    }
}
