#include<stdio.h>
#define max 20
int main(){
    int set1[max],set2[max],setunion[max],setintersection[max],setDif1[max],setDif2[max];
    int l1,l2,i,j,k,ch,flag,ct;

while (1)
{
    printf("\n1.Union Set\n2.Intersection Set\n3.Set1-Set2\n4.Set2-Set1");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);
    printf("How many Number of Set 1 you want:");
    scanf("%d",&l1);

    printf("\nEnter %d Number in Set 1:",l1);
    for ( i = 0; i < l1; i++)
    {
        scanf("%d",&set1[i]);
    }
    
    printf("How many Number of Set 2 you want:");
    scanf("%d",&l2);

    printf("\nEnter %d Number in Set 2:",l2);
    for ( j = 0; j < l2; j++)
    {
        scanf("%d",&set2[j]);
    }
    
    switch (ch)
    {
    case 1:    /*union Set*/ 
        k=0;
    for ( i = 0; i < l1; i++)
    {
        setunion[k]=set1[i];
        k++;
    }
    for ( j = 0; j < l2; j++)
    {
        flag=1;
        for ( i = 0; i < l1; i++)
        {
            if (set2[j]==set1[i])
            {
                flag=0;
                break;
            }
        }
            if (flag==1)
            {
                setunion[k]=set2[j];
                k++;
            }
        }
    printf("\nSet union is:");
    for ( i = 0; i < k; i++)
    {
    printf("%5d",setunion[i]);
    }
    break;

    case 2:
    /*Set Intersection*/
    k=0;
    for ( i = 0; i <l1 ; i++)
    {
        for ( j = 0; j < l2; j++)
        {
            if (set1[i]==set2[j])
            {
                setintersection[k]=set1[i];
                k++;
                break;
            }
        }
    }
    printf("\nSet Intersection is:");
    for ( i = 0; i < k; i++)
    {
        printf("%5d",setintersection[i]);
    }
    break;

    case 3:
    /*Set1 - Set2*/
    k=0;
    for ( i = 0; i < l1; i++)
    {
    for ( j = 0; j < l2; j++)
        {
            flag=1;
            if (set1[i]==set2[j])
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            setDif1[k]=set1[i];
            k++;
        }    
    }
    printf("\nSet Diffrence Between Set1 and Set2:");
    for ( i = 0; i < k; i++)
    {
    printf("%d",setDif1[i]);
    }
    break;

    case 4:
    /*Set 2- set 1*/
    k=0;
    for ( j = 0; j < l2; j++)
    {
        flag=1;
        for ( i = 0; i < l1; i++)
        {
            if (set2[j]==set1[i])
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            setDif2[k]=set2[j];
            k++;
        }
    }
    printf("\nSet Difference Between Set 2 and Set 1:");
    for ( j = 0; j < k; j++)
    {
        printf("%5d",setDif2[j]);
    }
    break;
    }
    printf("\nDo You Want To Continue Press 1 or 2 for Stop:");
    scanf("%d",&ct);
    if (ct!=1)
    {
        break;
    }
}
    printf("\n--------------------Thank You------------------------------");
}