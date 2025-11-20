#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

long long calculateSum(int** arr, int rows, int cols) {
    long long sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    srand(time(0));

    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "\nGenerated Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    long long totalSum = calculateSum(matrix, rows, cols);

    cout << "\nSum of all elements: " << totalSum << endl;

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}