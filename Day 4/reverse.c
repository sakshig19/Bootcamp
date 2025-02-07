// Write a program to reverse an array
#include <stdio.h>
int main(){
    int n,result;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
}