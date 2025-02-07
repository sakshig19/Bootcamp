#include <stdio.h>
int main(){
    // printing the sum of digits
    int n,sum=0,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;;
        
    }
    printf("%d",sum);
    return 0;
}