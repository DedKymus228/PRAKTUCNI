#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int m, n;
    cout << "Enter rows (m): ";
    cin >> m;
    cout << "Enter columns (n): ";
    cin >> n;

    vector<vector<int>> A(m, vector<int>(n));

    cout << "\nMatrix A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 100;
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }

    vector<int> B(n);

    for (int j = 0; j < n; j++) {
        int minVal = A[0][j];
        for (int i = 1; i < m; i++) {
            if (A[i][j] < minVal) {
                minVal = A[i][j];
            }
        }
        B[j] = minVal;
    }

    cout << "\nArray B:" << endl;
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (B[j] < B[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = B[i];
            B[i] = B[min_idx];
            B[min_idx] = temp;
        }
    }

    cout << "\nSorted Array B:" << endl;
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}