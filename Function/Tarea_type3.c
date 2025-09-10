/*Type 3:- Without Arguments and With Return Type*/
#include<stdio.h>
float tarea(){
    float b,h,area;
    printf("Enter Breadth and Height of Triangle:");
    scanf("%f%f",&b,&h);
    area=0.5*b*h;
    return area;
}
int main(){
    float area;
    area=tarea();
    printf("\nArea of Triangle is:%f",area);
}
// Enter Breadth and Height of Triangle:5.2
// 6.2

// Area of Triangle is:16.119999