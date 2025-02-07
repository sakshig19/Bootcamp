#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int element=0;
    for(int i =0; i<n; i++){
        element = element ^ arr[i];
    }
    printf("%d is occuring odd number of times",element);
    return 0;
}