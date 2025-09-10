#include<stdio.h>

int main(){

    float num1,num2,add,sub,mul,div;
    int ch,ct;
    
    menu:
    printf("\nEnter Two Number:");
    scanf("%f%f",&num1,&num2);

    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\nEnter Your Choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        add=num1+num2;
        printf("\nAddition of %.2f and %.2f is %.2f:",num1,num2,add);
        break;

    case 2:
        sub=num1-num2;
        printf("\nSubstraction of %.2f and %.2f is %.2f:",num1,num2,sub);
        break;

    case 3:
        mul=num1*num2;
        printf("\nMultiplication of %.2f and %.2f is %.2f:",num1,num2,mul);
        break;

    case 4:
        div=num1/num2;
        printf("\nDivision of %.2f and %.2f is %f:",num1,num2,div);
        break;   
    
    default:
        printf("\nInvalid choice");
        break;
    }
    printf("\nDo you want to continue? Press 1");
    scanf("%d",&ct);

    if(ct==1){
        goto menu;
    }
    printf("\n----------Thank YOU-----------");
}
