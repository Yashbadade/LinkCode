#include<stdio.h>
#include<time.h>

int main(){
    int ordno,ct;
    float cgst,sgst,total,finaltotal;
    int cnt=0;
    total=0;
    int ch;

    time_t current_time;
    time(&current_time);

    menu:
    printf("\n1.Grocery\n2.Lifestyle\n3.Electronics");
    printf("\nEnter your Choice:");
    scanf("%d",&ch);

    if(ch==1){
        groc:

        printf("\n1.Ashirvaad Atta: 400");
        printf("\n2.Sugar per Kg  : 100");
        printf("\n3.Tata Salt per Pack: 200");
        scanf("%d",&ordno);

        if(ordno==1){
            total=total+400;
        }
        else if(ordno==2){
            total=total+100;
        }
        else if(ordno==3){
            total=total+200;
        }
        else{
            printf("\nInvalid Order Number!!");
        }
        if((ordno>=1)&&(ordno<=3)){
            cnt++;
            printf("\n %d number of order is Placed",cnt);
        }
        printf("\n Do you want to Continue with Grocery? Press 1");
        scanf("%d",&ct);
        if(ct==1){
            goto groc;
        }
    }
    else if(ch==2){
        lifestyle:

        printf("\n1.Adidas Shoes: 400");
        printf("\n2.Sunglasses  : 100");
        printf("\n3.Makeup kit  : 200");
        scanf("%d",&ordno);

        if(ordno==1){
            total=total+400;
        }
        else if(ordno==2){
            total=total+100;
        }
        else if(ordno==3){
            total=total+200;
        }
        else{
            printf("\nInvalid Order Number!!");
        }
        if((ordno>=1)&&(ordno<=3)){
            cnt++;
            printf("\n %d number of order is Placed",cnt);
        }
        printf("\n Do you want to Continue with Lifestyle? Press 1");
        scanf("%d",&ct);
        if(ct==1){
            goto lifestyle;
        }
    }
    else if(ch==3){
        elect:
        printf("\n1.Laptop Charger: 400");
        printf("\n2.Headphone     : 100");
        printf("\n3.Phone Cover   : 200");
        scanf("%d",&ordno);

        if(ordno==1){
            total=total+400;
        }
        else if(ordno==2){
            total=total+100;
        }
        else if(ordno==3){
            total=total+200;
        }
        else{
            printf("\nInvalid Order Number!!");
        }
        if((ordno>=1)&&(ordno<=3)){
            cnt++;
            printf("\n %d number of order is Placed",cnt);
        }
        printf("\n Do you want to Continue with Electronics? Press 1");
        scanf("%d",&ct);
        if(ct==1){
            goto elect;
        }
    }
    else{
        printf("\nInalid Choice");
    }
    printf("\nDo you want to go for main menu? press 1");
    scanf("%d",&ct);
    if(ct==1){
        goto menu;
    }

    if(cnt>0){
        cgst=total*0.06;
        sgst=total*0.06;
        finaltotal=total+cgst+sgst;
        printf("\n---------------------------------------");
        printf("\n\t\tYASH SHOP");
        printf("\n---------------------------------------");
        printf("\nCurrent Time: %s", ctime(&current_time));
        printf("----------------------------------------");
        printf("\nTOTAL\t\t\t:%.2f",total);
        printf("\nCGST \t\t\t:%.2f",cgst);
        printf("\nSGST \t\t\t:%.2f",sgst);
        printf("\n----------------------------------------");
        printf("\nFINAL TOTAL\t\t:%.2f",finaltotal);
        printf("\n---------------------------------------");
    }
}
