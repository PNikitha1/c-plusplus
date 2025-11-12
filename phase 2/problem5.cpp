#include <iostream>
using namespace std;

void printMatrix(int matrix[3][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int matrix[3][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main() {
    const int SIZE = 3;
    int arr[SIZE][SIZE];

    cout << "Enter the elements for the 2D matrix:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Original 2D array in matrix format:" << endl;
    printMatrix(arr, SIZE);

    transposeMatrix(arr, SIZE);

    cout << "Transposed 2D array in matrix format:" << endl;
    printMatrix(arr, SIZE);

    return 0;
}
