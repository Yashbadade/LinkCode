#include<stdio.h>
float b,h,area;
int main() {
    
    printf("Enter base and Height of triangle: ");
    scanf("%f%f",&b,&h);
    area = 0.5*b*h;
    printf("Area of Triangle is: %f",area);
    return 0;
}
