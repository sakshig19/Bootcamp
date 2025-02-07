#include <stdio.h>
int maxConsecutive1(int arr[], int n){
    int maxCount =0;
    int tempCount =0;
    for(int i =0; i<n; i++){
        if(arr[i]==1){
            tempCount++;
            // maxCount = max(tempCount,maxCount);  max()function is not therer in C
            if(tempCount>maxCount){
                maxCount=tempCount;
            }
        }
        else{
            tempCount =0;
        }
    }
    return maxCount;
}
int main(){
    int n,result;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    result = maxConsecutive1(arr,n);
    printf("The maximun count of consecutive 1s is: %d",result);
    return 0;

}