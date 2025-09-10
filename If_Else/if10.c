/*Identify Alpha is upper or lower case*/
/*Check for Vowel*/
#include<stdio.h>

int main(){
    char ch;
    printf("Enter An Alphabet:");
    scanf("%c",&ch);
    if((ch>=65)&&(ch<=90)){
        printf("Entered Alpha is in Uppercase!!\n");
        if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')){
            printf("%c is Capital Vowel!!!",ch);
        }
    }
    else if((ch>=97)&&(ch<=122)){
        printf("Entered Alpha is in Lowercase!!\n");
        if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
            printf("%c is Small Vowel!!!",ch);
        }
    }
    else if((ch>=48)&&(ch<=57)){
        printf("Entered value is number!!");
    }
    else{
        printf("its other character!!");
    }
    printf("\nASCII VALUE FOR %c is %d",ch,ch);
}
