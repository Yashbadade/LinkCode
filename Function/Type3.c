/*without Argument and with Return Type*/
#include<stdio.h>
int adddata(){
    int n1,n2,add;
    printf("\nEnter two numbers:");
    scanf("%d%d",&n1,&n2);
    add=n1+n2;
    return add;
}
int main(){
    int add;
    add=adddata();
    printf("\nAddition is",add);
}
// Enter two Numbers:20
// 30
// Addition is 50