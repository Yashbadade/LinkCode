#include<stdio.h>
void carea(float radius){
    float area;
    area=3.14*radius*radius;
    printf("\nArea of circle is %.2f",area);
}
float tarea(){
    float b,h,area;
    printf("Enter Breadth and Height of Triangle:");
    scanf("%f%f",&b,&h);
    area=0.5*b*h;
    return area;
}
float rarea(float l,float b){
    float area;
    area=l*b;
    return area;
}
int main(){
    int ch,ct;
    float radius,area;
    float l,b;
    while (1)
    {
    printf("\n1.Area of Circle\n2.Area of Triangle\n3.Area of Rectangle.:");
    printf("\nEnter your Choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\nEnter Radius of Circle:");
        scanf("%f",&radius);
        carea(radius);
    break;

    case 2:
        area=tarea();
        printf("\nArea of Triangle is:%.2f",area);
    break;

    case 3:
        printf("\nEnter Length and Breadth of Rectangle:");
        scanf("%f%f",&l,&b);
        area=rarea(l,b);
        printf("\nArea of Rectangle is %.2f",area);
    break;
    }
    printf("\nDo you want to Continue Press 1 and to Stop Press 2.\n");
    scanf("%d",&ct);
    if (ct!=1)
    {
        break;
    }
}
}