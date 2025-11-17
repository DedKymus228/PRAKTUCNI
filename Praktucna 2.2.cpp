#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;

    cout << "Введіть розмір масиву A (n): ";
    cin >> n;
    vector<int> A(n);
    cout << "Введіть елементи A: ";
    for(int i = 0; i < n; i++) cin >> A[i];

    cout << "Введіть розмір масиву B (m): ";
    cin >> m;
    vector<int> B(m);
    cout << "Введіть елементи B: ";
    for(int i = 0; i < m; i++) cin >> B[i];

    int min_val = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] < min_val) {
            min_val = A[i];
        }
    }

    cout << "\nМінімальне значення в A: " << min_val << endl;

    for (int i = 0; i < m; i++) {
        if (B[i] > 0) {
            B[i] = min_val;
        }
    }

    cout << "Змінений масив B: ";
    for (int x : B) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}