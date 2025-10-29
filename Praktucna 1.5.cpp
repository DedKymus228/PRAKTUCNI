#include <iostream>
#include <climits>
#include <vector>
#include <bitset>
#include <algorithm> // Для std::transform
#include <stdexcept>
using  namespace std;
int main() {

    //Task1
    int A;
    std::cout << "input A: ";
    std::cin >> A;

    int countZeros = 0;
    int countOnes = 0;

    const int totalBits = sizeof(A) * CHAR_BIT;
    unsigned int num = A;


    for (int i = 0; i < totalBits; i++) {

        if (num & 1) {
            countOnes++;
        } else {
            countZeros++;
        }

        num = num >> 1;
    }

    std::cout << "count '1': " << countOnes << std::endl;
    std::cout << "count '0': " << countZeros << std::endl;


    //Task2


    int n;
    cout<<"Input masive size\n";
    cin >> n;
    vector<int> X(n), Y(n), Z(n);

    cout << "Input X (0 or 1): \n";
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }

    cout << "Input Y (0 or 1): \n";
    for (int i = 0; i < n; i++) {
        cin >> Y[i];
    }

    for (int i = 0; i < n; i++) {
        Z[i] = (X[i] + Y[i]) % 2;
    }

    cout << "result XOR: " << endl;;
    for (int i = 0; i < n; i++) {
        cout << Z[i] << " " << endl;
    }
    return 0;
}