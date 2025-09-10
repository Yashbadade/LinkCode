#include<stdio.h>

int main(){
    float rad,len,b,h,w,area;
    int ch,ct;
    float pi=3.14;

    menu:
    printf("\n1.Area of Circle\n2.Area of Rectangle\n3.Area of Triangle\nEnter Your Choice");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\nEnter radius of circle:");
        scanf("%f",&rad);
        area=pi*rad*rad;

        printf("\nArea of circle is:%.2f",area);
        break;
        case 2:
        printf("\nEnter width and length :");
        scanf("%f%f",&w,&len);
        area=w*len;

        printf("\nArea of Rectangle is:%.2f",area);
        break;

        case 3:
        printf("\nEnter Breadth and height of triangle:");
        scanf("%f%f",&b,&h);
        area=0.5*b*h;

        printf("\nArea of Triangle is:%.2f",area);
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
}
