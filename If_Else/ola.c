/*OLA and UBER*/
#include<stdio.h>
#include<time.h>

int main(){
    int no,ch;
    float km,rps,total,cgst,sgst,dis;
    char name[30];
    char veh[30];
    int stud, age;

    time_t currentTime;
    time(&currentTime);

    printf("Enter Customer Name:");
    scanf("%s",name);
    printf("Enter Customer Contact No.:");
    scanf("%d",&no);
    printf("Enter Kilometer Travel:");
    scanf("%f",&km);
    printf("\nAre You a Student?Press 1 ");
    scanf("%d",&stud);
    printf("\nEnter your age?");
    scanf("%d",&age);
    printf("Choose Vehicle:\n1.Bike\n2.Auto\n3.Car:");
    scanf("%d",&ch);
    
    if(ch==1){
        if((km>0)&&(km<=3)){
            rps=30;
            printf("Fare Charges within 3 km is 30/- rps per km");
        }
        else if((km>3)&&(km<=5)){
            rps=km*10;
        }
        else if((km>5)&&(km<=10)){
            rps=(5*10)+(km-5)*15;
        }
        else if((km>10)&&(km<=15)){
            rps=(5*10)+(5*15)+(km-10)*20;
        }
        else{
            rps=(5*10)+(5*15)+(5*20)+(km-15)*25;
        }
    }
    else if(ch==2){
        if((km>0)&&(km<=3)){
            rps=35;
            printf("Fare Charges within 3 km is 35/- rps per km");
        }
        else if((km>3)&&(km<=5)){
            rps=km*15;
        }
        else if((km>5)&&(km<=10)){
            rps=(5*15)+(km-5)*20;
        }
        else if((km>10)&&(km<=15)){
            rps=(5*15)+(5*20)+(km-10)*25;
        }
        else{
            rps=(5*15)+(5*20)+(5*25)+(km-15)*30;
        }
    }
    else if(ch==3){
        if((km>0)&&(km<=3)){
            rps=40;
            printf("Fare Charges within 3 km is 40/- rps per km");
        }
        else if((km>3)&&(km<=5)){
            rps=km*20;
        }
        else if((km>5)&&(km<=10)){
            rps=(5*20)+(km-5)*25;
        }
        else if((km>10)&&(km<=15)){
            rps=(5*20)+(5*25)+(km-10)*30;
        }
        else{
            rps=(5*20)+(5*25)+(5*30)+(km-15)*35;
        }
    }else{
        printf("\nInvalid Choice\n");
        return 1;
    }

    cgst=rps*0.06;
    sgst=rps*0.06;
    total=rps+cgst+sgst;
    if(stud==1){
        dis=total-(total*0.10);
    }
else if(age>=50){
            dis=total-(total*0.20);
}
else{
    dis=0;
    }
    printf("\n\t------------------------------------------------");
    printf("\n\t\t  Welcome to Uber Rides");
    printf("\n\t------------------------------------------------");
    printf("\n\t  Current time: %s", ctime(&currentTime));
    printf("\t------------------------------------------------");
    printf("\n\tCustomer Name\t\t\t :%s",name);
    printf("\n\tCustomer Contact no.\t\t :%d",no);
    printf("\n\tTraveled Kilometers\t \t :%.2f",km);
    printf("\n\tVehicle\t\t\t\t :%s",veh);
    if (ch == 1)
        printf("Bike");
    else if (ch == 2)
        printf("Auto");
    else if (ch == 3)
        printf("Car");
    printf("\n\tTotal\t\t\t\t :%.2f",rps);
    printf("\n\tCGST\t\t\t\t :%.2f",cgst);
    printf("\n\tSGST\t\t\t\t :%.2f",sgst);
    printf("\n\tTotal with Gst\t\t\t :%.2f",total);
    printf("\n\t-----------------------------------------------\t");
    printf("\n\tFinal Total with Discount\t :%.2f",dis);
    printf("\n\t-----------------------------------------------\t");
    printf("\n\t\t Thank You!!!! Visit Again....");
    printf("\n\t-----------------------------------------------\t");
    
}
