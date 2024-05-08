#include <iostream>
#include <vector>
 
using namespace std;
 
// Function to rotate the matrix in a clockwise direction
void rotateMatrix(vector<vector<int>> &matrix) {
    int n = matrix.size();
 
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
 
    // Reverse the columns
    for (int i = 0; i < n; i++) {
        for (int j = 0, k = n - 1; j < k; j++, k--) {
            swap(matrix[j][i], matrix[k][i]);
        }
    }
}
 
// Function to print the matrix
void printMatrix(vector<vector<int>> &matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
int main() {
    vector<vector<int>> matrix = {{1, 0, 0}, 
                                  {0, 0, 0}, 
                                  {0, 0, 1}};
    cout << "Original matrix:" << endl;
    printMatrix(matrix);
    rotateMatrix(matrix);
    rotateMatrix(matrix);
    cout << "Rotated matrix:" << endl;
    printMatrix(matrix);
    return 0;
}