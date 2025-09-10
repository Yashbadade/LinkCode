#include<stdio.h>

int main(){
    char ch;

    printf("\nEnter a Character:");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\nIts Capital Vowel...");
        break;

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nIts Small Vowel...");
        break;
    
        default:
            printf("\nIts other Character!!!!");
        break;
    }
}
