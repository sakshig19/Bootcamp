#include <stdio.h>
int main(){
    int a,b,c,triangle;
    printf("Enter the Angles: ");
    scanf("%d %d %d",&a, &b, &c);
    triangle = a+b+c;
    if(triangle==180){
        printf("Valid triangle");
    }
    else{
        printf("Not a valid triangle");
    }
    return 0;
}