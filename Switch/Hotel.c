#include<stdio.h>
#include<time.h>

int main(){
    int ch,ordno,ct;
    int cnt=0;
    float total,cgst,sgst,finaltotal;
    total=0;
    time_t currentTime;
    time(&currentTime);

    printf("\n----WELCOME TO YASH HOTEL----");

    menu:
    printf("\nOrder Your Food:-");
    printf("\n1.Staters\n2.Veg\n3.Non-Veg");
    printf("\nPlease Enter Your Choice:");
    scanf("%d",&ch);
    
    switch (ch)
    {
        case 1:
            staters:
            printf("\nWhich Staters will You Have?");
            printf("\n1.Manchurian Dry:200\n2.Paneer Chilly:300\n3.Veg Soup:150");
            printf("\nPlease Enter Your Order Number:");
            scanf("%d",&ordno);

            switch (ordno)
            {
                case 1:
                    total=total+200;
                break;

                case 2:
                    total=total+300;
                break;

                case 3:
                    total=total+150;
                break;
            
                default:
                    printf("\nInvalid Order Number");
                break;
            }
            if((ordno>=1)&&(ordno<=3)){
                cnt++;
            printf("\n%d order is placed!!!",cnt);
            }
            printf("\nDo You Want to Continue with Staters? Press 1");
            scanf("%d",&ct);

            if(ct==1){
                goto staters;
            }
        break;

        case 2:
            veg:
            printf("\nWhich Veg Menu will You Have?");
            printf("\n1.Veg Kurma:230\n2.Paneer Masala:300\n3.Veg Kofta:250");
            printf("\nPlease Enter Your Order Number:");
            scanf("%d",&ordno);

            switch (ordno)
            {
                case 1:
                    total=total+230;
                break;

                case 2:
                    total=total+300;
                break;

                case 3:
                    total=total+250;
                break;
            
                default:
                    printf("\nInvalid Order Number");
                break;
            }
            if((ordno>=1)&&(ordno<=3)){
                cnt++;
            printf("\n%d order is placed!!!",cnt);
            }
            printf("\nDo You Want to Continue with Veg? Press 1");
            scanf("%d",&ct);

            if(ct==1){
                goto veg;
            }
        break;

        case 3:
            nonveg:
            printf("\nWhich Non-Veg Menu will You Have?");
            printf("\n1.Chicken Angara:300\n2.Butter Chicken:350\n3.Fish Curry:250");
            printf("\nPlease Enter Your Order Number:");
            scanf("%d",&ordno);

            switch (ordno)
            {
                case 1:
                    total=total+300;
                break;

                case 2:
                    total=total+350;
                break;

                case 3:
                    total=total+250;
                break;
            
                default:
                    printf("\nInvalid Order Number");
                break;
            }
            if((ordno>=1)&&(ordno<=3)){
                cnt++;
            printf("\n%d order is placed!!!",cnt);
            }
            printf("\nDo You Want to Continue with Non-Veg? Press 1");
            scanf("%d",&ct);

            if(ct==1){
                goto nonveg;
            }
        break;
        
        default:
            printf("\nInvalid Choice Entered");
        break;
    }
    printf("\nDo You Want to Continue to menu? Press 1");
    scanf("%d",&ct);

    if(ct==1){
        goto menu;
    }
    
    if(cnt>0){

        cgst=total*0.06;
        sgst=total*0.06;
        finaltotal=cgst+sgst+total;
        printf("\n--------------------------------------");
        printf("\n\t     YASH HOTEL");
        printf("\n--------------------------------------");
        printf("\nCurrent time: %s", ctime(&currentTime));
        printf("---------------------------------------");
        printf("\nTotal\t\t  :%.2f",total);
        printf("\nCGST\t\t  :%.2f",cgst);
        printf("\nSGST\t\t  :%.2f",sgst);
        printf("\n--------------------------------------");
        printf("\nFINAL BILL\t  :%.2f",finaltotal);
        printf("\n--------------------------------------");
    }
    else{
        printf("\nNo order found");
    }
    printf("\n\t THANK YOU VISIT AGAIN");
    printf("\n--------------------------------------");
}
