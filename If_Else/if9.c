/*Electricity Bill consumption*/
#include<stdio.h>
#include<time.h>

int main(){
    int num,uni;
    float rps,sgst,cgst,total;
    char name[30];
    
    time_t currentTime;
    time(&currentTime);
    
    printf("Enter Consumer Number:");
    scanf("%d",&num);
    printf("Enter Customer Name:");
    scanf("%s",name);
    printf("Enter Number of Units Consume:");
    scanf("%d",&uni);

    if(uni<=100){
        rps=uni*3.33;
    }
    else if((uni>100)&&(uni<=300)){
        rps=(100*3.33)+(uni-100)*5.55;
    }
    else if((uni>300)&&(uni<=500)){
        rps=(100*3.33)+(200*5.55)+(uni-300)*7.77;
    }
    else{
        rps=(100*3.33)+(200*5.55)+(200*7.77)+(uni-500)*11.11;
    }
    rps=rps+500;
    cgst=rps*0.06;
    sgst=rps*0.06;
    total=rps+cgst+sgst;
    
    printf("\n\t------------------------------------------------");
    printf("\n\t  Current time: %s", ctime(&currentTime));
    printf("\t------------------------------------------------");
    printf("\n\tEnter Consumer Number\t\t :%d",num);
    printf("\n\tEnter Customer Name\t\t :%s",name);
    printf("\n\tEnter Number of Units Consume\t :%d",uni);
    printf("\n\tTotal\t\t\t\t :%f",rps);
    printf("\n\tCGST\t\t\t\t :%f",cgst);
    printf("\n\tSGST\t\t\t\t :%f",sgst);
    printf("\n\tFinal Totat\t\t\t :%f",total);
    printf("\n\t-----------------------------------------------\t");
}
