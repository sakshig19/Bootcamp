// Write a program to find the peak element of an array
// Brute force
// #include <stdio.h>
// int peakElement(int arr[], int n){
//     if(n==1){
//         return arr[0];
//     }
//     if(arr[0]>=arr[1]){
//         return arr[0];
//     }
//     if(arr[n-1]>=arr[n-2]){
//         return arr[n-1];
//     }
//     for(int i=1; i<n-1; i++){
//         if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the arrya: ");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int peak = peakElement(arr, n);
//     printf("The peak element is: %d",peak);
//     return 0;
// }

// Optimal Approach using Binary search
#include <stdio.h>
int main(){
    
}
