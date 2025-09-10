/*Choice using switch case*/
#include<stdio.h>

int main(){
    int ch;

    printf("\nEnter Your Choice");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("one");
    break;

    case 2:
        printf("two");
    break;

    case 3:
        printf("Three");
    break;    

    default:
        printf("Invalid....");
    break;
    }

}