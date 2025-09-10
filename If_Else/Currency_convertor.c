/*Currency Convertor*/
#include <stdio.h>

int main()
{
    int ch1, ch2;
    int ct;
    float input, result;
    cur:
    printf("\nEnter your choice to convert your currency:");
    printf("\n1.Rupees\n2.Dollar\n3.Euro\n");
    scanf("%d", &ch1);

    if (ch1 == 1)
    {
    rps:
        printf("Enter your Amount in Rupees:");
        scanf("%f", &input);

        printf("\nEnter your choice to convert your currency:");
        printf("\n1.Rupees\n2.Dollar\n3.Euro\n");
        scanf("%d", &ch2);
        if (ch2 == 1)
        {
            result = input;
            printf("\n%f Rupees = %f Rupees", input, result);
        }
        else if (ch2 == 2)
        {
            result = input / 86.38;
            printf("\n%f Rupees = %f Dollar", input, result);
        }
        else if (ch2 == 3)
        {
            result = input / 101.33;
            printf("\n%f Rupees = %f Euro", input, result);
        }
        else {
            printf("invalid");
        }
        printf("\nDo You Want to continue?");
        scanf("%d", &ct);
        if (ct == 1)
            goto rps;
    }
    else if (ch1 == 2)
    {
    dlr:
        printf("Enter your Amount in Dollar:");
        scanf("%f", &input);

        printf("\nEnter your choice to convert your currency:");
        printf("\n1.Rupees\n2.Dollar\n3.Euro\n");
        scanf("%d", &ch2);
        if (ch2 == 1)
        {
            result = input * 86.38;
            printf("\n%f Dollar = %f Rupees", input, result);
        }
        else if (ch2 == 2)
        {
            result = input;
            printf("\n%f Dollar = %f Dollar", input, result);
        }
        else if (ch2 == 3)
        {
            result = input / 1.17;
            printf("\n%f Dollar = %f Euro", input, result);
        }
        else {
            printf("invalid");
        }
        printf("\nDo You Want to continue?");
        scanf("%d",&ct);
        if (ct == 1)
        {
            goto dlr;
        }
    }
    else if (ch1 == 3)
    {
    eru:
        printf("Enter your Amount in Euro:");
        scanf("%f", &input);

        printf("\nEnter your choice to convert your currency:");
        printf("\n1.Rupees\n2.Dollar\n3.Euro\n");
        scanf("%d", &ch2);
        if (ch2 == 1)
        {
            result = input * 101.36;
            printf("\n%f Euro = %f Rupees", input, result);
        }
        else if (ch2 == 2)
        {
            result = input / 0.85;
            printf("\n%f Euro = %f Dollar", input, result);
        }
        else if (ch2 == 3)
        {
            result = input;
            printf("\n%f Euro = %f Euro", input, result);
        }
        printf("\nDo You Want to continue?");
        scanf("%d",&ct);
        if (ct == 1)
        {
            goto eru;
        }
    }
    else
    {
        printf("Enter Valid Choice!!");
    }
    printf("\nDo You Want to continue from Start?");
    scanf("%d",&ct);
    if (ct == 1)
    {
        goto cur;
    }
}