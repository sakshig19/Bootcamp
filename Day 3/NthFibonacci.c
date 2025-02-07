//  Write a program to print the nth term to Fibonacci series
#include <stdio.h>
void fibonacci(int n){
    int a=0, b=1, next;
    // printf("Fibonacci series : %d, %d, ",a,b);
    for(int i=2; i<n; i++){
        next = a+b;
        // printf("%d",next);
        a=b;
        b=next;
    }
    printf("The position of %d in fib series is  %d",next,n);
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    fibonacci(n);

    


    return 0;
}