#include<stdio.h>

/*Type 1*/
void reverse1(){
    int num,digit=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while (num!=0)
    {
        digit=num%10;
        printf("%d",digit);
        num=num/10;
    }
}

/*Type 2*/
void reverse2(int num){
    int digit=0;
    while (num!=0)
    {
        digit=num%10;
        printf("%d",digit);
        num=num/10;
    }
}

/*Type 3*/
int reverse3(){
    int num,digit=0,rev=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while (num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    return rev;
}


/*Type 4*/
int reverse4(int num){
    int rev=0,digit=0;
    while (num!=0)
    {
        digit=num%10;//remainder
        rev=rev*10+digit;
        num=num/10;//Quotient
    }
    return rev;
}

int main(){
    int num,rev;
    int ch,ct;
    while (1)
    {
    printf("\n1.Type-1\n2.Type-2\n3.Type-3\n4.Type-4 :");
    printf("\nEnter your Choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        reverse1();
    break;

    case 2:
        printf("Enter a number:");
        scanf("%d",&num);
        reverse2(num);
    break;

    case 3:
        rev=reverse3();
        printf("%d",rev);
    break;

    case 4:
        printf("\nEnter a Number:");
        scanf("%d",&num);
        rev = reverse4(num);
        printf("%d",rev);
    break;
    }
    printf("\nDo you want to Continue Press 1 or Press 2 for Exit....");
    scanf("%d",&ct);
    if (ct!=1)
    {
        break;
    }
}
}