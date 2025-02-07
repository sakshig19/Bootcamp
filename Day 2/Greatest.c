#include <stdio.h>
int main(){
    // TO FIND THE GREATEST AMONG 3 NUMBERS USING TERNARY OPERATOR
    int a,b,c,greatest;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a, &b, &c);
    greatest=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d is the greatest",greatest);
    return 0;
}