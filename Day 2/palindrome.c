#include <stdio.h>
int main(){
    int n,org,reverse,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    org = n;
    while(n!=0){
        r=n%10;reverse = reverse*10+r;
        n/=10;
    }
    if(org==reverse){
        printf("Is a palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}