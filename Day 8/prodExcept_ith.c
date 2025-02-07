//  Write a program to create another array with the product of all elements except the ith element.
// BRUTE FORCE
// #include<stdio.h>
// int main(){
//     int arr[4]={1,2,3,4};
//     int prod=1;
//     int ans[4];
//     for(int i=0; i<4; i++){
//         int prod=1;
//         for(int j=0; j<4; j++){
//             if(i!=j){
//                 prod *= arr[j];
//             }
//         }
//         ans[i]=prod;
//     }
//     printf("The product is: ");
//     for(int i=0; i<4; i++){
//         printf("%d  ",ans[i]);
//     }
//     return 0;
// }

// OPTIMAL APPROACH using division algorithm
#include<stdio.h>
int main(){
    int n;
    int arr[n];
    printf("Enter the size of the array: ");
    printf("Enter the elements of the array: ");
    int count =0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        // if(arr[i]!=0){
        //     if(count>0)
        // }
        // else{

        // }
    }
    return 0;
}