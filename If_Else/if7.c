/*Student marksheet*/

#include<stdio.h>

int main(){
    float m1,m2,tot,per;
    printf("Enter marks in English outoff 100: ");
    scanf("%f",&m1);
    printf("Enter marks in Maths outoff 100: "
    );
    scanf("%f",&m2);

    tot=m1+m2;
    per=tot/200*100;
    
    if((m1>100)||(m2>100)){
        printf("Invalid Marks Enter");
    }
    else if((m1>=40)&&(m2>=40)){
        printf("Result 'PASS'\n"
    "Percentage is:%f\n",per);
        if(per>=75){
            printf("GRADE 'A'");
        }
            else if((per>=60)&&(per<75)){
                printf("GRADE 'B'");
            }
            else if((per>=40)&&(per<60)){
                printf("GRADE 'C'");
        }
        else{
            printf("Result 'FAIL'");
        }
}
else{
    printf("Result'FAIL'");
}
}