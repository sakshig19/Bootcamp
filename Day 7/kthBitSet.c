// Write a program to check if the kth bit is set.
#include<stdio.h>
void checkBit(int n, int k){
    if(n&(1<<(k-1))){
        printf("This bit is set(1)");
    }
    else{
        printf("This bit is not set(0)");
    }
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int k;
    printf("Enter the bit to check : ");
    scanf("%d",&k);
    checkBit(n,k);
    return 0;
}