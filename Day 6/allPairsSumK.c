// // WAP to print all pairs in an array whose sum is equal to a given number
// #include <iostream>
// using namespace std;
// void allPairs(int arr[],int n, int k){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]+arr[j]==k)
//             {
//                 printf("(%d, %d)",arr[i],arr[j]);
//             }
//         }
//     }
    
// }
// int main(){
//     cout<<"Enter the size of array: ";
//     int n;
//     cin>>n;
//     int* arr = new int[n];
//     cout <<"Enter the elements of array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Enter the value of k: ";
//     int k;
//     cin>>k;
//     allPairs(arr,n,k);
// return 0;
// }

#include<stdio.h>
void allPairSum(int n, int arr[], int k){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==k){
                printf("(%d,%d) ",arr[i], arr[j]);
            }
        }
        
    }
    
}
int main(){
    int n,k;
    printf("Enter the size od the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum you want to get: ");
    scanf("%d",&k);
    allPairSum(n,arr,k);
    return 0;
}
