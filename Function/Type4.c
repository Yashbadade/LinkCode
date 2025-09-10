/*With Arguements and With Return Type*/
#include<stdio.h>
int adddata(int n1,int n2){
    int add;
    add=n1+n2;
    return add;
}
int main(){
    int n1,n2,add;
    printf("\nEnter Two Numbers:");
    scanf("%d%d",&n1,&n2);
    add=adddata(n1,n2);
    printf("Addition is %d",add);
}