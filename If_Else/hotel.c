/*Hotel Application*/
#include<stdio.h>
#include<time.h>

int main(){

    int ch1;
    int ct;
    int total;
    int ordno;
    int cnt=0;

    float cgst,sgst,finaltotal;
    total=0;
    time_t currentTime;
    time(&currentTime);

    menu:
    printf("\n1.Staters\n2.Veg Menu\n3.Non veg\n4.Bill");
    printf("\nEnter Your choice:");
    scanf("%d",&ch1);

    if(ch1==1){

        staters:
        printf("\n1.Paneer chilly :200");
        printf("\n2.CHICKEN chilly:250");
        printf("\n3.Manchurian    :300");
        
        printf("\nEnter Your Order Number..");
        scanf("%d",&ordno);

        if(ordno==1){
            total=total+200;
        }
        else if(ordno==2){
            total=total+250;
        }
        else if(ordno==3){
            total=total+300;
        }
        else{
            printf("\nOops!!!Invalid Order Number");
        }
        if((ordno>=1)&&(ordno<=3)){
            cnt++;
            printf("\n%d order is placed!!!",cnt);
        }
        printf("\nDo You Want to Add Another Starter? Press 1 :");
        scanf("%d",&ct);

        if(ct==1){
            goto staters;
        }
    }

    
    else if(ch1==2){
        veg:
        printf("\n1.Paneer Makhani :200");
        printf("\n2.Veg Masala     :250");
        printf("\n3.Veg Kurma      :300");
        
        printf("\nEnter Your Order Number..");
        scanf("%d",&ordno);

        if(ordno==1){
            total=total+200;
        }
        else if(ordno==2){
            total=total+250;
        }
        else if(ordno==3){
            total=total+300;
        }
        else{
            printf("\nOops!!!Invalid Order Number");
        }
        if((ordno>=1)&&(ordno<=3)){
            cnt++;
            printf("\n%d order is placed!!!",ordno);
        }
        printf("\nDo You Want to Add Another Veg? Press 1 :");
        scanf("%d",&ct);
        if(ct==1){
            goto veg;
        }
    }
    
    else if(ch1==3){
        nonveg:/*Label*/
        printf("\n1.Chicken Malvani :200");
        printf("\n2.CHICKEN Biryani :250");
        printf("\n3.Mutton Kebab    :300");
        
        printf("\nEnter Your Order Number..");
        scanf("%d",&ordno);

        if(ordno==1){
            total=total+200;
        }
        else if(ordno==2){
            total=total+250;
        }
        else if(ordno==3){
            total=total+300;
        }
        else{
            printf("\nOops!!!Invalid Order Number");
        }
        if((ordno>=1)&&(ordno<=3)){
            cnt++;
            printf("\n%d order is placed!!!",cnt);
        }
        printf("\nDo You Want to Add Another NonVEg? Press 1:");
        scanf("%d",&ct);
        if(ct==1){
            goto nonveg;
        }
    }
    else{
        printf("\nInvalid...");
    }

    printf("\nDo you want to order Main menu");
    scanf("%d",&ct);
    if(ct==1){
        goto menu;
    }
    if(cnt>0){

        cgst=total*0.06;
        sgst=total*0.06;
        finaltotal=cgst+sgst+total;
        printf("\n--------------------------------------");
        printf("\n\t   Yash Hotel");
        printf("\n--------------------------------------");
        printf("\nCurrent time: %s", ctime(&currentTime));
        printf("---------------------------------------");
        printf("\nTotal\t\t  :%.2d",total);
        printf("\nCGST\t\t  :%.2f",cgst);
        printf("\nSGST\t\t  :%.2f",sgst);
        printf("\n--------------------------------------");
        printf("\nFINAL BILL\t  :%.2f",finaltotal);
        printf("\n--------------------------------------");
    }
    else{
        printf("\nNo order found");
    }
    
}    