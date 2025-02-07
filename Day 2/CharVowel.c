#include <stdio.h>
int main(){

    // Check if character is consonent or vowel
    char a,result;
    printf("Enter the character to check: ");
    scanf("%c",&a);
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
        printf("It is a Vowel");
    }
    else{
        printf("It is a consonent");
    }
    return 0;
}