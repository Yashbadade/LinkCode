#include<stdio.h>

int main() {
    /*int x,y,z,res;
    x=5;
    y=3;
    z=6;
    res = (x> y) ? (x > z ? x : z) : (y > z ? y : z);
    printf("Greater is:%d", res);
    */
    int x,y;
    int a = 1;
    int b = 1;
    x = a++ + a++ + a++ + a++ + a++;
    y = ++b + ++b + ++b + ++b + ++b;
    printf("value of x is:%d",x);
    printf("\nvalue of y is:%d",y);
}

