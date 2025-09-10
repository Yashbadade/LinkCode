#include<stdio.h>

int main() {
    char name [30];
    int roll; 
    float m1,m2,m3,total,per;

    printf("Enter Student name: ");
    scanf("%s",name);

    printf("Enter Student roll number: ");
    scanf("%d", &roll);

    printf("Enter marks in English: ");
    scanf("%f",&m1);

    printf("Enter marks in maths: ");
    scanf("%f",&m2);

    printf("Enter marks in science: ");
    scanf("%f",&m3);

    total = m1 + m2 + m3;
    per = (total/300) * 100;
    
    printf("\nStudent name:%s\n",name);
    printf("Roll Number:%d\n",roll);
    printf("Total Marks:%.f\n",total);
    printf("Percentage:%f\n",per);
    
    return 0;
}

