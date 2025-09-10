/*Type:-With Arguments and With Return Type*/
#include<stdio.h>
float rarea(float l,float b){
    float area;
    area=l*b;
    return area;
}
int main(){
    float l,b,area;
    printf("\nEnter Length and Breadth of Rectangle:");
    scanf("%f%f",&l,&b);
    area=rarea(l,b);
    printf("\nArea of Rectangle is %f",area);
}
// Enter Length and Breadth of Rectangle:4.2
// 4.2

// Area of Rectangle is 17.639997