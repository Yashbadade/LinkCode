#include<stdio.h>

float pi=3.14 , radius, area;
int main() {
    printf("Enter radius:");
    scanf("%f",&radius);
    area = pi* radius* radius;
    printf("Area of circle is:%f ", area);
}
