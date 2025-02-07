// Checking if the triangle is valid if the sum of any sides of a triangle is greater than the third side of a triangle.
#include<stdio.h>
int main(){
    int s1, s2, s3;
    printf("Enter the sides of triangle: ");
    scanf("%d %d %d",&s1,&s2,&s3);
    // if(s1+s2>s3){
    //     printf("The triangle is valid");
    // }
    // else if(s2+s3>s1){
    //     printf("The triangle is valid");
    // }
    // else if(s1+s3>s2){
    //     printf("The triangle is valid");
    // }
    // else{
    //     printf("Triangle is invalid");
    // }

    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}