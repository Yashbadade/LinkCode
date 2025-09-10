#include<stdio.h>

void factor(){
    int num,i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (i<=num/2)
    {
        if(num%i==0)
        printf("%d ",i);
        i++;
    }
    printf("%d ",num);
}

void factorial(int num){
    int fact=1;
    int i;
    if (num>=0)
    {   for ( i = 1; i <=num; i++)
    {
        fact*=i;
    }
    printf("\nFactorial of %d is:%d",num,fact);
    }
    else{
        printf("\nInvalid Number Entered.....");
    }
}

void isprime(int num){
    int a=2;
    int flag=0;
    while (a<=num/2)
    {
        if (num%a==0)
        {
            flag=1;
            break;
        }
    a++;
    }
    if (flag==1)
    {
        printf("\nIt is not a Prime Number..");
    }
    else{
        printf("\nIts Prime Number..");
    }
}

int reverse(int num){
    int rev=0;
    int digit=0;
    while (num!=0)
    {
        digit=num%10; 
        rev=rev*10+digit;
        num=num/10;
    }
    return rev;
}

int power(int base,int exp){
    int result=1;
    int i;
    for ( i = 1; i <=exp; i++)
    {
        result=result*base;
    }
    return result;
}

int ispalindrome(){
    int num,og;
    int rev=0,digit=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    og=num;
    printf("\nOriginal Number is %d",og);
    while (num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    return (rev==og);
}


int main(){
    int ch,ct,num,rev;
    int base,exp,result,og;
    while (1)
    {
    printf("\n1.Factor\n2.Factorial\n3.Prime\n4.Reverse\n5.Power\n6.Palindrome");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        factor();
    break;

    case 2:
        printf("Enter a Number: ");
        scanf("%d",&num);
        factorial(num);
    break;

    case 3:
        printf("Enter a Number: ");
        scanf("%d",&num);
        isprime(num);
    break;
    
    case 4:
        printf("Enter a Number:");
        scanf("%d",&num);
        rev=reverse(num);
        printf("\nReverse Number is %d",rev);
    break;

    case 5:
        printf("Enter base and Exponent:");
        scanf("%d%d",&base,&exp);
        result=power(base,exp);
        printf("\nResult is: %d",result);
    break;
    
    case 6:
        result=ispalindrome();
        if (result==1)
        {
            printf("\nIt is Palindrome");
        }
        else{
            printf("\nIt is not a Palindrome");
        }
    break;
    }
    printf("\nDo You want to Continue Press 1 or Press 2 for Exit....");
    scanf("%d",&ct);
    if (ct!=1)
    {
        break;
    }
    }
}