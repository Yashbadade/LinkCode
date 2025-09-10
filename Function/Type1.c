/*without Arguments and without Return Type */
#include<stdio.h>
void adddata(){
    int n1,n2,add;
    printf("Enter two Numbers:");
    scanf("%d%d",&n1,&n2);
    add=n1+n2;
    printf("Addition is %d",add);
}
int main(){
    adddata();
}
// Enter two Numbers:20
// 30
// Addition is 50