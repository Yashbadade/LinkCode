#include<stdio.h>
#include<string.h>

struct CollegeDetails
{
    char name[30];
    char dept[10];
    int ndept;
    int staff;
    int hod;
    int studfee;
};
int main(){
    struct CollegeDetails c1;
    strcpy(c1.name,"AISSMS College of Engineering");
    strcpy(c1.dept,"Entc");
    c1.ndept=6;
    c1.staff=100;
    c1.hod=6;
    c1.studfee=100000;
    printf("\n-------------------------------------------------------------------");
    printf("\n\t\t\tCollege Details");
    printf("\n-------------------------------------------------------------------");
    printf("\nCollege Name\t\t:\t%s",c1.name);
    printf("\nDepartment\t\t:\t%s",c1.dept);
    printf("\nNumber of Department\t:\t%d",c1.ndept);
    printf("\nNumber of Staf\t\t: \t%d",c1.ndept);
    printf("\nNumber of HOD\t\t: \t%d",c1.hod);
    printf("\nEach Student Fee\t:\t%d",c1.studfee);
    printf("\n---------------------------Thank You-----------------------------");
}
