/*With Argument and Without Return type*/
#include<stdio.h>
void adddata(int n1,int n2){
    int add;
    add=n1+n2;
    printf("Addition is %d",add);
}
int main(){
    int n1,n2;
    printf("\nEnter two Numbers:");
    scanf("%d%d",&n1,&n2);
    adddata(n1,n2);
}
// Enter two Numbers:20
// 30
// Addition is 50