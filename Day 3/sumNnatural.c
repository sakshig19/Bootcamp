// WAP to find the sum of N natural numbers.
// n*n+1/2

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum = n*n+1/2;
    printf("The sum of natural numbers is : %d",sum);
    return 0;
}