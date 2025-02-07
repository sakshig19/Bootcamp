#include <stdio.h>
int main(){
    // Check leap year
    int year, leap;
    printf("Enter the year: ");
    scanf("%d",&year);
    // using ternary
    leap = (year%4==0 && (year%100!=0 || year%400==0))?printf("It is a leap year"):printf("It is not a leap year");

    // Using if-else
    // if(year%4==0 && (year%100!=0 || year%400==0)){
    //     printf("Leap year");
    // }
    // else{
    //     printf("Not a leap year");
    // }
    return 0;
}