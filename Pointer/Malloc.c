#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr,ct;
    int sum=0;
    while (1)
    {
        ptr=(int*)malloc(sizeof(int));
        printf("Enter a value:");
        scanf("%d",ptr);
        sum=sum+*ptr;

        printf("\nDo u want to continue Press 1 or press 2 to exit....");
        scanf("%d",&ct);
        if (ct!=1)
        {
            break;
        }
        
    }
    printf("\n SUM IS:%d",sum);
    printf("\nEntered Value is:%d",*ptr);
    printf("\n-----Thank You--------");
}
// Enter a value:50

// Do u want to continue Press 1 or press 2 to exit....1
// Enter a value:40

// Do u want to continue Press 1 or press 2 to exit....1
// Enter a value:70

// Do u want to continue Press 1 or press 2 to exit....2

//  SUM IS:160
// Entered Value is:70
// -----Thank You--------