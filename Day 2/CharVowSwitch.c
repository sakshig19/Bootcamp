// Check if character is consonent or vowel using switch case

#include <stdio.h>
int main(){
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);
    switch(a){
        case 'a':
        printf("Vowel");
        break;

        case'e':
        printf("Vowel");
        break;

        case'i':
        printf("Vowel");
        break;

        case'o':
        printf("Vowel");
        break;

        case'u':
        printf("Vowel");
        break;
        case'A':
        printf("Vowel");
        break;
        case'E':
        printf("Vowel");
        break;
        case'I':
        printf("Vowel");
        break;
        case'O':
        printf("Vowel");
        break;
        case'U':
        printf("Vowel");
        break;
        default:
        printf("Consonent or special character");
        break;
    }
    return 0;
}