/*N number Of tables*/
#include <stdio.h>

int main()
{
    int a, b, n;
    n = 10;

    b = 1;
    while (b <= 10)
    {
        a = 1;
        while (a <= n)
        {
            printf("%d\t",a * b);
            a++;
        }
        printf("\n");
        b++;
    }
}
