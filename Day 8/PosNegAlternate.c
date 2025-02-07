// Write a program to rearrange the positive and negative integers alternatively in an array
// BRUTE FORCE
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array: ");
//     for(int i =0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int positive[n/2];
//     int negative[n/2];
//     int posindex=0, negindex=0;
//     for(int i =0; i<n; i++){
//         if(arr[i]>0){
//             positive[posindex++]=arr[i];
//         }
//         else{
//             negative[negindex++]=arr[i];
//         }
    
//     }
//     int result[n];
//     for(int i=0; i<n; i++){
//         result[2 * i] = positive[i];
//         result[2 * i + 1] = negative[i];
//     }
//     for(int i=0; i<n; i++){
//         printf("%d  ",result[i]);
//     }
//     return 0;
// }

// OPTIMAL APPROACH
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int posIndex=0;
    int negIndex =1;
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int result[n];
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            result[negIndex]=arr[i];
            negIndex +=2;
        }
        else{
            result[posIndex]=arr[i];
            posIndex +=2;
        }
    }
    printf("The alternate arrangement of positive and negative elements is: \n");
    for(int i=0; i<n; i++){
        printf("%d  ",result[i]);
    }
    return 0;
}