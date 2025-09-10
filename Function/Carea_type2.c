/*with Arguments and Without Return Type*/
#include<stdio.h>
void carea(float radius){
    float area;
    area=3.14*radius*radius;
    printf("\nArea of circle is %f",area);
}
int main(){
    float radius;
    printf("\nEnter Radius of Circle:");
    scanf("%f",&radius);
    carea(radius);
}