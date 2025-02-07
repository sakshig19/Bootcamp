#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout <<"Enter the size of the matrix: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int ans[m][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            ans[j][i]=arr[i][j];
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}