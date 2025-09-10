/*Enter Choice for finding Areas*/
/*MENU DRIVEN PROGRAM*/
#include<stdio.h>

int main(){
    int choice,ct;
    float Area,pi=3.14,r,b,h,l,w;
    menu:

    printf("Area of Circle: 1\n"
    "Area of Triangle: 2\n"
    "Area of Rectangle: 3\n"
    "Enter your Choice:\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("Enter Radius of circle:\n");
        scanf("%f",&r);
        Area=pi*r*r;
        printf("Area of Circle is:%f",Area);
    }
    else if(choice==2){
        printf("Enter Breadth and Height of Triangle:\n");
        scanf("%f%f",&b,&h);
        Area=0.5*b*h;
        printf("Area of Triangle is:%f",Area);
    }
    else if(choice==3){
        printf("Enter width and length of Rectangle:\n");
        scanf("%f%f",&w,&l);
        Area=w*l;
        printf("Area of Rectangle is:%f",Area);
    }
    else{
        printf("Enter Choice is Invalid");
    }
    printf("\nDo you want to continue....Press 1 to continue");
    scanf("%d",&ct);

    if(ct==1){
        goto menu;
    }
}