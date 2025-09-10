#include<stdio.h>

struct StudentDetails
{
    char name[20];
    int rollno;
    int marks;
};

int main(){
    int n;
    printf("Enter no of Student:");
    scanf("%d",&n);
    struct StudentDetails s[n];
    for (int i = 0; i<n; i++)
    {
        printf("\nEnter Details of Student %d",(i+1));
        printf("\nStudent Name:");
        scanf("%s",s[i].name);
        printf("\nStudent Roll No.:");
        scanf("%d",&s[i].rollno);
        printf("\nStudent Marks:");
        scanf("%d",&s[i].marks);
    }
    
    for (int i = 0; i<n; i++)
    {   
        printf("\n----------------------------------------");
        printf("\n\tDetails of Student %d",(i+1));
        printf("\n----------------------------------------");
        printf("\nStudent Name\t:\t%s",s[i].name);
        printf("\nStudent Roll No.:\t%d",s[i].rollno);
        printf("\nStudent Marks\t:\t%d",s[i].marks);
        printf("\n----------------------------------------");
        printf("\n");
    }
}