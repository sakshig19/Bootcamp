//  To find the factorial of the given number by user
#include <stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int o;
    printf("Enter the number: ");
    scanf("%d",&o);
    printf("%d",factorial(o));
    return 0;
}