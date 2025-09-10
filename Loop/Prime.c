#include <stdio.h>

int main()
{
    int num, a = 2, flag=0;

    printf("Enter Your Number:");
    scanf("%d", &num);

    while (a < num / 2)
    {
        if (num % a == 0)
        {
            flag = 1;
            break;
        }
        a++;
    }
    if (flag)
    {
        printf("It is not a prime");
    }
    else
    {
        printf("It is a prime");
    }
}
