#include<stdio.h>
int missingElement(int arr[], int n){
    int temp1=0, temp2 =0;
    for (int i = 1; i <= n+1; i++)
    {
        temp1 = temp1^i;
    }
    for (int i = 0; i < n; i++)
    {
        temp2 = temp2^arr[i];
    }
    return temp1^temp2;
    
}
int main(){
    int n;
    printf("Enter the size of n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int result = missingElement(arr,n);
    printf("%d is missing", result);
  
    return 0;
}