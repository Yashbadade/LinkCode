/*Employee salary slip*/
#include<stdio.h>
int main(){
    int id,sal;
    float hra,ta,ma,pf,it,gro;
    char name[30];
    printf("------------------EMPLOYEE SALARY SLIP------------------");
    printf("\n1.Enter Employee id \t\t\t:\t");
    scanf("%d",&id);
    printf("\n2.Enter name of Employee \t\t:\t");
    scanf("%s",name);
    printf("\n3.Enter Basic Salary of Employee \t:\t");
    scanf("%d",&sal);
    printf("---------------------------------------------------------");
    if(sal<=100000){
        hra=sal*0.06;
        ta=sal*0.05;
        ma=sal*0.04;
        pf=sal*0.07;
    }
    else if((sal>100000)&&(sal<=400000)){
        hra=sal*0.07;
        ta=sal*0.06;
        ma=sal*0.05;
        pf=sal*0.08;
        it=sal*0;
    }
    else if((sal>400000)&&(sal<=800000)){
        hra=sal*0.08;
        ta=sal*0.07;
        ma=sal*0.06;
        pf=sal*0.09;
        it=sal*0.05;
    }
    else if((sal>800000)&&(sal<=1200000)){
        hra=sal*0.09;
        ta=sal*0.08;
        ma=sal*0.07;
        pf=sal*0.10;
        it=sal*0.10;
    }
    else if((sal>1200000)&&(sal<=1600000)){
        hra=sal*0.10;
        ta=sal*0.09;
        ma=sal*0.08;
        pf=sal*0.11;
        it=sal*0.15;
    }
    else if((sal>1600000)&&(sal<=2000000)){
        hra=sal*0.11;
        ta=sal*0.10;
        ma=sal*0.09;
        pf=sal*0.12;
        it=sal*0.20;
    }
    else if((sal>2000000)&&(sal<=2400000)){
        hra=sal*0.12;
        ta=sal*0.11;
        ma=sal*0.10;
        pf=sal*0.13;
        it=sal*0.25;
    }
    else{
        hra=sal*0.13;
        ta=sal*0.12;
        ma=sal*0.11;
        pf=sal*0.14;
        it=sal*0.30;
    }
    printf("\nHRA is\t\t\t:\t%f\n",hra);
    printf("TA is\t\t\t:\t%f\n",ta);
    printf("MA is\t\t\t:\t%f\n",ma);
    printf("PF is\t\t\t:\t%f\n",pf);
    printf("ITR is\t\t\t:\t%f\n",pf);
    printf("------------------EMPLOYEE GROSS SALARY------------------");
    gro=sal+hra+ta+ma-it-pf;
    printf("\nGross salary of %s is\t:\t%f\n",name,gro);
    printf("---------------------------------------------------------");
}
