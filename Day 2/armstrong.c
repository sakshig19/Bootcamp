#include <stdio.h>
#include <math.h>
int main(){
    int n, org, d=0, sum=0, r;
    printf("Enter a number: ");
    scanf("%d",&n);
    org=n;
    while(n>0){
        d=d+1;
        n=n/10;
    }
    n=org;
    while(n>0){
        r=n%10;
        sum = sum+pow(r,d);
        n=n/10;
    }
    if(sum==org){
        printf("Number is an Armstrong number");
    }
    else{
        printf("Number is not an Armstrong number");
    }
    return 0;

}