// Fibonacci series
#include <stdio.h>
int fibonacci(int n){
    int a=0, b=1, next;
    printf("Fibonacci series : %d, %d, ",a,b);
    for(int i=3; i<=n; i++){
        next = a+b;
        printf("%d, ",next);
        a=b;
        b=next;
    }
    return 0;

}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}