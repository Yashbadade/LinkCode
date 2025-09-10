/*Upto N number find prime numbers*/
#include<stdio.h>

int main(){
    int a=1,num=10,b=2;


    while (a<=num)
    {
        int flag=0,b=2;
        while (b<a){
        if (a%b==0)
        {
            flag=1;
            break;
        }
        b++;
    }
        if(flag==0){
        printf("%d\t",a);
        }
        a++;
    }
}