// write a program to sort an array which consists of only 0, 1 and 2 withoit using sorting algorithm.

// This is a brute force

#include<stdio.h>
int main()
{
    int n,t0=0, t1=0, t2=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0; i<n; i++){
        if(arr[i]==0){
            t0++;
        }
        else if(arr[i]==1){
            t1++;
        }
        else{
            t2++;
        }
    }
    for(int i =0; i<t0; i++){
            printf("0 ");
        }
        for(int i =0; i<t1; i++){
            printf("1 ");
        }
        for(int i =0; i<t2; i++){
            printf("2 ");
        }

    return 0;
}