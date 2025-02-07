#include <iostream>
using namespace std;
void spiralTraversal(int arr[][10], int n, int m)
{
    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    cout << "Spiral Order: ";
    while (top <= bottom && left <= right)
    {
        // Move from left to right
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // Move from top to bottom
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
            right--;

        // Move from right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // Move from bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
    cout << endl;
}

int main()
{
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int arr[10][10];
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    spiralTraversal(arr, n, m);

    return 0;
}