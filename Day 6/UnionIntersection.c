#include<stdio.h>
void unionSorted(int arr1[], int n, int arr2[], int m){
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            printf("%d ",arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            printf("%d ",arr2[j]);
            j++;
        }
        else{
            printf("%d ",arr1[i]);
            i++;
            j++;
        }
    }
    while (i<n)
    {
        printf("%d ",arr1[i++]);
    }
    while (j<m)
    {
        printf("%d ",arr2[j++]);
    }
    printf("\n");
    
}
void Intersection(int arr1[], int n, int arr2[], int m){
    int i=0, j=0;
    while(i<n && j<m){
       if (arr1[i]==arr2[j])
       {
        printf("%d ",arr1[i]);
        i++,j++;
       }
       else if (arr1[i]<arr2[j])
       {
        i++;
       }
       else{
        j++;
       }
       
    }
}
int main(){
    int n,m,size;
    printf("Enter the size of first array: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements of first array: ");
    for(int i =0; i<n; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the elements of second array: ");
    for(int i =0; i<m; i++){
        scanf("%d",&arr2[i]);
    }
    size = n+m;
    unionSorted(arr1, n, arr2, m);
    Intersection(arr1,n,arr2,m);

    return 0;
}