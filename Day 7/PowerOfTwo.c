#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of first array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of first array: ");
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
  
    return 0;
}