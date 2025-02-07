// Write a program to check for Uppercase, Lowercase or special character

#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character to check weather it is a uppercase, lowercase or a special character: ");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90){
        printf("It is Uppercase");
    }
    else if(ch>=97 && ch<=122){
        printf("It is Lowercase");
    }
    else
    {
        printf("It is a special Character");
    }
    return 0;
}
