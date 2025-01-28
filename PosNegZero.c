#include <stdio.h>
int main(){
    // TO find if the number is positive/negative/zero
    int a,ans;
    printf("Enter the number: ");
    scanf("%d",&a);
    ans= (a==0)?((a<0)?printf("Negative"):printf("Zero")):((a>0)?printf("Positive"):printf("Negative"));
    return 0;
}