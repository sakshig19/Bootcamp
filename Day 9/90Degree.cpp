#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout <<"Enter the size of the matrix(n x m): ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    // transpose matrix
    int ans[m][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            ans[j][i]=arr[i][j];
        }
    }
    //  Rotate 
     for (int i = 0; i < m; i++) {  // Rows of transposed matrix
        for (int j = 0, k = n - 1; j < k; j++, k--) {
            swap(ans[i][j], ans[i][k]);
        }
    }
    // Printing 
    cout<<"The 90 degree rotated array is: \n";
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
