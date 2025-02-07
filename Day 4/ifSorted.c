// Write a program to check if the array is sorted
#include <stdio.h>
int ifSorted(int arr[], int n){
    for(int i =0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,result;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    result = ifSorted(arr,n);
    if(result==1){
        printf("The array is sorted\n");
    }
    else{
        printf("The array is unsorted\n");
    }
return 0;
}