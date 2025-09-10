#include<stdio.h>

int main(){
    int ch1,ch2,ct;
    float input,res;

    Menu:
    printf("\n1.Rupee\n2.Dollar\n3.Euro");
    printf("\nEnter your Choice to convert:");
    scanf("%d",&ch1);

    switch (ch1)
    {   
        rupees:
        case 1:
            printf("\nEnter your Amount in Rupee:");
            scanf("%f",&input);

            printf("\n1.Rupee\n2.Dollar\n3.Euro");
            printf("\nEnter your Choice to convert your currency:");
            scanf("%d",&ch2);

            switch (ch2)
            {
                case 1:
                    res=input;
                    printf("\n%.2f Rupee = %.2f Rupee",input,res);
                break;
            
                case 2:
                    res=input/86.69;
                    printf("\n%.2f Rupee = %.2f Dollar",input,res);
                break;

                case 3:
                    res=input/100.79;
                    printf("\n%.2f Rupee = %.2f Euro",input,res);
                break;
            
                default:
                    printf("\nInvalid Choice Entered");
                break;
            }
            printf("\nDo you want to continue? Press 1");
            scanf("%d",&ct);

            if(ct==1){
                goto rupees;
            }
        break;


        case 2:
            Dollar:
            printf("\nEnter your Amount in Dollar:");
            scanf("%f",&input);

            printf("\n1.Rupee\n2.Dollar\n3.Euro");
            printf("\nEnter your Choice to convert your currency:");
            scanf("%d",&ch2);

            switch (ch2)
            {
                case 1:
                    res=input*86.69;
                    printf("\n%.2f Dollar = %.2f Rupee",input,res);
                break;
            
                case 2:
                    res=input;
                    printf("\n%.2f Dollar = %.2f Dollar",input,res);
                break;

                case 3:
                    res=input/1.16;
                    printf("\n%.2f Dollar = %.2f Euro",input,res);
                break;
            
                default:
                    printf("\nInvalid Choice Entered");
                break;
            }
            printf("\nDo you want to continue? Press 1");
            scanf("%d",&ct);

            if(ct==1){
                goto Dollar;
            }
        break;


        case 3:
            Euro:
            printf("\nEnter your Amount in Euro:");
            scanf("%f",&input);

            printf("\n1.Rupee\n2.Dollar\n3.Euro");
            printf("\nEnter your Choice to convert your currency:");
            scanf("%d",&ch2);

            switch (ch2)
            {
                case 1:
                    res=input*100.72;
                    printf("\n%.2f Euro = %.2f Rupee",input,res);
                break;
            
                case 2:
                    res=input*1.16;
                    printf("\n%.2f Euro = %.2f Dollar",input,res);
                break;

                case 3:
                    res=input;
                    printf("\n%.2f Euro = %.2f Euro",input,res);
                break;
            
                default:
                    printf("\nInvalid Choice Entered");
                break;
            }
            printf("\nDo you want to continue? Press 1");
            scanf("%d",&ct);

            if(ct==1){
                goto Euro;
            }
            break;
    default:
        printf("\nInvalid Choice Entered!!");
    break;
    }
    printf("\nDo you want to continue to main menu? Press 1");
            scanf("%d",&ct);

            if(ct==1){
                goto Menu;
            }
}
