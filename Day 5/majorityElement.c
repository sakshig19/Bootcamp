//  Write a program in C to find the majority element 
#include <stdio.h>
int majorityElement(int arr[],int n){
    int majority =-1;
    for(int i=0; i<n; i++){
        int count =0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==arr[i]){
                count++;
            }
            
        }
        if(count>=(n/2+1)){
                majority = arr[i];
            }
    }
    return majority;
}
int main(){
    int n,result;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    result = majorityElement(arr,n);
    printf("%d is the majority element",result);
    return 0;
}