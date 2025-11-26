#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Vvedit lantsiuzhok (Variant 2): ";
    cin >> input;

    int i = 0;
    int len = input.length();
    bool error = false;


    if (i < len && (input[i] == '+' || input[i] == '-')) {
        i++;
    } else {
        cout << "Error: Lantsiuzhok maye pochynatysia z '+' abo '-'" << endl;
        return 0;
    }


    bool hasDigits = false;
    while (i < len && input[i] >= '3' && input[i] <= '9') {
        hasDigits = true;
        i++;
    }

    if (!hasDigits) {
        cout << "Error: Pislia znaku mayut buty cyfry 3..9" << endl;
        return 0;
    }


    while (i < len && input[i] >= 'J' && input[i] <= 'Z') {
        i++;
    }

    if (i < len && input[i] == '+') {
        i++;
        if (i == len) {
            cout << "Succes! Lantsiuzhok virnyi." << endl;
        } else {
            cout << "Error: Pislia kincevogo '+' ye zayvi symvoly." << endl;
        }
    } else {
        cout << "Error: Lantsiuzhok maye zakinchuvatysia na '+'" << endl;
    }

    return 0;
}