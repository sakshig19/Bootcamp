// Write a program to find the second largest element in an array
#include<stdio.h>
int sLargest(int arr[],int n){
    int l1 = arr[0],l2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>l1)
        {
            l2 = l1;
            l1 = arr[i];
        }
        else if(arr[i] > l2 && arr[i] < l1)
        {
            l2 = arr[i];
        }
    }
    return l2;
}
int main(){
    int n;
    int arr[n];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int result = sLargest(arr,n);
    printf("The second largest element is : %d",result);

}