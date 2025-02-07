#include <iostream>
using namespace std;

// Function to print snake pattern
void snakePattern(int** matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            for (int j = m - 1; j >= 0; j--) {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the size of the matrix (n x m): ";
    cin >> n >> m;

    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Snake Pattern:\n";
    snakePattern(matrix, n, m);

    
    return 0;
}